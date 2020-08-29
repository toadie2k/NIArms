#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
    class niaweapons_C96
    {
        requiredaddons[] = { "hlcweapons_core" };
        units[] = {  };
        weapons[] = { };
        magazines[] = {  };
        version = "1.12";
        author = "toadie";
    };
};
class cfgMods
{
    class Mod_Base;
    class Niarms_C96 :Mod_Base
    {
        name = "NIArsenal: C96 Pistols";
        picture     = "nia_wp_C96\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "nia_wp_C96\tex\ui\NIArms1_ca.paa";
        logoOver = "nia_wp_C96\tex\ui\NIArms1_ca.paa";
        logoSmall = "nia_wp_C96\tex\ui\NIArms1_ca.paa";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_SlotInfo;
class asdg_MuzzleSlot;
class asdg_PistolUnderRail;
class CBA_763x25_C96;
class CfgMagazineWells
{
    class CBA_763x25_C96 {
        NIA_mags[] = { "hlc_10Rnd_763x25_B_C96"/*, "hlc_10Rnd_763x25_JHP_C96" */};
    };
    class NIA_763x25_M712
    {
        NIA_mags[] = { "hlc_10Rnd_763x25_B_M712"/*, "hlc_10Rnd_763x25_JHP_M712"*/, "hlc_20Rnd_763x25_B_M712"/*, "hlc_20Rnd_763x25_JHP_M712"*/ };
    };
    class CBA_9x19_C96 {
        NIA_mags[] = {"hlc_10Rnd_9x19_B_C96","hlc_10Rnd_9x19_JHP_C96","hlc_10Rnd_9x19_SD_C96"};
    };
};

class CfgVehicles
{
    class B_supplyCrate_F;
    class HLC_C96_ammobox : B_supplyCrate_F {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC C96 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 40;
        transportMaxMagazines = 250;
        dlc = "Niarms_C96";
        class TransportMagazines {
            __M_MAG(hlc_10Rnd_9x19_B_C96, 30);
            __M_MAG(hlc_10Rnd_9x19_JHP_C96, 30);
            __M_MAG(hlc_10Rnd_9x19_SD_C96, 30);
            __M_MAG(hlc_10Rnd_763x25_B_C96, 30);
            __M_MAG(hlc_10Rnd_763x25_B_M712, 30);
            __M_MAG(hlc_20Rnd_763x25_B_M712, 30);
            __M_MAG(hlc_10Rnd_BLASTER_B_DL44, 10);
        };
        class TransportWeapons {
            __M_WEP(hlc_pistol_C96_Wartime, 10);
            __M_WEP(hlc_pistol_C96_Wartime_stock, 10);
            __M_WEP(hlc_pistol_C96_Bolo, 10);
            __M_WEP(hlc_pistol_C96_Bolo_stock, 10);
            __M_WEP(hlc_pistol_C96_Prussian, 10);
            __M_WEP(hlc_pistol_C96_Prussian_stock, 10);
            __M_WEP(hlc_pistol_M712, 10);
            __M_WEP(hlc_pistol_M712_stock, 10);
            __M_WEP(hlc_pistol_C96_Wartime_Worn, 10);
            __M_WEP(hlc_pistol_C96_Wartime_Worn_stock, 10);
            __M_WEP(hlc_pistol_C96_Bolo_Worn, 10);
            __M_WEP(hlc_pistol_C96_Bolo_Worn_stock, 10);
            __M_WEP(hlc_pistol_C96_Prussian_Rework, 10);
            __M_WEP(hlc_pistol_C96_Prussian_Rework_stock, 10);
            __M_WEP(hlc_pistol_M712_Worn, 10);
            __M_WEP(hlc_pistol_M712_worn_stock, 10);
            __M_WEP(hlc_pistol_DL44, 10);
            __M_WEP(hlc_pistol_C96_Custom, 10);
        };
        class TransportItems {
        };
    };

    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_pistol_C96_Wartime, hlc_10Rnd_763x25_B_C96, Mauser C96 M1912, Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Wartime_stock, hlc_10Rnd_763x25_B_C96, Mauser C96 M1912(Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Wartime_Worn, hlc_10Rnd_763x25_B_C96, Mauser C96 M1912(Worn), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Wartime_Worn_stock, hlc_10Rnd_763x25_B_C96, Mauser C96 M1912(Worn / Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Bolo, hlc_10Rnd_763x25_B_C96, Mauser C96 M1921, Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Bolo_stock, hlc_10Rnd_763x25_B_C96, Mauser C96 M1921(Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Bolo_Worn, hlc_10Rnd_763x25_B_C96, Mauser C96 M1921(Worn), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Bolo_Worn_stock, hlc_10Rnd_763x25_B_C96, Mauser C96 M1921(Worn / Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Prussian, hlc_10Rnd_9x19_B_C96, Mauser C96 M1916 Prussian, Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Prussian_stock, hlc_10Rnd_9x19_B_C96, Mauser C96 M1916 Prussian(Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Prussian_Rework, hlc_10Rnd_9x19_B_C96, Mauser C96 M1916 Prussian(Rework), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Prussian_Rework_stock, hlc_10Rnd_9x19_B_C96, Mauser C96 M1916 Prussian(Stock / Rework), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_M712, hlc_10Rnd_763x25_B_M712, Mauser C96 M712 "Schnellfeuer", Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_M712_stock, hlc_10Rnd_763x25_B_M712, Mauser C96 M712 "Schnellfeuer" (Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_M712_Worn, hlc_10Rnd_763x25_B_M712, Mauser C96 M712 "Schnellfeuer" (Worn), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_M712_worn_stock, hlc_10Rnd_763x25_B_M712, Mauser C96 M712 "Schnellfeuer" (Worn / Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_DL44, hlc_10Rnd_BLASTER_B_DL44, BlasTech DL-44 (Worn / Stock), Niarms_C96, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_C96_Custom, hlc_10Rnd_763x25_B_C96, Mauser C96 M1912(Custom / Stock), Niarms_C96, Toadie, Pistols);



};  


class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        HLC_GestureReloadC96 = "HLC_GestureReloadC96"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadC96_stock = "HLC_GestureReloadC96_stock"; 
        HLC_GestureReloadC96_Partial = "HLC_GestureReloadC96_Partial";
        HLC_GestureReloadC96_stock_Partial = "HLC_GestureReloadC96_Stock_Partial";
        HLC_GestureReloadM712_20rnd = "HLC_GestureReloadM712_20rnd";
        HLC_GestureReloadM712_Stock_20rnd = "HLC_GestureReloadM712_Stock_20rnd";
        HLC_GestureReloadM712_10rnd = "HLC_GestureReloadM712_10rnd";
        HLC_GestureReloadM712_Stock_10rnd = "HLC_GestureReloadM712_Stock_10rnd";
    };

    class Actions {
        class PistolStandActions;
        class PistolAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadC96[] = { "HLC_GestureReloadC96", "Gesture" };
            HLC_GestureReloadC96_stock[] = { "HLC_GestureReloadC96_stock", "Gesture" };
            HLC_GestureReloadC96_Partial[] = { "HLC_GestureReloadC96_Partial", "Gesture" };
            HLC_GestureReloadC96_stock_Partial[] = { "HLC_GestureReloadC96_stock_Partial", "Gesture" };
            HLC_GestureReloadM712_20rnd[] = { "HLC_GestureReloadM712_20rnd", "Gesture" };
            HLC_GestureReloadM712_Stock_20rnd[] = { "HLC_GestureReloadM712_Stock_20rnd", "Gesture" };
            HLC_GestureReloadM712_10rnd[] = { "HLC_GestureReloadM712_10rnd", "Gesture" };
            HLC_GestureReloadM712_Stock_10rnd[] = { "HLC_GestureReloadM712_Stock_10rnd", "Gesture" };
        };
        class PistolProneActions : PistolStandActions {
            HLC_GestureReloadC96[] = { "HLC_GestureReloadC96_Prone", "Gesture" };
            HLC_GestureReloadC96_stock[] = { "HLC_GestureReloadC96_stock_Prone", "Gesture" };
            HLC_GestureReloadC96_Partial[] = { "HLC_GestureReloadC96_Partial_Prone", "Gesture" };
            HLC_GestureReloadC96_stock_Partial[] = { "HLC_GestureReloadC96_stock_Partial_Prone", "Gesture" };
            HLC_GestureReloadM712_20rnd[] = { "HLC_GestureReloadM712_20rnd_prone", "Gesture" };
            HLC_GestureReloadM712_Stock_20rnd[] = { "HLC_GestureReloadM712_Stock_20rnd_prone", "Gesture" };
            HLC_GestureReloadM712_10rnd[] = { "HLC_GestureReloadM712_10rnd_prone", "Gesture" };
            HLC_GestureReloadM712_Stock_10rnd[] = { "HLC_GestureReloadM712_Stock_10rnd_prone", "Gesture" };
        };

        /*
        class RifleKneelActions : RifleBaseStandActions {
        HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };
        */

        class PistolAdjustRProneActions : PistolAdjustProneBaseActions {
            HLC_GestureReloadC96[] = { "HLC_GestureReloadC96_Context", "Gesture" };
            HLC_GestureReloadC96_stock[] = { "HLC_GestureReloadC96_stock_Context", "Gesture" };
            HLC_GestureReloadC96_Partial[] = { "HLC_GestureReloadC96_Partial_Context", "Gesture" };
            HLC_GestureReloadC96_stock_Partial[] = { "HLC_GestureReloadC96_stock_Partial_Context", "Gesture" };
            HLC_GestureReloadM712_20rnd[] = { "HLC_GestureReloadM712_20rnd_Context", "Gesture" };
            HLC_GestureReloadM712_Stock_20rnd[] = { "HLC_GestureReloadM712_Stock_20rnd_Context", "Gesture" };
            HLC_GestureReloadM712_10rnd[] = { "HLC_GestureReloadM712_10rnd_Context", "Gesture" };
            HLC_GestureReloadM712_Stock_10rnd[] = { "HLC_GestureReloadM712_Stock_10rnd_Context", "Gesture" };
        };
        class PistolAdjustLProneActions : PistolAdjustProneBaseActions {
            HLC_GestureReloadC96[] = { "HLC_GestureReloadC96_Context", "Gesture" };
            HLC_GestureReloadC96_stock[] = { "HLC_GestureReloadC96_stock_Context", "Gesture" };
            HLC_GestureReloadC96_Partial[] = { "HLC_GestureReloadC96_PartialContext", "Gesture" };
            HLC_GestureReloadC96_stock_Partial[] = { "HLC_GestureReloadC96_stock_Partial_Context", "Gesture" };
            HLC_GestureReloadM712_20rnd[] = { "HLC_GestureReloadM712_20rnd_Context", "Gesture" };
            HLC_GestureReloadM712_Stock_20rnd[] = { "HLC_GestureReloadM712_Stock_20rnd_Context", "Gesture" };
            HLC_GestureReloadM712_10rnd[] = { "HLC_GestureReloadM712_10rnd_Context", "Gesture" };
            HLC_GestureReloadM712_Stock_10rnd[] = { "HLC_GestureReloadM712_Stock_10rnd_Context", "Gesture" };


            class PistolAdjustFProneActions : PistolAdjustProneBaseActions {
                HLC_GestureReloadC96[] = { "HLC_GestureReloadC96", "Gesture" };
                HLC_GestureReloadC96_stock[] = { "HLC_GestureReloadC96_stock", "Gesture" };
                HLC_GestureReloadC96_Partial[] = { "HLC_GestureReloadC96", "Gesture" };
                HLC_GestureReloadC96_stock_Partial[] = { "HLC_GestureReloadC96_stock_Partial", "Gesture" };
                HLC_GestureReloadM712_20rnd[] = { "HLC_GestureReloadM712_20rnd", "Gesture" };
                HLC_GestureReloadM712_Stock_20rnd[] = { "HLC_GestureReloadM712_Stock_20rnd", "Gesture" };
                HLC_GestureReloadM712_10rnd[] = { "HLC_GestureReloadM712_10rnd", "Gesture" };
                HLC_GestureReloadM712_Stock_10rnd[] = { "HLC_GestureReloadM712_Stock_10rnd", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;

    class States {
        class HLC_GestureReloadC96 : Default {
            file = "nia_wp_C96\anim\c96_reload_standing.rtm";
            speed = -(128/30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class RifleReloadProneBase : Default{};
        class PistolReloadProneBase :RifleReloadProneBase{};
        class HLC_GestureReloadC96_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\c96_reload_prone.rtm";
            looped = 0;
            speed = -(128/30);
            mask = "handsWeapon_pst";
            //mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            //rightHandIKEnd = true;
            weaponIK = 0;
        };
        class HLC_GestureReloadC96_Context : HLC_GestureReloadC96 {
            mask = "handsWeapon_pst_context";
        };
        class HLC_GestureReloadC96_stock : Default {
            file = "nia_wp_C96\anim\c96_stock_reload_standing.rtm";
            speed = -(128 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadC96_stock_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\c96_stock_reload_prone.rtm";
            looped = 0;
            speed = -(128/30);
            mask = "handsWeapon_pst";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            connectFrom[] = {};
            ConnectTo[] = { "AmovPpneMstpSrasWpstDnon", 0.1 };
            rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadC96_stock_Context : HLC_GestureReloadC96_stock {
            mask = "handsWeapon_pst_context";
        };

        class HLC_GestureReloadC96_Partial : Default {
            file = "nia_wp_C96\anim\c96_partial_reload_standing.rtm";
            speed = -(300/30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.96333, 0, 0.98, 1 };
        };
        class HLC_GestureReloadC96_Partial_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\c96_partial_reload_prone.rtm";
            looped = 0;
            speed = -(300/30);
            mask = "handsWeapon_pst";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            //rightHandIKEnd = true;
        };
        class HLC_GestureReloadC96_Partial_Context : HLC_GestureReloadC96_Partial {
            mask = "handsWeapon_pst_context";
        };


        class HLC_GestureReloadC96_stock_Partial : Default {
            file = "nia_wp_C96\anim\c96_stock_partial_reload_standing.rtm";
            speed = -(300 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.96333, 0, 0.98, 1 };
        };
        class HLC_GestureReloadC96_stock_Partial_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\c96_partial_reload_prone.rtm";
            looped = 0;
            speed = -(300 / 30);
            mask = "handsWeapon_pst";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            connectFrom[] = {};
            ConnectTo[] = { "AmovPpneMstpSrasWpstDnon", 0.1 };
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.96333, 0, 0.98, 1 };
        };
        class HLC_GestureReloadC96_stock_Partial_Context : HLC_GestureReloadC96_stock_Partial {
            mask = "handsWeapon_pst_context";
        };


        class HLC_GestureReloadM712_20rnd : Default {
            file = "nia_wp_C96\anim\M712_reload_20rnd_standing.rtm";
            speed = -(110 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadM712_20rnd_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\M712_reload_prone.rtm";
            looped = 0;
            speed = -(110 / 30);
            mask = "handsWeapon_pst";
            headBobStrength = 0.05;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            // leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            //rightHandIKEnd = true;
        };
        class HLC_GestureReloadM712_20rnd_Context : HLC_GestureReloadM712_20rnd {
            mask = "handsWeapon_pst_context";
        };
        class HLC_GestureReloadM712_Stock_20rnd : Default {
            file = "nia_wp_C96\anim\M712_stock_reload_20rnd_Standing.rtm";
            speed = -(110 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadM712_Stock_20rnd_Prone : PistolReloadProneBase    {
            file = "nia_wp_C96\anim\M712_reload_prone.rtm";
            looped = 0;
            speed = -(110 / 30);
            mask = "handsWeapon_pst";
            headBobStrength = 0.05;
            headBobMode = 2;
            //weaponIK = 0;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadM712_Stock_20rnd_Context : HLC_GestureReloadM712_Stock_20rnd {
            mask = "handsWeapon_pst_context";
        };

        class HLC_GestureReloadM712_10rnd : Default {
            file = "nia_wp_C96\anim\M712_reload_10rnd_standing.rtm";
            speed = -(110 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadM712_10rnd_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\M712_reload_prone.rtm";
            looped = 0;
            speed = -(110 / 30);
            mask = "handsWeapon_pst";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            //rightHandIKEnd = true;
        };
        class HLC_GestureReloadM712_10rnd_Context : HLC_GestureReloadM712_10rnd {
            mask = "handsWeapon_pst_context";
        };
        class HLC_GestureReloadM712_Stock_10rnd : Default {
            file = "nia_wp_C96\anim\M712_stock_reload_10rnd_Standing.rtm";
            speed = -(110 / 30);
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.1;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadM712_Stock_10rnd_Prone : PistolReloadProneBase {
            file = "nia_wp_C96\anim\M712_reload_prone.rtm";
            looped = 0;
            speed = -(110 / 30);
            mask = "handsWeapon_pst";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            weaponIK = 0;
            //rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            //rightHandIKEnd = true;
        };
        class HLC_GestureReloadM712_Stock_10rnd_Context : HLC_GestureReloadM712_Stock_10rnd {
            mask = "handsWeapon_pst_context";
        };
    };
};

class cfgAmmo{
    class B_762x51_Ball;
    class nia_DL44_FIRETHELASERS :B_762x51_Ball
    {
        airFriction = -0.0;
        caliber = 0.365;
        cost = 1.2;
        deflecting = 0;
        typicalSpeed = 425;
        hit = 4.95;
        indirecthit = 0;
        indirecthitrange = 0;
        //model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        model = "\nia_wp_C96\mesh\tracer_blaster";
        tracerendtime = 5;
        tracerscale = 0.8;
        tracerStartTime = 0.005;
        cartridge = "";
        timeToLive = 5;
        visibleFire = 5;
        audibleFire = 8;
    };
};

class CfgMagazines {
    class 16Rnd_9x21_Mag;
    class hlc_10Rnd_9x19_B_C96 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_9x19_Ball";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10rnd_9x19_B_C96;
        displayname = $STR_NIA_10rnd_9x19_FMJ_C96;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_C96";
       mass = 4;
       initspeed = 390.2;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_red9_FMJ_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_9x19mm_FMJ;
    };
    class hlc_10Rnd_9x19_JHP_C96 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_9x19_JHP";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10rnd_9x19_GD_C96;
        displayname = $STR_NIA_10rnd_9x19_JHP_C96;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_C96";
        initspeed = 301.8;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_red9_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_9x19mm_JHP;
    };
    class hlc_10Rnd_9x19_SD_C96 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_9x19_Subsonic";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10rnd_9x19_SD_C96;
        displayname = $STR_NIA_10rnd_9x19_Subsonic_C96;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_C96";
        initspeed = 304;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_red9_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_9x19mm_Subsonic;
    };
    
    class hlc_10Rnd_763x25_B_C96 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 10;
        mass = 5;
        descriptionshort = $STR_NIA_DESC_10Rnd_763x25_B;
        displayname = $STR_NIA_10rnd_763x25_FMJ_C96;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_C96";
        initspeed = 425.5;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_c96_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_FMJ;
    };
    class hlc_10Rnd_763x25_JHP_C96 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 10;
        mass = 5;
        descriptionshort = $STR_NIA_DESC_10Rnd_763x25_B;
        displayname = $STR_NIA_10rnd_763x25_JHP_C96;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_C96";
        initspeed = 425.2;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_c96_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_JHP;
    };

    class hlc_10Rnd_763x25_B_M712 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 10;
        mass = 6;
        descriptionshort = $STR_NIA_DESC_10Rnd_763x25_B;
        displayname = $STR_NIA_10rnd_763x25_FMJ_M712;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_M712";
        initspeed = 425.5;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_m712_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_FMJ;
        modelSpecial = \nia_wp_C96\mesh\Ammo\proxy\10Rnd_763x25_M712;
        modelSpecialIsProxy = 1;
    };
    class hlc_10Rnd_763x25_JHP_M712 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 10;
        mass = 6;
        descriptionshort = "Caliber: 7.63x25mm Mauser JHP<br /> Type: Jacketed Hollow Point<br />Rounds: 10";
        displayname = $STR_NIA_10rnd_763x25_JHP_M712;
        model = "\nia_wp_C96\mesh\Ammo\10Rnd_763x25_M712";
        initspeed = 425.2;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_m712_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_JHP;
        modelSpecial = \nia_wp_C96\mesh\Ammo\proxy\10Rnd_763x25_M712;
        modelSpecialIsProxy = 1;
    };

    class hlc_20Rnd_763x25_B_M712 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 20;
        mass = 8;
        descriptionshort = $STR_NIA_DESC_20Rnd_763x25_B;
        displayname = $STR_NIA_20rnd_763x25_FMJ_M712;
        model = "\nia_wp_C96\mesh\Ammo\20Rnd_763x25_M712";
        initspeed = 425.5;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_m712_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_FMJ;
        modelSpecial = \nia_wp_C96\mesh\Ammo\proxy\20Rnd_763x25_M712;
        modelSpecialIsProxy = 1;
    };
    class hlc_20Rnd_763x25_JHP_M712 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "HLC_763x25_FMJ";
        count = 20;
        mass = 8;
        descriptionshort = "Caliber: 7.63x25mm Mauser JHP<br /> Type: Jacketed Hollow Point<br />Rounds: 20";
        displayname = $STR_NIA_20rnd_763x25_JHP_M712;
        model = "\nia_wp_C96\mesh\Ammo\20Rnd_763x25_M712";
        initspeed = 425.2;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_m712_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_763x25_JHP;
        modelSpecial = \nia_wp_C96\mesh\Ammo\proxy\20Rnd_763x25_M712;
        modelSpecialIsProxy = 1;
    };
    class hlc_10Rnd_BLASTER_B_DL44 : 16Rnd_9x21_Mag
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        ammo = "nia_DL44_FIRETHELASERS";
        count = 10000;
        mass = 6;
        descriptionshort = "Caliber: N/A<br /> Type: Energy<br / >Rounds: Han Shot First";
        displayname = $STR_NIA_BLASTER_B_DL44;
        model = "\nia_wp_C96\mesh\Ammo\20Rnd_763x25_M712";
        initspeed = 425;
        lastroundstracer = 0;
        picture = "\nia_wp_C96\tex\ui\m_m712_fmj_ca";
        scope = 2;
        tracersevery = 1;
        displaynameshort = "Energy";
    };
};


class CfgWeapons {

    class ItemCore;

    class Pistol;
    class Pistol_Base_F : Pistol
    {
        class WeaponSlotsInfo;
    };

    class InventoryOpticsItem_Base_F;
    class optic_Arco;

    //Selections notes 
    // {Slide,Frame,Grips,Common}

    class hlc_C96_base : Pistol_Base_F
    {
        magazineReloadSwitchPhase = 0.67;
        magazinereloadtime = 0; // TO FUTURE SCRIPTERS: IF YOU DO THE ALT RELOAD SCRIPT, MAKE FUCKING SURE OF THIS.
        scope = protected;
        dlc = "Niarms_C96";
        AB_barrelTwist = 10;
        AB_barrelLength = 9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        maxZeroing = 1000;
        magazines[] = { "hlc_10Rnd_763x25_B_C96"};
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
        recoil = "recoil_pistol_acpc2";
        picture = "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_01\data\UI\gear_pistol_heavy_01_X_ca.paa";
        model = "\nia_wp_C96\mesh\C96_basemesh.p3d";
        class ItemInfo
        {
            priority = 2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            //class MuzzleSlot : asdg_MuzzleSlot_9MM {};
            class MuzzleSlot {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.2;
            };
            class CowsSlot {
                iconPosition[] = { 0.5, 0.15 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.3, 0.55 };
                iconScale = 0.25;
            };
        };
        descriptionShort = "Pistol<br/>Caliber:7.63mm Mauser";




        bullet1[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.5011872, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.5011872, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.5011872, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.5011872, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.39810717, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.39810717, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.39810717, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.39810717, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.22387211, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.22387211, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.22387211, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.22387211, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        drysound[] = { "nia_wp_C96\snd\C96_dryfire", 0.8, 1, 20 };
        
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stripper", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96";
        sounds[] = { "StandardSound", "SilencedSound" };

        modes[] = { "Single" };
        class Single : Mode_SemiAuto
        {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_C96_Shot_SoundSet", "nia_C96_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_C96_silencerShot_SoundSet", "nia_C96_silencerTail_SoundSet" };
            };
            __ROF(900);
            __MOA(8.28);
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = { "\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10 };
                closure2[] = { "\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_C96_Shot_SoundSet", "nia_C96_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_C96_silencerShot_SoundSet", "nia_C96_silencerTail_SoundSet" };
            };
            __ROF(900);
            __MOA(8.28);
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };


    };
    class hlc_pistol_C96_Wartime :hlc_C96_base
    {
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 5.5;
        ACE_barrelTwist = 203.0;
        ACE_barrelLength = 140.76;
        author = "Toadie";
        dlc = "Niarms_C96";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial.p3d";
        magazines[] = { "hlc_10Rnd_763x25_B_C96"};
        magazineWell[] = { CBA_763x25_C96 };
        displayName = $STR_NIA_pistol_C96_Wartime;
        descriptionShort = $STR_NIA_M1912_DESC;
        discretedistance[] = { 50,100,200,300,400,500,600,700,800,900,1000 };
        cameradir = "eye_look";
		discreteDistanceCameraPoint[] = { "eye","eye_100", "eye_200", "eye_300", "eye_400", "eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        
        picture = "\nia_wp_C96\tex\ui\c96_WT_ca";
        inertia = 0.113;
        __PDEXTERITY(1.130);/**/
        hiddenSelections[] = { "camo1", "camo2", "camo3","camo4","camo4a","camo5" };
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96\c96_barrel_wartime_co.tga", "nia_wp_c96\tex\toadie_c96\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips1_co.tga","nia_wp_c96\tex\toadie_c96\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\c96_barrel_wartime.rvmat", "nia_wp_c96\mat\c96_reciever_common.rvmat", "nia_wp_c96\mat\c96_commoncomponents.rvmat","nia_wp_c96\mat\c96_grips1.rvmat","nia_wp_c96\mat\c96_grips1a.rvmat","nia_wp_c96\mat\c96_stock.rvmat" };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 24;
        };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Wartime //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Wartime_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Wartime_A :hlc_pistol_C96_Wartime
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_A.p3d";
    };
    class hlc_pistol_C96_Wartime_stock : hlc_pistol_C96_Wartime
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_stock.p3d";
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        picture = "\nia_wp_C96\tex\ui\c96_WTstock_ca";
        reloadAction = "HLC_GestureReloadC96_stock";
        displayName = $STR_NIA_pistol_C96_Wartime_Stock;
        descriptionShort = $STR_NIA_M1912_carbine_DESC;
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130+0.720,0);/**/
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 24;
        };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Wartime_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Wartime_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Wartime_stock_A :hlc_pistol_C96_Wartime_stock
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_stock_A.p3d";
    };
    class hlc_pistol_C96_Wartime_Worn : hlc_pistol_C96_Wartime
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_Wartime_worn;
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_wartime_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_wartime.rvmat", "nia_wp_c96\mat\worn\c96_reciever_common.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents.rvmat", "nia_wp_c96\mat\worn\c96_grips1.rvmat", "nia_wp_c96\mat\worn\c96_grips1a.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Wartime_Worn //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Wartime_Worn_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Wartime_Worn_A :hlc_pistol_C96_Wartime_Worn
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_A.p3d";
    };
    class hlc_pistol_C96_Wartime_Worn_stock : hlc_pistol_C96_Wartime_Worn
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_stock.p3d";
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        picture = "\nia_wp_C96\tex\ui\c96_WTstock_ca";
        reloadAction = "HLC_GestureReloadC96_stock";
        displayName = $STR_NIA_pistol_C96_Wartime_worn_Stock;
        descriptionShort = $STR_NIA_M1912_carbine_DESC;
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 0);/**/
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_wartime_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga","nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_wartime.rvmat", "nia_wp_c96\mat\worn\c96_reciever_common.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents.rvmat", "nia_wp_c96\mat\worn\c96_grips1.rvmat", "nia_wp_c96\mat\worn\c96_grips1a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Wartime_Worn_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Wartime_Worn_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Wartime_Worn_stock_A :hlc_pistol_C96_Wartime_Worn_stock
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_commercial_stock_A.p3d";
    };

    class hlc_pistol_C96_Bolo : hlc_pistol_C96_Wartime
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_bolo;
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo.p3d";
        picture = "\nia_wp_C96\tex\ui\c96_bolo_ca";
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96\c96_barrel_bolo_co.tga", "nia_wp_c96\tex\toadie_c96\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\c96_barrel_bolo.rvmat", "nia_wp_c96\mat\c96_reciever_bolo.rvmat", "nia_wp_c96\mat\c96_commoncomponents_bolo.rvmat", "nia_wp_c96\mat\c96_grips1.rvmat", "nia_wp_c96\mat\c96_grips1a.rvmat", "nia_wp_c96\mat\c96_stock.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Bolo //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Bolo_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Bolo_A :hlc_pistol_C96_Bolo
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo_A.p3d";
    };
    class hlc_pistol_C96_Bolo_stock : hlc_pistol_C96_Bolo
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo_stock.p3d";
        displayName = $STR_NIA_pistol_C96_bolo_Stock;
        descriptionShort = $STR_NIA_M1912_carbine_DESC;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        picture = "\nia_wp_C96\tex\ui\c96_bolostock_ca";
        reloadAction = "HLC_GestureReloadC96_stock";
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 1);/**/
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Bolo_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Bolo_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Bolo_stock_A :hlc_pistol_C96_Bolo_stock
    {
        magazineReloadSwitchPhase = (201 / 300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo_stock_A.p3d";
    };
    class hlc_pistol_C96_Bolo_Worn : hlc_pistol_C96_Bolo
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_bolo_worn;
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_bolo_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_bolo.rvmat", "nia_wp_c96\mat\worn\c96_reciever_bolo.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_bolo.rvmat", "nia_wp_c96\mat\worn\c96_grips1.rvmat", "nia_wp_c96\mat\worn\c96_grips1a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Bolo_Worn //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Bolo_Worn_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Bolo_Worn_A :hlc_pistol_C96_Bolo_Worn
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo_A.p3d";
    };
    class hlc_pistol_C96_Bolo_Worn_stock : hlc_pistol_C96_Bolo_stock
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        picture = "\nia_wp_C96\tex\ui\c96_WTstock_ca";
        reloadAction = "HLC_GestureReloadC96_stock";
        displayName = $STR_NIA_pistol_C96_bolo_worn_Stock;
        descriptionShort = $STR_NIA_M1912_carbine_DESC;
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 0);/**/
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_bolo_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips1_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_bolo.rvmat", "nia_wp_c96\mat\worn\c96_reciever_bolo.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_bolo.rvmat", "nia_wp_c96\mat\worn\c96_grips1.rvmat", "nia_wp_c96\mat\worn\c96_grips1a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Bolo_Worn_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Bolo_Worn_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Bolo_Worn_stock_A :hlc_pistol_C96_Bolo_Worn_stock
    {
        magazineReloadSwitchPhase = (201 / 300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_Bolo_stock_A.p3d";
    };

    class hlc_pistol_C96_Prussian :hlc_pistol_C96_Wartime
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        magazines[] = { "hlc_10Rnd_9x19_B_C96", "hlc_10Rnd_9x19_JHP_C96","hlc_10Rnd_9x19_SD_C96" };
        magazineWell[] = { CBA_9x19_C96 };
        discretedistance[] = { 50, 100, 200, 300, 400, 500 };
        cameradir = "eye_look";
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500" }; /// the angle of gun changes with zeroing
        displayName = $STR_NIA_pistol_C96_red9;
        descriptionShort = $STR_NIA_Red9_DESC;
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian.p3d";
        picture = "\nia_wp_C96\tex\ui\c96_red9_ca";
        initspeed = -0.89; // In theory the synthesis value to match the ranging. 
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Prussian //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Prussian_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Prussian_A :hlc_pistol_C96_Prussian
    {

        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_A.p3d";
    };
    class hlc_pistol_C96_Prussian_stock : hlc_pistol_C96_Prussian
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_stock.p3d";
        displayName = $STR_NIA_pistol_C96_red9_Stock;
        descriptionShort = $STR_NIA_Red9_Carbine_DESC;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        reloadAction = "HLC_GestureReloadC96_stock";
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 1);/**/
        picture = "\nia_wp_C96\tex\ui\c96_red9stock_ca";
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Prussian_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Prussian_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Prussian_stock_A :hlc_pistol_C96_Prussian_stock
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_stock_A.p3d";
    };
    class hlc_pistol_C96_Prussian_Rework :hlc_pistol_C96_Prussian
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        magazines[] = { "hlc_10Rnd_9x19_B_C96", "hlc_10Rnd_9x19_JHP_C96", "hlc_10Rnd_9x19_SD_C96" };
        discretedistance[] = { 50, 100, 200, 300, 400, 500 };
        cameradir = "eye_look";
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500" }; /// the angle of gun changes with zeroing
        displayName = $STR_NIA_pistol_C96_red9_worn;
        descriptionShort = $STR_NIA_Red9_DESC;
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_Rework.p3d";
        picture = "\nia_wp_C96\tex\ui\c96_red9_ca";
        initspeed = -0.89; // In theory the synthesis value to match the ranging. 
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_wartime_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips2_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips2_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_wartime.rvmat", "nia_wp_c96\mat\worn\c96_reciever_common.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_red9.rvmat", "nia_wp_c96\mat\worn\c96_grips2.rvmat", "nia_wp_c96\mat\worn\c96_grips2a.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Prussian_Rework //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Prussian_Rework_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Prussian_Rework_A :hlc_pistol_C96_Prussian_Rework
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_Rework_A.p3d";
    };
    class hlc_pistol_C96_Prussian_Rework_stock : hlc_pistol_C96_Prussian_Rework
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_Rework_stock.p3d";
        displayName = "Mauser C96 M1916 Prussian (Stock/Rework)";
        descriptionShort = $STR_NIA_Red9_Carbine_DESC;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_stock_stripper", 0.7, 1, 20 };
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        reloadAction = "HLC_GestureReloadC96_stock";
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 1);/**/
        picture = "\nia_wp_C96\tex\ui\c96_red9stock_ca";
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_wartime_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_common_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips2_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips2_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_wartime.rvmat", "nia_wp_c96\mat\worn\c96_reciever_common.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_red9.rvmat", "nia_wp_c96\mat\worn\c96_grips2.rvmat", "nia_wp_c96\mat\worn\c96_grips2a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Prussian_Rework_stock //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Prussian_Rework_stock_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Prussian_Rework_stock_A :hlc_pistol_C96_Prussian_Rework_stock
    {
        magazineReloadSwitchPhase = (201/300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Prussian_Rework_stock_A.p3d";
    };

    class hlc_pistol_M712 :hlc_C96_base
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 5.5;
        ACE_barrelTwist = 203.0;
        ACE_barrelLength = 140.76;
        model = "\nia_Wp_c96\mesh\WPn\M712\M712.p3d";
        magazines[] = { "hlc_10Rnd_763x25_B_M712", "hlc_20Rnd_763x25_B_M712"}; 
        magazinewell[] = { NIA_763x25_M712 };
        displayName = $STR_NIA_pistol_C96_Schnellfeuer;
        descriptionShort = $STR_NIA_M712_DESC;
        discretedistance[] = { 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        cameradir = "eye_look";
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000" }; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        weaponInfoType = "RscWeaponZeroing";
        picture = "\nia_wp_C96\tex\ui\c96_m712_ca";
        modes[] = { "Single","FullAuto" };
        reloadmagazinesound[] = { "\nia_wp_C96\snd\m712_reload", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadM712_20rnd";
        hiddenSelections[] = { "camo1", "camo2", "camo3", "camo4", "camo4a", "camo5" };
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96\c96_barrel_M712_co.tga", "nia_wp_c96\tex\toadie_c96\c96_reciever_M712_co.tga", "nia_wp_c96\tex\toadie_c96\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\c96_barrel_M712.rvmat", "nia_wp_c96\mat\c96_reciever_M712.rvmat", "nia_wp_c96\mat\c96_commoncomponents_M712.rvmat", "nia_wp_c96\mat\c96_grips3.rvmat", "nia_wp_c96\mat\c96_grips3a.rvmat", "nia_wp_c96\mat\c96_stock.rvmat" };

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 24;
        };
        inertia = 0.113;
        __PDEXTERITY(1.130);/**/
        class FullAuto :FullAuto
        {
            __MOA(9.3);
        };
        class Single : Single
        {
            __MOA(8.7);
        };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_763x25_B_M712 = "hlc_pistol_M712";
            hlc_20Rnd_763x25_JHP_M712 = "hlc_pistol_M712";
            default = "hlc_pistol_M712";
        };
        baseWeapon = "hlc_pistol_M712";
    };
    class hlc_pistol_M712_stock : hlc_pistol_M712
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\M712\M712_stock.p3d";
        picture = "\nia_wp_C96\tex\ui\c96_m712stock_ca";
        displayName = $STR_NIA_pistol_C96_Schnellfeuer_Stock;
        recoil = "recoil_pistol_rook40";
        inertia = 0.113 + 0.072;
        __DEXTERITY(1.130 + 0.720, 0);/**/
        handanim[] = { "OFP2_ManSkeleton", "\nia_wp_C96\anim\gesture_c96_Stock.rtm" };
        reloadAction = "HLC_GestureReloadM712_Stock_20rnd";
        class __MAGSWITCHCLASS {
            hlc_20Rnd_763x25_B_M712 = "hlc_pistol_M712_stock";
            hlc_20Rnd_763x25_JHP_M712 = "hlc_pistol_M712_stock";
            default = "hlc_pistol_M712_stock";
        };
        baseWeapon = "hlc_pistol_M712_stock";
    };
    class hlc_pistol_M712_Worn : hlc_pistol_M712
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_Schnellfeuer_worn;
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_M712_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_M712_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_M712.rvmat", "nia_wp_c96\mat\worn\c96_reciever_M712.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_M712.rvmat", "nia_wp_c96\mat\worn\c96_grips3.rvmat", "nia_wp_c96\mat\worn\c96_grips3a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_763x25_B_M712 = "hlc_pistol_M712_Worn";
            hlc_20Rnd_763x25_JHP_M712 = "hlc_pistol_M712_Worn";
            default = "hlc_pistol_M712_Worn";
        };
        baseWeapon = "hlc_pistol_M712_Worn";
    };
    class hlc_pistol_M712_worn_stock :hlc_pistol_M712_stock
    {
        dlc = "Niarms_C96";
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_Schnellfeuer_worn_Stock;
        hiddenSelectionsTextures[] = { "nia_wp_c96\tex\toadie_c96worn\c96_barrel_M712_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_reciever_M712_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_commoncomponents_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_grips3_co.tga", "nia_wp_c96\tex\toadie_c96worn\c96_stock_co.tga" };
        HiddenSelectionsMaterials[] = { "nia_wp_c96\mat\worn\c96_barrel_M712.rvmat", "nia_wp_c96\mat\worn\c96_reciever_M712.rvmat", "nia_wp_c96\mat\worn\c96_commoncomponents_M712.rvmat", "nia_wp_c96\mat\worn\c96_grips3.rvmat", "nia_wp_c96\mat\worn\c96_grips3a.rvmat", "nia_wp_c96\mat\worn\c96_stock.rvmat" };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_763x25_B_M712 = "hlc_pistol_M712_worn_stock";
            hlc_20Rnd_763x25_JHP_M712 = "hlc_pistol_M712_worn_stock";
            default = "hlc_pistol_M712_worn_stock";
        };
        baseWeapon = "hlc_pistol_M712_worn_stock";
    };
    /*
    Canned. Reason:Magswitch nonfunctional for pistols
    class hlc_pistol_M712_20rnd : hlc_pistol_M712
    {
    reloadAction = "HLC_GestureReloadM712_20rnd";
    };
    */
    class hlc_pistol_DL44 :hlc_C96_base
    {
        scope = public;
        author = "Toadie";
        model = "\nia_Wp_c96\mesh\WPn\DL44\DL44.p3d";
        magazines[] = { "hlc_10Rnd_BLASTER_B_DL44" };
        displayName = $STR_NIA_pistol_DL44;
        discretedistance[] = { 50 };
        recoil = "recoil_pistol_rook40";
        class OpticsModes {
            class ACO
            {
                opticsID = 2;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 50;
                distanceZoomMax = 50;
                cameraDir = "";
                visionMode[] = {};
                opticsPPEffects[] = { "Default" };
            };
            class Snip
            {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.249 / 3.5;
                opticsZoomMax = 0.249 / 3.5;
                opticsZoomInit = 0.249 / 3.5;
                discreteDistance[] = { 150};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "scope_eye";
                modeloptics[] = { "nia_wp_C96\mesh\Fine_reticle" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
        };
        weaponInfoType = "RscWeaponZeroing";
        picture = "\nia_wp_C96\tex\ui\c96_WT_ca";
        bullet1[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.5011872, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.5011872, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.5011872, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.5011872, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.39810717, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.39810717, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.39810717, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.39810717, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.22387211, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.22387211, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.22387211, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.22387211, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        drysound[] = { "nia_wp_C96\snd\C96_dryfire", 0.8, 1, 20 };

        reloadmagazinesound[] = { "\nia_wp_C96\snd\m712_reload", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadM712_Stock_20rnd";
        sounds[] = { "StandardSound", "SilencedSound" };

        modes[] = { "Single" };
        class Single : Mode_SemiAuto
        {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_DL44_Shot_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_DL44_Shot_SoundSet"};
            };
            __ROF(900);
            __MOA(8.28);
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 24;
        };
        inertia = 0.113;
        __PDEXTERITY(1.130);/**/
    };
    class hlc_pistol_C96_Custom :hlc_pistol_C96_Wartime_stock
    {
        scope = public;
        author = "Toadie";
        displayName = $STR_NIA_pistol_C96_Custom_Stock;
        discretedistance[] = { 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        recoil = "recoil_pistol_rook40";
        class OpticsModes {
            class ACO
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                discretedistance[] = { 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
                cameradir = "eye_look";
                discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000" }; /// the angle of gun changes with zeroing
                discretedistanceinitindex = 0;
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 50;
                distanceZoomMax = 50;
                visionMode[] = {};
                opticsPPEffects[] = { "Default" };
            };
            class Snip
            {
                opticsID = 2;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.249 / 3.5;
                opticsZoomMax = 0.249 / 3.5;
                opticsZoomInit = 0.249 / 3.5;
                discretedistance[] = { 50, 100,150, 200, 250, 300,350, 400,450, 500};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "scope_eye";
                modeloptics[] = { "nia_wp_C96\mesh\Fine_reticle" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
        };
        picture = "\nia_wp_C96\tex\ui\c96_WT_ca";
        bullet1[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.5011872, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.5011872, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.5011872, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.5011872, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.39810717, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.39810717, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.39810717, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.39810717, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.22387211, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.22387211, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.22387211, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.22387211, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        drysound[] = { "nia_wp_C96\snd\C96_dryfire", 0.8, 1, 20 };
        model = "\nia_Wp_c96\mesh\WPn\c96\C96_WT_Custom.p3d";
        sounds[] = { "StandardSound", "SilencedSound" };

        modes[] = { "Single" };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 24;
        };
        inertia = 0.113;
        __PDEXTERITY(1.130);/**/
        class Eventhandlers
        {
            class NIArms_Alt_Reloads
            {
                reload = "_this call NIArms_altReloads_fnc_onReload";
                Reloaded = "_this call NIArms_altReloads_fnc_afterReload";
            };
        };
        class NIArms_Alt_Reloads //The main class, without this it won't work
        {
            class hlc_pistol_C96_Custom //A weapon class name, the class name to be used if the condition below is true
            {
                condition = "(%1 == 0 )"; //Condition, %1 is the ammo in the currently loaded magazine
            };
            class hlc_pistol_C96_Custom_A // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
            {
                condition = "( %1 >= 1 )";
            };
        };
    };
    class hlc_pistol_C96_Custom_A :hlc_pistol_C96_Custom
    {
        magazineReloadSwitchPhase = (201 / 300);
        scopeArsenal = 0;
        reloadmagazinesound[] = { "\nia_wp_C96\snd\C96_reload_partial", 0.7, 1, 20 };
        reloadAction = "HLC_GestureReloadC96_stock_Partial";
        model = "\nia_Wp_c96\mesh\WPn\C96\C96_WT_Custom_A.p3d";
    };

};
