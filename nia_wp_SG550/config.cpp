#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_SG550 {
        requiredaddons[] = { "hlcweapons_core"};
        units[] = {
        };
        weapons[] = { 
        };
        magazines[] = {};
        author="toadie";
        version = "1";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


class asdg_OpticRail;
class NIA_STANAG550 : asdg_OpticRail
{
    iconPosition[] = { 0.5, 0.35 };
    iconScale = 0.2;
    class compatibleItems {
        hlc_optic_ZF95 = 1;
        hlc_optic_Kern_550 = 1;
        hlc_optic_Kern2d_550 = 1;
        hlc_optic_FNSTANAG4X_550 = 1;
        hlc_optic_FNSTANAG4X2D_550 = 1;
    };
};
class asdg_FrontSideRail;
class asdg_OpticRail1913 : asdg_OpticRail{
    class compatibleItems;
};
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class nia_rifle_grips_slot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_ROTEX3P = 1;
    };
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems {
    };
};
class nia_charms_slot;
class cfgMods {
    class Mod_Base;
    class Niarms_SG550 : Mod_Base {
        name = "NIArsenal: SG550 Rifles";
        picture = "nia_wp_sg550\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "nia_wp_sg550\tex\ui\NIArms1_ca.paa";
        logoOver = "nia_wp_sg550\tex\ui\NIArms1_ca.paa";
        logoSmall = "nia_wp_sg550\tex\ui\NIArms1_ca.paa";
    };
};

class CfgVehicles {
    class Man;
    class NATO_Box_Base;
    class HLC_SG550_ammobox : NATO_Box_Base {
        dlc = "Niarms_SG550";
        scope = 2;
        vehicleClass = "Ammo";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
        displayName = "HLC SG550 Ammo";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 30;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_30Rnd_556x45_EPR_sg550, 20);
            __M_MAG(hlc_30Rnd_556x45_SOST_sg550, 20);
            __M_MAG(hlc_30Rnd_556x45_SPR_sg550, 20);
            __M_MAG(hlc_30Rnd_556x45_T_sg550, 20);
            __M_MAG(hlc_30rnd_556x45_M_sg550, 20);
            __M_MAG(hlc_30Rnd_556x45_MDIM_sg550, 20);
            __M_MAG(hlc_30Rnd_556x45_TDIM_sg550, 20);
            //__M_MAG(hlc_25Rnd_9x19mm_JHP_AUG, 20);
            //__M_MAG(hlc_25Rnd_9x19mm_subsonic_AUG, 20);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_SG550, 5);
            __M_WEP(hlc_rifle_SG550_RIS, 5);
            __M_WEP(hlc_rifle_SG550_TAC, 5);
            __M_WEP(hlc_rifle_SG550_GL, 5);
            __M_WEP(hlc_rifle_SG550_TAC_GL, 5);

            __M_WEP(hlc_rifle_SG551SB, 5);
            __M_WEP(hlc_rifle_SG551SB_RIS, 5);
            __M_WEP(hlc_rifle_SG551SB_TAC, 5);
            __M_WEP(hlc_rifle_SG551SB_TAC_GL, 5);

            __M_WEP(hlc_rifle_SG551LB, 5);
            __M_WEP(hlc_rifle_SG551LB_RIS, 5);
            __M_WEP(hlc_rifle_SG551LB_TAC, 5);
            __M_WEP(hlc_rifle_SG551LB_TAC_GL, 5);

            __M_WEP(hlc_rifle_SG553SB, 5);
            __M_WEP(hlc_rifle_SG553SB_RIS, 5);
            __M_WEP(hlc_rifle_SG553SB_TAC, 5);

            __M_WEP(hlc_rifle_SG553LB, 5);
            __M_WEP(hlc_rifle_SG553LB_RIS, 5);
            __M_WEP(hlc_rifle_SG553LB_TAC, 5);

            __M_WEP(hlc_rifle_SG550Sniper, 3);
            __M_WEP(hlc_rifle_SG550Sniper_RIS, 3);

            __M_WEP(hlc_rifle_sg553RSB, 5);
            __M_WEP(hlc_rifle_sg553RSB_TAC, 5);
        };
        class TransportItems {
            __M_ITM(hlc_optic_DiavariZ_5501, 5);
            __M_ITM(hlc_optic_ZF95, 5);
            __M_ITM(hlc_optic_FNSTANAG4X_550, 10);
            __M_ITM(hlc_optic_FNSTANAG4X2d_550, 10);
            __M_ITM(hlc_optic_Kern2d_550, 5);
            __M_ITM(hlc_optic_Kern_550, 5);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_ACO_grn, 10);
        };
    };
    class Weapon_Base_F;
    
    __WEAPONHOLDER(hlc_rifle_SG550, hlc_30Rnd_556x45_EPR_sg550, SG550, Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG550_RIS, hlc_30Rnd_556x45_EPR_sg550, SG550(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG550_TAC, hlc_30Rnd_556x45_EPR_sg550, SG550(Tactical), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG550_GL, hlc_30Rnd_556x45_EPR_sg550, SG550(GL), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG550_TAC_GL, hlc_30Rnd_556x45_EPR_sg550, SG550(Tactical/GL), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_SG551SB, hlc_30Rnd_556x45_EPR_sg550, SG551-SB, Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551SB_RIS, hlc_30Rnd_556x45_EPR_sg550, SG551-SB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551SB_TAC, hlc_30Rnd_556x45_EPR_sg550, SG551-SB(Tactical), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551SB_TAC_GL, hlc_30Rnd_556x45_EPR_sg550, SG551-SB(Tactical/GL), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_SG551LB, hlc_30Rnd_556x45_EPR_sg550, SG551-LB, Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551LB_RIS, hlc_30Rnd_556x45_EPR_sg550, SG551-LB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551LB_TAC, hlc_30Rnd_556x45_EPR_sg550, SG551-LB(Tactical), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG551LB_TAC_GL, hlc_30Rnd_556x45_EPR_sg550, SG551-LB(Tactical/GL), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_SG553SB, hlc_30Rnd_556x45_SOST_sg550, SG553-SB, Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG553SB_RIS, hlc_30Rnd_556x45_SOST_sg550, SG553-SB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG553SB_TAC, hlc_30Rnd_556x45_SOST_sg550, SG553-SB(Tactical), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_SG553LB, hlc_30Rnd_556x45_SOST_sg550, SG553-LB, Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG553LB_RIS, hlc_30Rnd_556x45_SOST_sg550, SG553-LB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SG553LB_TAC, hlc_30Rnd_556x45_SOST_sg550, SG553-LB(Tactical), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_SG550Sniper, hlc_30Rnd_556x45_SPR_sg550, SG550-1 SP, Niarms_SG550, Toadie, SniperRifles);
    __WEAPONHOLDER(hlc_rifle_SG550Sniper_RIS, hlc_30Rnd_556x45_SPR_sg550, SG550-1 SP(RIS), Niarms_SG550, Toadie, SniperRifles);

    __WEAPONHOLDER(hlc_rifle_sg553RSB, hlc_30Rnd_762x39_b_ak, SG553R-SB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_sg553RSB_TAC, hlc_30Rnd_762x39_b_ak, SG553R-SB(Tactical), Niarms_SG550, Toadie, AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_sg553RLB, hlc_30Rnd_762x39_b_ak, SG553R-SB(RIS), Niarms_SG550, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_sg553RLB_TAC, hlc_30Rnd_762x39_b_ak, SG553R-SB(Tactical), Niarms_SG550, Toadie, AssaultRifles);

    
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    //AUGMags
    class hlc_30Rnd_556x45_EPR_sg550 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_SG550";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_SG550;
        initspeed = 974.8;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_epr_ca.paa";
        model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = $STR_NIA_556_EPR;
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SOST_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_SG550;
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
        initspeed = 954.4;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_sost_ca.paa";
                model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = $STR_NIA_556_SOST;
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SPR_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_SG550;
        initspeed = 868.7;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_spr_ca.paa";
        model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = $STR_NIA_556_SPR;
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_T_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_SG550;
        initspeed = 974.8;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_t_ca.paa";
                model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
                modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
                hiddenSelections[] = { "roundtype1", "roundtype2" };
                hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = $STR_NIA_556_Tracer;
        author = "Spartan0536,Toadie";
    };
    class hlc_30rnd_556x45_M_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_SG550;
        model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_m_ca.paa";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_MDIM_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_SG550;
        initspeed = 974.8;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_m_ca.paa";
        model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        scope = 2;
        tracersevery = 4;
        mass = 7;
        displaynameshort = $STR_NIA_556_MDim;
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_TDIM_sg550 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG550";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_SG550;
        initspeed = 974.8;
        lastroundstracer = 1;
        picture = "\nia_wp_sg550\tex\ui\m_sg550_t_ca.paa";
        model = "\nia_wp_sg550\mesh\magazine\magazine.p3d";
        modelSpecial = \nia_wp_sg550\mesh\magazine\Proxy\30rnd_556NATO_SG550;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = $STR_NIA_556_IRDIM;
        author = "Spartan0536,Toadie";
    };
};

class CfgWeapons {

    class ItemCore;

//muzzles

    class muzzle_snds_H : ItemCore {
        class ItemInfo;
    };
    class NIAmuzzle_flash_rifle_Rotex3P : ItemCore
    {
        dlc = "Niarms_SG550";
        scope = 2;
        model = "hlc_core\mesh\muzzleflash\Muzzle_flash_3prong.p3d";
    };
    class hlc_muzzle_snds_ROTEX3P : muzzle_snds_H {
        dlc = "Niarms_SG550";
        author = "Toadie";
        descriptionShort = $STR_NIA_brake_Rotex3P_556_DESC;
        displayName = $STR_NIA_muzzle_snds_ROTEX3P;
        picture = "nia_wp_sg550\tex\UI\gear_rotex3P_ca.paa";
        model = "nia_wp_sg550\mesh\acc\Rotex_3P_brake.p3d";
        class ItemInfo : ItemInfo {
            mass = 1;
            soundTypeIndex = 0;
            muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
            alternativeFire = "NIAmuzzle_flash_rifle_Rotex3P";  // class in cfgWeapons with model of muzzle flash	
        };
        inertia = 0.00;
    };
//Optics
    class optic_LRPS : ItemCore {
        class ItemInfo;
    };
    class InventoryOpticsItem_Base_F;
    class hlc_optic_DiavariZ_5501 : optic_lrps {
        dlc = "Niarms_SG550";
        author = "Toadie";
        descriptionshort = $STR_NIA_DiavariZ_DESC;
        model = "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ.p3d";
        displayname = $STR_NIA_opticDiavariZ_550;

        class ItemInfo : ItemInfo {
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.0996;
                    opticsZoomMax = 0.0249;
                    opticsZoomInit = 0.0249;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                    discreteDistanceInitIndex = 4;
                    discretefov[] = { 0.249 / 2.5, 0.249 / 4, 0.249 / 6, 0.249 / 8, 0.249 / 10 };
                    discreteInitIndex = 0;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "eye";
                    modelOptics[] = { "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ2,5x", "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ4x", "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ6x", "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ8x", "nia_wp_sg550\mesh\SG550-1Scope\DiavariZ10x" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "eye2";
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
    };
        class hlc_optic_ZF95Base : optic_lrps {
        class ItemInfo;
    };
    class hlc_optic_ZF95 : hlc_optic_ZF95Base {
        dlc = "Niarms_SG550";
        author = "Toadie";
        descriptionshort = $STR_NIA_ZF95_DESC;
        model = "nia_wp_sg550\mesh\acc\Optic\ZF95.p3d";
        displayname = $STR_NIA_optic_ZF95_550;
    };
    class optic_aco;
    class hlc_optic_ZF4xBase : optic_aco { 
        class ItemInfo; 
    };
    class hlc_optic_FNSTANAG4X_550 : hlc_optic_ZF4xBase {
        dlc = "Niarms_SG550";
        author = "Toadie";
        model = "nia_wp_sg550\mesh\acc\Optic\FN4x.p3d";
        descriptionshort = $STR_NIA_FNZF4x_DESC;
        displayname = $STR_NIA_optic_ZF4x_550;
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 10;
            opticType = 2;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
            class OpticsModes
            {
                class Snip
                {
                    cameradir = "";
                    usemodeloptics = 0;
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye2";
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
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class hlc_optic_FNSTANAG4X2d_550 : hlc_optic_ZF4xBase {
        dlc = "Niarms_SG550";
        author = "Toadie";
        descriptionshort = $STR_NIA_FNZF4x_DESC;
        displayname = $STR_NIA_optic_ZF4x_550_2d;
        model = "nia_wp_sg550\mesh\acc\Optic\FN4x.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 15.4;
            opticType = 2;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics" };
                    memoryPointCamera = "eye";
                    cameradir = "";
                    opticsZoomMin = 0.25 / 4;
                    opticsZoomMax = 0.25 / 4;
                    opticsZoomInit = 0.25 / 4;
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
    };
    class hlc_optic_KernBase;
    class hlc_optic_Kern_550 : hlc_optic_KernBase
    {
        dlc = "Niarms_SG550";
        scope = public;
        author = "Toadie";
        descriptionshort = $STR_NIA_AARAU_DESC;
        displayname = $STR_NIA_optic_kern_AARAU_550;
        picture = "\hlc_core\tex\ui\gear_AARAU_x_ca";
        model = "nia_wp_sg550\mesh\acc\Optic\AARAU.p3d";
        weaponInfoType = "RscWeaponZeroing";

        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 10;
            opticType = 1;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d";
            class OpticsModes
            {
                class Snip
                {
                    cameradir = "";
                    usemodeloptics = 0;
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 800;
                    memoryPointCamera = "eye2";
                    //modelOptics[] = {"\hlc_wp_sigamt\mesh\aarau\aarau_optics"};
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
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
        inertia = 0.2;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_Kern2d_550 : hlc_optic_Kern_550
    {
        dlc = "Niarms_SG550";
        author = "Toadie, Kaukaussus";
        displayname = $STR_NIA_optic_kern_AARAU_550_2D;
        class ItemInfo : ItemInfo
        {
            class OpticsModes : OpticsModes
            {
                class Snip : Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 800;
                    modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d" };
                };
                class Kolimator : Kolimator {};
            };
        };
    };
    
//weapons
    class Rifle;
    class UGL_F;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_sg550_base : Rifle_Base_F {
        dlc = "Niarms_SG550";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Toadie";
        scope = private;
        magazineReloadSwitchPhase = 0.5;
        __AI_DISPERSION_COEF;
        class Library {
            libTextDesc = "SIG SG550";
        };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        recoil = "recoil_trg20";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
            /*class Mflash
            {
                positionName = "usti hlavne";
                directionName = "mflash_end";
                effectName = "NIA_muzzleFX";
            };*/ 
            //Unincluded, looks like ass. Goddamn it bohemia why cant we have nice things
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 33;
            class PointerSlot {};
            class GripodSlot {};
            class Charmslot : nia_charms_slot {};
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        magazines[] = { __556SG550_MAGS };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        inertia = 0.36;
        __DEXTERITY(3.6, 2);
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

        modes[] = { "Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

        class Single : Mode_SemiAuto {
            __ROF(710);
            __MOA(1.9);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet" };
            };
        };
        class FullAuto : Mode_FullAuto {
            __ROF(680);
            __MOA(2.1);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet" };
            };
        };
        class Burst : Mode_Burst
        {
            __ROF(710);
            __MOA(2.1);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
                burst = 4; 
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
        drysound[] = { "\nia_wp_SG550\snd\sg550_dryfire", 1, 1, 10 };
        reloadMagazineSound[] = { "\nia_wp_SG550\snd\550\sg550_reload", 1, 1, 30 };
        changeFiremodeSound[] = { "\a3\sounds_f\weapons\Closure\firemode_changer_4", 1, 1, 8 };
        class ItemInfo {
            priority = 1;
        };
        class hlc_GL_GL5040 : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350 };
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "GL5040";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadtime = 0.1;
            reloadAction = "HLC_GestureReloadGL5040";
            reloadMagazineSound[] = { "hlc_core\sound\GL\M203_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
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
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                __AI_ROF_GL_SINGLE;
            };
        };
    };

    class hlc_rifle_SG550 : hlc_sg550_base {
        author = "Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "a3\sounds_f_mark\arsenal\sfx\bipods\Bipod_OP_deploy", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "a3\sounds_f_mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        initspeed = -1;
        inertia = 0.41;
        __DEXTERITY(4.1, 0);
        scope = public;
        displayName = $STR_NIA_SG550;
        descriptionShort = $STR_NIA_SG550_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg550.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg550_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        reloadAction = "HLC_GesturereloadSG550";
        discretedistance[] = { 100, 200, 300, 400, 100 };
        discreteDistanceCameraPoint[] = { "eye", "eye_200", "eye_300", "eye_400", "eye_300" }; /// the angle of gun changes with zeroing

        cameradir = "eye_Look";
        discretedistanceinitindex = 0;
        //hiddenSelections[] = { "Camo" };
       // hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        class Library {
            libTextDesc = "SIG SG550";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
            class MuzzleSlot {};
            class CowsSlot :NIA_STANAG550 {};
            class Charmslot : nia_charms_slot {};
        };
    };
    class hlc_rifle_SG550_RIS : hlc_rifle_SG550
    {
        author = "Toadie";
        displayName = $STR_NIA_SG550_RIS;
        descriptionShort = $STR_NIA_SG550_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg550_RIS.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg550_ris_ca";
        inertia = 0.4174;
        __DEXTERITY(4.174, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 92;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class hlc_rifle_SG550_TAC: hlc_rifle_SG550 {
        author = "Toadie";
        displayName = $STR_NIA_SG550_TAC;
        descriptionShort = $STR_NIA_SG550_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg550_tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg550_tac_ca";
        ACE_barrelTwist = 178;
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = (0.41+0.066);
        __DEXTERITY((4.1+0.66), -1);
        rhs_grip1_change = "hlc_rifle_SG550_TAC_grip";
        rhs_grip2_change = "hlc_rifle_SG550_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_SG550_TAC_grip3";
        baseWeapon = "hlc_rifle_SG550_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 104;
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
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class GripodSlot : nia_rifle_grips_slot {};
        };
    };
    //RHS Grips. Maybe eventually NIArms also, but let's get one foot ahead of the other first before we think about a marathon
    class hlc_rifle_SG550_TAC_grip : hlc_rifle_SG550_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.41 + 0.066);
        __DEXTERITY((4.1 + 0.66), 1);
    };
    class hlc_rifle_SG550_TAC_grip2 : hlc_rifle_SG550_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.41 + 0.066);
        __DEXTERITY((4.1 + 0.66), 1);
    };
    class hlc_rifle_SG550_TAC_grip3 : hlc_rifle_SG550_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.41 + 0.066);
        __DEXTERITY((4.1 + 0.66), 1);
    };
    class hlc_rifle_SG550_GL :hlc_rifle_SG550
    {
        author = "Toadie";
        displayName = $STR_NIA_SG550_GL;
        hasBipod = false;
        muzzles[] = { "this", "hlc_GL_GL5040" };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_gl5040.rtm" };
        picture = "\nia_wp_sg550\tex\ui\sg550_gl_ca";
        model = "nia_wp_sg550\mesh\sg550\sg550_GL.p3d";
        inertia = (0.41+0.17);
        __DEXTERITY((4.1+1.7), -1);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127;
        };
    };
    class hlc_rifle_SG550_TAC_GL :hlc_rifle_SG550
    {
        author = "Toadie";
        displayName = $STR_NIA_SG550_TAC_GL;
        hasBipod = false;
        muzzles[] = { "this", "hlc_GL_GL5040" };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_gl5040.rtm" };
        picture = "\nia_wp_sg550\tex\ui\sg550_tacgl_ca";
        model = "nia_wp_sg550\mesh\sg550\SG550_TAC_GL.p3d";
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = (0.41+0.066+0.106);
        __DEXTERITY((4.1+0.66+1.06), -1);
        class hlc_GL_GL5040 : hlc_GL_GL5040 {
            displayname = "M203-2003";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127;
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
    };

    class hlc_rifle_SG551SB : hlc_sg550_base {
        author = "Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        ACE_barrelTwist = 254.6;
        ACE_barrelLength = 363.0;
        initspeed = -0.85;
        inertia = 0.34;
        __DEXTERITY(3.4, 0);
        scope = public;
        displayName = $STR_NIA_SG551SB;
        descriptionShort = $STR_NIA_SG551_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg551.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg551sb_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        reloadAction = "HLC_GesturereloadSG550";
        discretedistance[] = { 100, 200, 300, 400, 100 };
        discreteDistanceCameraPoint[] = { "eye", "eye_200", "eye_300", "eye_400", "eye_300" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        discretedistanceinitindex = 0;
        //hiddenSelections[] = { "Camo" };
        // hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        class Library {
            libTextDesc = "Steyr AUG A1";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 74;
            class MuzzleSlot {};
            class CowsSlot :NIA_STANAG550 {};
        };
        class Single : Single {
            __ROF(730);
            __MOA(2.75);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(710);
            __MOA(2.95);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(715);
            __MOA(2.88);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };

    };
    class hlc_rifle_SG551SB_RIS : hlc_rifle_SG551SB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551SB_RIS;
        descriptionShort = $STR_NIA_SG551_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg551_RIS.p3d"; 
        picture = "\nia_wp_sg550\tex\ui\sg551sb_ca";
        inertia = 0.34;
        __DEXTERITY(3.4+0.083, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class hlc_rifle_SG551SB_TAC : hlc_rifle_SG551SB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551SB_TAC;
        descriptionShort = $STR_NIA_SG551_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg551_tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg551sb_tac_ca";
        ACE_barrelTwist = 178;
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        discretedistance[] = { 100};
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = (0.34+0.066);
        __DEXTERITY((3.4+0.66), 0);
        rhs_grip1_change = "hlc_rifle_SG551SB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_SG551SB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_SG551SB_TAC_grip3";
        baseWeapon = "hlc_rifle_SG551SB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (74+14);
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
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class GripodSlot : nia_rifle_grips_slot {};
        };
    };
    //RHS Grips. Maybe eventually NIArms also, but let's get one foot ahead of the other first before we think about a marathon
    class hlc_rifle_SG551SB_TAC_grip : hlc_rifle_SG551SB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG551SB_TAC_grip2 : hlc_rifle_SG551SB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG551SB_TAC_grip3 : hlc_rifle_SG551SB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG551SB_TAC_GL :hlc_rifle_SG551SB
    {
        scope = public;
        author = "Toadie";
        displayName = $STR_NIA_SG551SB_GL;
        hasBipod = false;
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        muzzles[] = { "this", "hlc_GL_GL5040" };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_gl5040.rtm" };
        picture = "\nia_wp_sg550\tex\ui\sg551sb_tacgl_ca";
        model = "nia_wp_sg550\mesh\sg550\SG551_TAC_GL.p3d";
        inertia = (0.34+0.066+0.106);
        __DEXTERITY(3.4+0.66+1.06, -1);
        class hlc_GL_GL5040 : hlc_GL_GL5040 {
            displayname = "M203-2003";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (111);
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
    };

    class hlc_rifle_SG551LB : hlc_rifle_SG551SB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551LB;
        model = "nia_wp_sg550\mesh\sg550\sg551_LB.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg551lb_ca";
        initspeed = -0.9;
        ACE_barrelTwist = 254.6;
        ACE_barrelLength = 454.0;
        class Single : Single {
            __ROF(730);
            __MOA(1.99);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(710);
            __MOA(2.10);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(715);
            __MOA(2.10);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg551_Shot_SoundSet", "nia_sg551_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg551_silencerShot_SoundSet", "nia_sg551_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };
    };
    class hlc_rifle_SG551LB_RIS : hlc_rifle_SG551LB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551LB_RIS;
        model = "nia_wp_sg550\mesh\sg550\sg551_LB_RIS.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg551lb_ca";
        inertia = 0.34;
        __DEXTERITY(3.4 + 0.083, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class hlc_rifle_SG551LB_TAC :hlc_rifle_SG551LB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551LB_TAC;
        model = "nia_wp_sg550\mesh\sg550\sg551_LB_Tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg551lb_tac_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        ACE_barrelTwist = 178;
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 0);
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        rhs_grip1_change = "hlc_rifle_SG551LB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_SG551LB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_SG551LB_TAC_grip3";
        baseWeapon = "hlc_rifle_SG551LB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (74 + 14);
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
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class GripodSlot : nia_rifle_grips_slot {};
        };
    };
    //RHS Grips. Maybe eventually NIArms also, but let's get one foot ahead of the other first before we think about a marathon
    class hlc_rifle_SG551LB_TAC_grip : hlc_rifle_SG551LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG551LB_TAC_grip2 : hlc_rifle_SG551LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG551LB_TAC_grip3 : hlc_rifle_SG551LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };

    class hlc_rifle_SG551LB_TAC_GL :hlc_rifle_SG551LB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG551LB_GL;
        hasBipod = false;
        muzzles[] = { "this", "hlc_GL_GL5040" };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_gl5040.rtm" };
        picture = "\nia_wp_sg550\tex\ui\sg551lb_tacgl_ca";
        model = "nia_wp_sg550\mesh\sg550\SG551_lb_TAC_GL.p3d";
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = (0.34 + 0.066 + 0.106);
        __DEXTERITY(3.4 + 0.66 + 1.06, -1);
        class hlc_GL_GL5040 : hlc_GL_GL5040 {
            displayname = "M203-2003";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (111);
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
    };

    class hlc_rifle_SG553SB : hlc_sg550_base {
        author = "Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        ACE_barrelTwist = 254;
        ACE_barrelLength = 226.0;
        initspeed = -0.80;
        inertia = 0.32;
        __DEXTERITY(3.2, 0);
        scope = public;
        displayName = $STR_NIA_SG553SB;
        descriptionShort = $STR_NIA_SG553_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg553.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553sb_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        reloadAction = "HLC_GesturereloadSG550";
        discretedistance[] = { 100, 200, 300, 400, 100 };
        discreteDistanceCameraPoint[] = { "eye", "eye_200", "eye_300", "eye_400", "eye_300" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        discretedistanceinitindex = 0;
        //hiddenSelections[] = { "Camo" };
        // hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        class Library {
            libTextDesc = "Steyr AUG A1";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70;
            class MuzzleSlot {};
            class CowsSlot :NIA_STANAG550 {};
        };
        class Single : Single {
            __ROF(695);
            __MOA(3.5);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(695);
            __MOA(3.7);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(695);
            __MOA(3.6);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };

    };
    class hlc_rifle_SG553SB_RIS : hlc_rifle_SG553SB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG553SB_RIS;
        descriptionShort = $STR_NIA_SG553_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg553_RIS.p3d"; 
        picture = "\nia_wp_sg550\tex\ui\sg553sb_ca";
        inertia = 0.32+0.008;
        __DEXTERITY(3.2+0.083, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class hlc_rifle_SG553SB_TAC : hlc_rifle_SG553SB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG553SB_TAC;
        descriptionShort = $STR_NIA_SG553_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg553_tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553sb_tac_ca";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 226.0;
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = 0.32+0.038;
        __DEXTERITY(3.2+0.38, 0);
        rhs_grip1_change = "hlc_rifle_SG553SB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_SG553SB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_SG553SB_TAC_grip3";
        baseWeapon = "hlc_rifle_SG553SB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72+8.37;
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
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class GripodSlot : nia_rifle_grips_slot {};
        };
    };
    //RHS Grips. Maybe eventually NIArms also, but let's get one foot ahead of the other first before we think about a marathon
    class hlc_rifle_SG553SB_TAC_grip : hlc_rifle_SG553SB_TAC
    {

        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.32 + 0.038;
        __DEXTERITY(3.2 + 0.38, 1);
    };
    class hlc_rifle_SG553SB_TAC_grip2 : hlc_rifle_SG553SB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = 0.32 + 0.038;
        __DEXTERITY(3.2 + 0.38, 1);
    };
    class hlc_rifle_SG553SB_TAC_grip3 : hlc_rifle_SG553SB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.32 + 0.038;
        __DEXTERITY(3.2 + 0.38, 1);
    };

    class hlc_rifle_SG553LB : hlc_rifle_SG551SB
    {
        displayName = $STR_NIA_SG553LB;
        model = "nia_wp_sg550\mesh\sg550\sg553_LB.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553lb_ca";
        initspeed = -0.85;
        ACE_barrelTwist = 254;
        ACE_barrelLength = 346.0;
        class Single : Single {
            __ROF(730);
            __MOA(1.99);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(710);
            __MOA(2.10);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(715);
            __MOA(2.10);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553_Shot_SoundSet", "nia_sg553_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553_silencerShot_SoundSet", "nia_sg553_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };
    };
    class hlc_rifle_SG553LB_RIS : hlc_rifle_SG553LB
    {
        displayName = $STR_NIA_SG553LB_RIS;
        model = "nia_wp_sg550\mesh\sg550\sg553_LB_RIS.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553lb_ca";
        inertia = 0.34;
        __DEXTERITY(3.4 + 0.083, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class hlc_rifle_SG553LB_TAC :hlc_rifle_SG553LB
    {
        displayName = $STR_NIA_SG553LB_TAC;
        model = "nia_wp_sg550\mesh\sg550\sg553_LB_Tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553lb_tac_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        ACE_barrelTwist = 178;
        ACE_barrelLength = 346.0;
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 0);
        rhs_grip1_change = "hlc_rifle_SG553LB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_SG553LB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_SG553lB_TAC_grip3";
        baseWeapon = "hlc_rifle_SG553LB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (74 + 14);
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
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class GripodSlot : nia_rifle_grips_slot {};
        };
    };
    //RHS Grips. Maybe eventually NIArms also, but let's get one foot ahead of the other first before we think about a marathon
    class hlc_rifle_SG553LB_TAC_grip : hlc_rifle_SG553LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG553LB_TAC_grip2 : hlc_rifle_SG553LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };
    class hlc_rifle_SG553LB_TAC_grip3 : hlc_rifle_SG553LB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
    };

    class hlc_rifle_SG550Sniper : hlc_sg550_base {
        author = "Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "a3\sounds_f_mark\arsenal\sfx\bipods\Bipod_AAF_deploy", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "a3\sounds_f_mark\arsenal\sfx\bipods\Bipod_AAF_fold", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 647.7;
        initspeed = -1.05;
        inertia = 0.41;
        __DEXTERITY(4.1, -1);
        scope = public;
        displayName = $STR_NIA_SG550Sniper;
        descriptionShort = $STR_NIA_SG550Sniper_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg5501.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg550-01_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        reloadAction = "HLC_GesturereloadSG550";
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        discretedistanceinitindex = 0;
        //hiddenSelections[] = { "Camo" };
        // hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        modes[] = { "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Library {
            libTextDesc = "Steyr AUG A1";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91;
            class MuzzleSlot {};
            class CowsSlot :NIA_STANAG550 {
                class compatibleItems {
                    hlc_optic_DiavariZ_5501 = 1;
                    hlc_optic_ZF95 = 1;
                    hlc_optic_Kern_550 = 1;
                    hlc_optic_Kern2d_550 = 1;
                    hlc_optic_FNSTANAG4X_550 = 1;
                    hlc_optic_FNSTANAG4X2D_550 = 1;
                };
            };
        };
        class Single : Single {
            __ROF(695);
            __MOA(1.3);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };
        };
    class hlc_rifle_SG550Sniper_RIS : hlc_rifle_SG550Sniper
    {
        author = "Toadie";
        displayName = $STR_NIA_SG550Sniper_RIS;
        descriptionShort = $STR_NIA_SG550Sniper_DESC;
        model = "nia_wp_sg550\mesh\sg550\sg5501_RIS.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg550-01_ris_ca";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
            class MuzzleSlot : asdg_MuzzleSlot_556{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
    };

    class hlc_rifle_sg553RSB : hlc_rifle_SG553SB
    {
        ACE_barrelTwist = 241.6;
        ACE_barrelLength = 226.0;
        author = "Toadie";
        displayName = $STR_NIA_SG553RSB_RIS;
        descriptionShort = $STR_NIA_SG553R_DESC;
        model = "nia_wp_sg550\mesh\sg553r\SG553_ris.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553rsb_ca";
        recoil = "recoil_mx";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        magazines[] = { __762x39_MAGS, __762x39_BI_MAGS };
        reloadMagazineSound[] = { "\nia_wp_SG550\snd\553r\sg553R_reload", 1, 1, 30 };
        reloadAction = "HLC_GesturereloadSG553R";
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        initspeed = -0.907539;
        inertia = 0.308;
        __DEXTERITY(3.08, 0);
        class Single : Single {
            __ROF(700);
            __MOA(2.75);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(705);
            __MOA(3.5);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(706);
            __MOA(3.07);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
            class MuzzleSlot : asdg_MuzzleSlot_762{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RSB_75rnd";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RSB_75rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RSB_75rnd";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RSB_75rnd";
            default = "hlc_rifle_sg553RSB";
        };
    };
    class hlc_rifle_sg553RSB_75rnd : hlc_rifle_sg553RSB
    {
        scopeArsenal = 0;
        model = "nia_wp_sg550\mesh\sg553r\SG553_ris_75rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GesturereloadSG553RDrum";
        reloadMagazineSound[] = { "\nia_wp_sg550\snd\553r\sg553R_reload_drum", 0.9, 1, 30 };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 0);
    };

    class hlc_rifle_sg553RSB_TAC :hlc_rifle_sg553RSB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG553RSB_TAC;
        model = "nia_wp_sg550\mesh\sg553r\SG553_tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553rsb_tac_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        initspeed = -0.907539;
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 0);
        rhs_grip1_change = "hlc_rifle_sg553RSB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_sg553RSB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_sg553RSB_TAC_grip3";
        baseWeapon = "hlc_rifle_sg553RSB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (74 + 14);
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
            class GripodSlot : nia_rifle_grips_slot {};
        };
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RSB_TAC_75rnd";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RSB_TAC_75rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RSB_TAC_75rnd";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RSB_TAC_75rnd";
            default = "hlc_rifle_sg553RSB_TAC";
        };
    };
    class hlc_rifle_sg553RSB_TAC_grip : hlc_rifle_sg553RSB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip";
            default = "hlc_rifle_sg553RSB_TAC_grip";
        };
    };
    class hlc_rifle_sg553RSB_TAC_grip2 : hlc_rifle_sg553RSB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip2";
            default = "hlc_rifle_sg553RSB_TAC_grip2";
        };
    };
    class hlc_rifle_sg553RSB_TAC_grip3 : hlc_rifle_sg553RSB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RSB_TAC_75rnd_grip3";
            default = "hlc_rifle_sg553RSB_TAC_grip3";
        };
    };
    class hlc_rifle_sg553RSB_TAC_75rnd : hlc_rifle_sg553RSB_TAC
    {
        scopeArsenal = 0;
        displayName = "SIG SG553R-SB(RIS)";
        model = "nia_wp_sg550\mesh\sg553r\SG553_tac_75rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GesturereloadSG553RDrum";
        reloadMagazineSound[] = { "\nia_wp_sg550\snd\553r\sg553R_reload_drum", 0.9, 1, 30 };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 0);
        rhs_grip1_change = "hlc_rifle_sg553RSB_TAC_75rnd_grip";
        rhs_grip2_change = "hlc_rifle_sg553RSB_TAC_75rnd_grip2";
        rhs_grip3_change = "hlc_rifle_sg553RSB_TAC_75rnd_grip3";
        baseWeapon = "hlc_rifle_sg553RSB_TAC_75rnd";
    };
    class hlc_rifle_sg553RSB_TAC_75rnd_grip : hlc_rifle_sg553RSB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };
    class hlc_rifle_sg553RSB_TAC_75rnd_grip2 : hlc_rifle_sg553RSB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };
    class hlc_rifle_sg553RSB_TAC_75rnd_grip3 : hlc_rifle_sg553RSB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };

    class hlc_rifle_sg553RLB : hlc_rifle_sg553RSB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG553RLB_RIS;
        descriptionShort = $STR_NIA_SG553R_DESC;
        model = "nia_wp_sg550\mesh\sg553r\SG553_LB_ris.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553rsb_ca";
        recoil = "recoil_mx";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_sg550.rtm" };
        reloadMagazineSound[] = { "\nia_wp_SG550\snd\553r\sg553R_reload", 1, 1, 30 };
        reloadAction = "HLC_GesturereloadSG553R";
        discretedistance[] = { 100 };
        discreteDistanceCameraPoint[] = { "eye" }; /// the angle of gun changes with zeroing
        cameradir = "eye_Look";
        inertia = 0.308;
        __DEXTERITY(3.08, 0);
        ACE_barrelTwist = 241.6;
        ACE_barrelLength = 346.0;
        class Single : Single {
            __ROF(700);
            __MOA(2.1);

            showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_SINGLE;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            __ROF(705);
            __MOA(2.5);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst
        {
            __ROF(706);
            __MOA(2.5);
            __AI_ROF_RIFLE_SMALL_FULLAUTO;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "nia_sg553r_Shot_SoundSet", "nia_sg553r_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "nia_sg553r_silencerShot_SoundSet", "nia_sg553r_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : fullauto_medium {
        };
        class single_medium_optics1 : single_medium_optics1 {
        };
        class single_far_optics2 : single_far_optics2 {
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
            class MuzzleSlot : asdg_MuzzleSlot_762{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RLB_75rnd";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RLB_75rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RLB_75rnd";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RLB_75rnd";
            default = "hlc_rifle_sg553RLB";
        };
    };
    class hlc_rifle_sg553RLB_75rnd : hlc_rifle_sg553RLB
    {
        scopeArsenal = 0;
        model = "nia_wp_sg550\mesh\sg553r\SG553_LB_ris_75rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GesturereloadSG553RDrum";
        reloadMagazineSound[] = { "\nia_wp_sg550\snd\553r\sg553R_reload_drum", 0.9, 1, 30 };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 0);
    };
    class hlc_rifle_sg553RLB_TAC :hlc_rifle_sg553RLB
    {
        author = "Toadie";
        displayName = $STR_NIA_SG553RLB_TAC;
        model = "nia_wp_sg550\mesh\sg553r\SG553_LB_tac.p3d";
        picture = "\nia_wp_sg550\tex\ui\sg553rsb_tac_ca";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_tactical.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 0);
        rhs_grip1_change = "hlc_rifle_sg553RLB_TAC_grip";
        rhs_grip2_change = "hlc_rifle_sg553RLB_TAC_grip2";
        rhs_grip3_change = "hlc_rifle_sg553RLB_TAC_grip3";
        baseWeapon = "hlc_rifle_sg553RLB_TAC";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = (74 + 14);
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
            class GripodSlot : nia_rifle_grips_slot {};
        };
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RLB_TAC_75rnd";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RLB_TAC_75rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RLB_TAC_75rnd";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RLB_TAC_75rnd";
            default = "hlc_rifle_sg553RLB_TAC";
        };
    };
    class hlc_rifle_sg553RLB_TAC_grip : hlc_rifle_sg553RLB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip";
            default = "hlc_rifle_sg553RLB_TAC_grip";
        };

    };
    class hlc_rifle_sg553RLB_TAC_grip2 : hlc_rifle_sg553RLB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip2";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip2";
            default = "hlc_rifle_sg553RLB_TAC_grip2";
        };
    };
    class hlc_rifle_sg553RLB_TAC_grip3 : hlc_rifle_sg553RLB_TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = (0.34 + 0.066);
        __DEXTERITY((3.4 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_b_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip3";
            hlc_75Rnd_762x39_t_rpk = "hlc_rifle_sg553RLB_TAC_75rnd_grip3";
            default = "hlc_rifle_sg553RLB_TAC_grip3";
        };
    };
    class hlc_rifle_sg553RLB_TAC_75rnd : hlc_rifle_sg553RLB_TAC
    {
        scopeArsenal = 0;
        model = "nia_wp_sg550\mesh\sg553r\SG553_LB_tac_75rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GesturereloadSG553RDrum";
        reloadMagazineSound[] = { "\nia_wp_sg550\snd\553r\sg553R_reload_drum", 0.9, 1, 30 };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 0);
        rhs_grip1_change = "hlc_rifle_sg553RLB_TAC_75rnd_grip";
        rhs_grip2_change = "hlc_rifle_sg553RLB_TAC_75rnd_grip2";
        rhs_grip3_change = "hlc_rifle_sg553RLB_TAC_75rnd_grip3";
        baseWeapon = "hlc_rifle_sg553RLB_TAC_75rnd";
    };
    class hlc_rifle_sg553RLB_TAC_75rnd_grip : hlc_rifle_sg553RLB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };
    class hlc_rifle_sg553RLB_TAC_75rnd_grip2 : hlc_rifle_sg553RLB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_afg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };
    class hlc_rifle_sg553RLB_TAC_75rnd_grip3 : hlc_rifle_sg553RLB_TAC_75rnd
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_sg550\anim\handpose_vfg.rtm" };
        inertia = 0.308 + 0.145;
        __DEXTERITY(3.08 + 1.45, 1);
    };
};
