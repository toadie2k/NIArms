#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
    class niaweapons_226
    {
        requiredaddons[] = {"hlcweapons_core"};
        units[] = {  };
        weapons[] = { };
        magazines[] = {  };
        version = "1.0";
        author = "toadie";
    };
};
class cfgMods
{
    class Mod_Base;
    class Niarms_P226 :Mod_Base
    {
        name = "NIArsenal: P226 Pistols";
        picture     = "hlc_wp_p226\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_p226\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_p226\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_p226\tex\ui\NIArms1_ca.paa";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_SlotInfo;
class asdg_MuzzleSlot;
class asdg_PistolUnderRail;
class niarms_226_toprail : asdg_SlotInfo {
    linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
    iconPinpoint = "Bottom";
    class compatibleItems {
        HLC_optic_stavenhagen = 1;
        HLC_optic_Siglite = 1;
        HLC_optic_HP = 1;
        HLC_optic_VTAC = 1;
        HLC_optic_ATT = 1;
        HLC_optic_XS = 1;
        HLC_Optic_Romeo1_RX = 1;
        HLC_Optic_Docter_CADEX = 1;
    };
};
class niarms_228_toprail : asdg_SlotInfo {
    linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
    iconPinpoint = "Bottom";
    class compatibleItems {
        HLC_optic228_stavenhagen = 1;
        HLC_optic228_Siglite = 1;
        HLC_optic228_HP = 1;
        HLC_optic228_VTAC = 1;
        HLC_optic228_ATT = 1;
        HLC_optic228_XS = 1;
        HLC_Optic228_Romeo1_RX = 1;
        HLC_Optic228_Docter_CADEX = 1;
    };
};
class niarms_239_toprail : asdg_SlotInfo {
    linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
    iconPinpoint = "Bottom";
    class compatibleItems {
        //HLC_optic_stavenhagen = 1;
    };
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot{};
class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot{};
class CfgVehicles
{
    class NATO_Box_Base;
    class HLC_P226_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC P226 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 40;
        transportMaxMagazines = 250;
        dlc = "Niarms_P226";
        class TransportMagazines {
            __M_MAG(hlc_15Rnd_9x19_JHP_P226, 30);
            __M_MAG(hlc_15Rnd_9x19_B_P226, 30);
            __M_MAG(hlc_15Rnd_9x19_SD_P226, 30);
            __M_MAG(hlc_13Rnd_9x19_B_P228, 30);
            __M_MAG(hlc_13Rnd_9x19_JHP_P228, 30);
            __M_MAG(hlc_13Rnd_9x19_SD_P228, 30);
            __M_MAG(hlc_10Rnd_9x19_B_P239, 30);
            __M_MAG(hlc_10Rnd_9x19_JHP_P239, 30);
            __M_MAG(hlc_10Rnd_9x19_SD_P239, 30);
            __M_MAG(hlc_10Rnd_40SW_B_P229, 30);
            __M_MAG(hlc_10Rnd_40sw_JHP_P229, 30);
            __M_MAG(hlc_10Rnd_40sw_SD_P229, 30);
            __M_MAG(hlc_12Rnd_40SW_B_P226, 30);
            __M_MAG(hlc_12Rnd_40sw_JHP_P226, 30);
            __M_MAG(hlc_12Rnd_40sw_SD_P226, 30);
            __M_MAG(hlc_8Rnd_40SW_B_P239, 30);
             __M_MAG(hlc_10Rnd_40sw_JHP_P239, 30);
            __M_MAG(hlc_10Rnd_357SIG_SD_P239, 30);
            __M_MAG(hlc_10Rnd_357SIG_B_P229, 30);
            __M_MAG(hlc_10Rnd_357SIG_JHP_P229, 30);
            __M_MAG(hlc_12Rnd_357SIG_B_P226, 30);
            __M_MAG(hlc_12Rnd_357SIG_JHP_P226, 30);

        };
        class TransportWeapons {
            __M_WEP(hlc_pistol_P226WestGerman, 10);
            __M_WEP(hlc_pistol_P226US, 10);
            __M_WEP(hlc_pistol_P226R, 10);
            __M_WEP(hlc_pistol_P226R_Elite, 10);
            __M_WEP(hlc_pistol_P226R_Combat, 10);
            __M_WEP(hlc_pistol_Mk25, 10);
            __M_WEP(hlc_pistol_Mk25D, 10);
            __M_WEP(hlc_pistol_Mk25TR, 10);
            __M_WEP(hlc_Pistol_mk25RX, 10);
            __M_WEP(hlc_pistol_P226R_40, 10);
            __M_WEP(hlc_pistol_P226R_40Elite, 10);
            __M_WEP(hlc_pistol_P226R_40Combat, 10);
            __M_WEP(hlc_pistol_P226R_40Enox, 10);
            __M_WEP(hlc_Pistol_P228, 10);
            __M_WEP(hlc_Pistol_M11, 10);
            __M_WEP(hlc_pistol_P229R, 10);
            __M_WEP(hlc_pistol_P229R_Combat, 10);
            __M_WEP(hlc_Pistol_M11A1, 10);
            __M_WEP(hlc_Pistol_M11A1D, 10);
            __M_WEP(hlc_pistol_P229R_Elite, 10);
            __M_WEP(hlc_pistol_P229R_40, 10);
            __M_WEP(hlc_pistol_P229R_40Combat, 10);
            __M_WEP(hlc_pistol_P229R_40Elite, 10);
            __M_WEP(hlc_pistol_P229R_40Enox, 10);
            __M_WEP(hlc_pistol_P239, 10);
            __M_WEP(hlc_pistol_P239_40, 10);
            __M_WEP(hlc_pistol_P239_357, 10);
            __M_WEP(hlc_pistol_P229R_357, 10);
            __M_WEP(hlc_pistol_P229R_357Combat, 10);
            __M_WEP(hlc_pistol_P229R_357Elite, 10);
            __M_WEP(hlc_pistol_P229R_357Stainless, 10);
            __M_WEP(hlc_pistol_P226R_357, 10);
            __M_WEP(hlc_pistol_P226R_357Combat, 10);
            __M_WEP(hlc_pistol_P226R_357Elite, 10);
            __M_WEP(hlc_pistol_P226R_357Stainless, 10);
        };
        class TransportItems {
            __M_ITM(HLC_optic_stavenhagen, 10);
            __M_ITM(HLC_optic_VTAC, 10);
            __M_ITM(HLC_optic_Siglite, 10);
            __M_ITM(HLC_optic_HP, 10);
            __M_ITM(HLC_optic_ATT, 10);
            __M_ITM(HLC_optic_XS, 10);
            __M_ITM(HLC_Optic_Romeo1_RX, 10);
            __M_ITM(HLC_Optic_Docter_CADEX, 10);
            __M_ITM(HLC_optic228_stavenhagen, 10);
            __M_ITM(HLC_optic228_VTAC, 10);
            __M_ITM(HLC_optic228_Siglite, 10);
            __M_ITM(HLC_optic228_HP, 10);
            __M_ITM(HLC_optic228_ATT, 10);
            __M_ITM(HLC_optic228_XS, 10);
            __M_ITM(HLC_Optic228_Romeo1_RX, 10);
            __M_ITM(HLC_Optic228_Docter_CADEX, 10);
            __M_ITM(hlc_muzzle_Octane9, 10);
            __M_ITM(hlc_muzzle_Evo9, 10);
            __M_ITM(hlc_muzzle_TiRant9, 10);
            __M_ITM(hlc_muzzle_TiRant9S, 10);
            __M_ITM(hlc_muzzle_Octane45, 10);
            __M_ITM(hlc_muzzle_Evo40, 10);
            __M_ITM(hlc_acc_TLR1, 10);
            __M_ITM(hlc_acc_DBALPL, 10);
        };
    };

    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_pistol_P226WestGerman, hlc_15Rnd_9x19_B_P226, Sig P226(German), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226US, hlc_15Rnd_9x19_B_P226, SigSauer P226, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R, hlc_15Rnd_9x19_B_P226, SigSauer P226R, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_Elite, hlc_15Rnd_9x19_B_P226, SigSauer P226R Elite, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_Combat, hlc_15Rnd_9x19_B_P226, SigSauer P226R Combat, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_Mk25, hlc_15Rnd_9x19_B_P226, Mk25, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_Mk25D, hlc_15Rnd_9x19_B_P226, SigSauer Mk25-D, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_Mk25TR, hlc_15Rnd_9x19_B_P226, SigSauer Mk25-TR, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_Pistol_mk25RX, hlc_15Rnd_9x19_B_P226, SigSauer Mk25-RX, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_40, hlc_12Rnd_40SW_B_P226, SigSauer P226R(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_40Elite, hlc_12Rnd_40SW_B_P226, SigSauer P226R Elite(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_40Combat, hlc_12Rnd_40SW_B_P226, SigSauer P226R Combat(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_40Enox, hlc_12Rnd_40SW_B_P226, SigSauer P226R Equinox(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_Pistol_P228, hlc_13Rnd_9x19_B_P228, Sig P228(German), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_Pistol_M11, hlc_13Rnd_9x19_B_P228, M11, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R, hlc_13Rnd_9x19_B_P228, SigSauer P229R, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_Combat, hlc_13Rnd_9x19_B_P228, SigSauer P229R Combat, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_Pistol_M11A1, hlc_13Rnd_9x19_B_P228, SigSauer M11A1, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_Pistol_M11A1D, hlc_13Rnd_9x19_B_P228, SigSauer M11A1 - D, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_Elite, hlc_13Rnd_9x19_B_P228, SigSauer P229TR Elite, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_40, hlc_10Rnd_40SW_B_P229, SigSauer P229R(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_40Combat, hlc_10Rnd_40SW_B_P229, SigSauer P229R Combat(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_40Elite, hlc_10Rnd_40SW_B_P229, SigSauer P229TR Elite(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_40Enox, hlc_10Rnd_40SW_B_P229, SigSauer P229R Equinox(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P239, hlc_10Rnd_9x19_B_P239, SigSauer P239, Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P239_40, hlc_8Rnd_40SW_B_P239, SigSauer P239(.40), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P239_357, hlc_8Rnd_357SIG_B_P239, SigSauer P239(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_357, hlc_10Rnd_357SIG_B_P229, SigSauer P229R(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_357Combat, hlc_10Rnd_357SIG_B_P229, SigSauer P229R Combat(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_357Elite, hlc_10Rnd_357SIG_B_P229, SigSauer P229TR Elite(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P229R_357Stainless, hlc_10Rnd_357SIG_B_P229, SigSauer P229R Stainless(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_357, hlc_12Rnd_357SIG_B_P226, SigSauer P226R(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_357Elite, hlc_12Rnd_357SIG_B_P226, SigSauer P226R Elite(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_357Combat, hlc_12Rnd_357SIG_B_P226, SigSauer P226R Combat(.357SIG), Niarms_P226, Toadie, Pistols);
    __WEAPONHOLDER(hlc_pistol_P226R_Stainless, hlc_12Rnd_357SIG_B_P226, SigSauer P226R Stainless(.357SIG), Niarms_P226, Toadie, Pistols);

};
class CfgMagazines {
    class 16Rnd_9x21_Mag;
    class hlc_15Rnd_9x19_B_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Ball";
        count = 15;
        descriptionshort = "Caliber: 9x19mm M882 Ball<br /> Type: Full Metal Jacket <br />Rounds: 15";
        displayname = "P226 Magazine (Ball) 15rnd 9mm";
       model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
       initspeed = 390.2;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M882 Ball";
    };
    class hlc_15Rnd_9x19_JHP_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_JHP";
        count = 15;
        descriptionshort = "Caliber: 9x19mm Mk243 Mod 0<br /> Type: Jacketed Hollow Point (Winchester USA9JHP2) <br />Rounds: 15";
        displayname = "P226 Magazine (JHP) 15rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 301.8;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk243 JHP";
    };
    class hlc_15Rnd_9x19_SD_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Subsonic";
        count = 15;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 15";
        displayname = "P226 Magazine (Subsonic) 15rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 304;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm Subsonic";
    };
    class hlc_13Rnd_9x19_B_P228 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Ball";
        count = 13;
        descriptionshort = "Caliber: 9x19mm M882 Ball<br /> Type: Full Metal Jacket <br />Rounds: 13";
        displayname = "P228 Magazine (Ball) 13rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        mass = 4;
        initspeed = 390.2;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M882 Ball";
    };
    class hlc_13Rnd_9x19_JHP_P228 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_JHP";
        count = 13;
        descriptionshort = "Caliber: 9x19mm Mk243 Mod 0<br /> Type: Jacketed Hollow Point (Winchester USA9JHP2) <br />Rounds: 13";
        displayname = "P228 Magazine (JHP) 13rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        mass = 4;
        initspeed = 301.8;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk243 JHP";
    };
    class hlc_13Rnd_9x19_SD_P228 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Subsonic";
        count = 13;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 13";
        displayname = "P228 Magazine (Subsonic) 13rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        mass = 4;
        initspeed = 304;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm Subsonic";
    };
    
    class hlc_10Rnd_9x19_B_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Ball";
        count = 10;
        descriptionshort = "Caliber: 9x19mm M882 Ball<br /> Type: Full Metal Jacket <br />Rounds: 10";
        displayname = "P239 Magazine (Ball) 10rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        mass = 3;
        initspeed = 289;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M882 Ball";
    };
    class hlc_10Rnd_9x19_JHP_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_JHP";
        count = 10;
        descriptionshort = "Caliber: 9x19mm Mk243 Mod 0<br /> Type: Jacketed Hollow Point (Winchester USA9JHP2) <br />Rounds: 10";
        displayname = "P239 Magazine (JHP) 10rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        mass = 3;
        initspeed = 294;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk243 JHP";
    };
    class hlc_10Rnd_9x19_SD_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_9x19_Subsonic";
        mass = 3;
        count = 10;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 10";
        displayname = "P239 Magazine (Subsonic) 10rnd 9mm";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        initspeed = 304;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm Subsonic";
    };
    //here comes the &#038 s
    class hlc_8Rnd_40SW_B_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_FMJ";
        mass = 4;
        count = 8;
        descriptionshort = "Caliber: .40 Smith &amp; Wesson Mk309 Mod 0 Ball<br /> Type: Total Metal Jacket Flat Nose (Federal American Eagle AE40R2)<br / >Rounds: 8";
        displayname = ".40S&W P239 Magazine (Ball) 8rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        initspeed = 289;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk309 Ball";
    };
    class hlc_10Rnd_40sw_JHP_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_JHP";
        mass = 4;
        count = 8;
        descriptionshort = "Caliber: .40 Smith and Wesson Mk308 Mod 0 JHP<br /> Type: Jacketed Hollow Point (Federal Tactical HST P40HST2) <br />Rounds: 8";
        displayname = ".40S&W  P239 Magazine (JHP) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        initspeed = 294;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk308 JHP";
    };
    class hlc_10Rnd_40sw_SD_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_SD";
        count = 8;
        mass = 4;
        descriptionshort = "Caliber: .40 Smith and Wesson JHP Subsonic<br /> Type: Jacketed Hollow Point (Hornady XTP Bullet) <br />Rounds: 8";
        displayname = ".40S&W P239 Magazine (SD ) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 219;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "JHP Subsonic";
    };


    class hlc_10Rnd_40SW_B_P229 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_FMJ";
        count = 10;
        mass = 5;
        descriptionshort = "Caliber: .40 Smith and Wesson Mk309 Mod 0 Ball<br /> Type: Total Metal Jacket Flat Nose (Federal American Eagle AE40R2) <br />Rounds: 10";
        displayname = ".40S&W  P229 Magazine (Ball) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 347.5;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk309 Ball";
    };
    class hlc_10Rnd_40sw_JHP_P229 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_JHP";
        count = 10;
        mass = 5;
        descriptionshort = "Caliber: .40 Smith and Wesson Mk308 Mod 0 JHP<br /> Type: Jacketed Hollow Point (Federal Tactical HST P40HST2) <br />Rounds: 10";
        displayname = ".40S&W  P229 Magazine (JHP) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 353.6;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk308 JHP";
    };
    class hlc_10Rnd_40sw_SD_P229 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_SD";
        count = 10;
        mass = 5;
        descriptionshort = "Caliber: .40 Smith and Wesson JHP Subsonic<br /> Type: Jacketed Hollow Point (Hornady XTP Bullet) <br />Rounds: 10";
        displayname = ".40S&W P229 Magazine (SD) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 274.7;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "JHP Subsonic";
    };

    class hlc_12Rnd_40SW_B_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_FMJ";
        count = 12;
        mass = 7;
        descriptionshort = "Caliber: .40 Smith and Wesson Mk309 Mod 0 Ball<br /> Type: Total Metal Jacket Flat Nose (Federal American Eagle AE40R2)";
        displayname = ".40S&W P226 Magazine (Ball) 12rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 347.5;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk309 Ball";
    };
    class hlc_12Rnd_40sw_JHP_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_JHP";
        count = 12;
        mass = 7;
        descriptionshort = "Caliber: .40 Smith and Wesson Mk308 Mod 0 JHP<br /> Type: Jacketed Hollow Point (Federal Tactical HST P40HST2) <br />Rounds: 12";
        displayname = ".40S&W P226 Magazine (JHP) 12rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 353.6;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk308 JHP";
    };
    class hlc_12Rnd_40sw_SD_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_40SW_SD";
        count = 12;
        mass = 7;
        descriptionshort = "Caliber: .40 Smith and Wesson JHP Subsonic<br /> Type: Jacketed Hollow Point (Hornady XTP Bullet) <br />Rounds: 12";
        displayname = ".40S&W P226 Magazine (JHP) 12rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 274.7;
        lastroundstracer = 0;
         picture = "\hlc_wp_p226\tex\ui\226mag_sub_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "JHP Subsonic";
    };

    class hlc_8Rnd_357SIG_B_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_FMJ";
        count = 8;
        mass = 4;
        descriptionshort = "Caliber: .357SIG FMJ-FN<br /> Type: Full Metal Jacket Flat Nose <br / >Rounds: 8";
        displayname = ".357SIG P239 Magazine (Ball) 8rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        initspeed = 289;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk309 Ball";
    };
    class hlc_8Rnd_357SIG_JHP_P239 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_JHP";
        count = 8;
        mass = 4;
        descriptionshort = "Caliber: .357SIG JHP<br /> Type: Jacketed Hollow Point Ballistic Tip (FlexLock) <br />Rounds: 8";
        displayname = ".357SIG P239 Magazine (JHP) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p239.p3d";
        initspeed = 294;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\239mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk308 JHP";
    };

    class hlc_10Rnd_357SIG_B_P229 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_FMJ";
        count = 10;
        mass = 5;
        descriptionshort = "Caliber: .357SIG FMJ-FN<br /> Type: Full Metal Jacket Flat Nose <br />Rounds: 10";
        displayname = ".357SIG P229 Magazine (Ball) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 401.5;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "FMJ-FN";
    };
    class hlc_10Rnd_357SIG_JHP_P229 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_JHP";
        count = 10;
        mass = 5;
        descriptionshort = "Caliber: .357SIG JHP<br /> Type: Jacketed Hollow Point Ballistic Tip (FlexLock) <br />Rounds: 10";
        displayname = ".357SIG P229 Magazine (JHP) 10rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p228.p3d";
        initspeed = 372.2;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\228mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "FlexLock JHP";
    };

    class hlc_12Rnd_357SIG_B_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_FMJ";
        count = 12;
        mass = 7;
        descriptionshort = "Caliber: .357SIG FMJ-FN<br /> Type: Full Metal Jacket Flat Nose<br />Rounds: 12";
        displayname = ".357SIG P226 Magazine (Ball) 12rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 401.5;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_fmj_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "FMJ-FN";
    };
    class hlc_12Rnd_357SIG_JHP_P226 : 16Rnd_9x21_Mag{
        dlc = "Niarms_P226";
        author = "Toadie";
        ammo = "HLC_357SIG_JHP";
        count = 12;
        mass = 7;
        descriptionshort = "Caliber: .357SIG JHP<br /> Type: Jacketed Hollow Point Ballistic Tip (FlexLock) <br />Rounds: 12";
        displayname = ".357SIG P226 Magazine P226 Magazine (JHP) 12rnd";
        model = "hlc_wp_p226\mesh\wpn\mag\p226.p3d";
        initspeed = 372.2;
        lastroundstracer = 0;
        picture = "\hlc_wp_p226\tex\ui\226mag_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "FlexLock JHP";
    };
};

class CfgMagazineWells {
    class CBA_9x19_P226 {
        NIA_mags[] = {
			"hlc_15Rnd_9x19_B_P226",
			"hlc_15Rnd_9x19_JHP_P226",
			"hlc_15Rnd_9x19_SD_P226"
		};
    };
    class CBA_9x19_P228 {
        NIA_mags[] = {
			"hlc_13Rnd_9x19_B_P228",
			"hlc_13Rnd_9x19_JHP_P228",
			"hlc_13Rnd_9x19_SD_P228"
		};
    };
    class CBA_9x19_P239 {
        NIA_mags[] = {
			"hlc_10Rnd_9x19_B_P239",
			"hlc_10Rnd_9x19_JHP_P239",
			"hlc_10Rnd_9x19_SD_P239"
		};
    };
    class CBA_40SW_P226 {
        NIA_mags[] = {
			"hlc_12Rnd_40SW_B_P226",
			"hlc_12Rnd_40sw_JHP_P226",
			"hlc_12Rnd_40sw_SD_P226"
		};
    };
    class CBA_40SW_P229 {
        NIA_mags[] = {
			"hlc_10Rnd_40SW_B_P229",
			"hlc_10Rnd_40sw_JHP_P229",
			"hlc_10Rnd_40sw_SD_P229"
		};
    };
    class CBA_40SW_P239 {
        NIA_mags[] = {
			"hlc_8Rnd_40SW_B_P239",
			"hlc_10Rnd_40sw_JHP_P239",
			"hlc_10Rnd_40sw_SD_P239"
		};
    };
    class CBA_357SIG_P226 {
        NIA_mags[] = {
			"hlc_12Rnd_357SIG_B_P226",
			"hlc_12Rnd_357SIG_JHP_P226"
		};
    };
    class CBA_357SIG_P229 {
        NIA_mags[] = {
			"hlc_10Rnd_357SIG_B_P229",
			"hlc_10Rnd_357SIG_JHP_P229"
		};
    };
    class CBA_357SIG_P239 {
        NIA_mags[] = {
			"hlc_8Rnd_357SIG_B_P239",
			"hlc_8Rnd_357SIG_JHP_P239"
		};
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

    class HLC_optic_stavenhagen : optic_Arco {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "Von Stavenhagen Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_stavenhagen.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_stavenhagen_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 1;
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
                    memoryPointCamera = "ADS_eye";
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
    class HLC_optic_VTAC : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "V-TAC Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_Vtac.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_vtac_ca";
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
        class ACO2x
        {
            opticsID = 0;
            useModelOptics = 0;
            opticsZoomMin = 0.25;
            opticsZoomMax = 1.25;
            opticsZoomInit = 0.75;
            memoryPointCamera = "ADS_eye";
            opticsFlare = 0;
            opticsDisablePeripherialVision = 0;
            distanceZoomMin = 50;
            distanceZoomMax = 50;
            cameraDir = "";
            visionMode[] = {};
            opticsPPEffects[] = { "Default" };
        };
    };
    class HLC_optic_Siglite : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "SigLite Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_siglite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_siglite_ca";
    };
    class HLC_optic_HP : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "High-Profile Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_Hiprofile.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_ironHiprofile_ca";
    };
    class HLC_optic_ATT : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "Triangular Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_Triangular.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_triangular_ca";
    };
    class HLC_optic_XS : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P226<br />Magnification: None";
        displayname = "TrijiconXS Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_XS.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_xs_ca";
    };
    class HLC_Optic_Romeo1_RX : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "High-Profile Irons and Collimator Sight<br />Magnification: None";
        displayname = "Romeo-1";
        model = "\hlc_wp_p226\mesh\acc\sights\rx_Romeo1.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_romeo1_ca";
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
                class ACO2x
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "ADS_eye";
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
    class HLC_Optic_Docter_CADEX : HLC_optic_stavenhagen
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "High-Profile Irons and Collimator Sight<br />Magnification: None";
        displayname = "Docter RDS (CADEX)";
        model = "\hlc_wp_p226\mesh\acc\sights\CADEX_Docter.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_docter_ca";
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

    class HLC_optic228_stavenhagen : HLC_optic_stavenhagen {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "Von Stavenhagen Sights";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228stavenhagen.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 1;
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
                    memoryPointCamera = "ADS_eye";
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
    class HLC_optic228_VTAC : HLC_optic_VTAC
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "V-TAC Sights(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228Vtac.p3d";
    };
    class HLC_optic228_Siglite : HLC_optic_Siglite
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "SigLite Sights(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228siglite.p3d";
    };
    class HLC_optic228_HP : HLC_optic_HP
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "High-Profile Sights(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228Hiprofile.p3d";
    };
    class HLC_optic228_ATT : HLC_optic_ATT
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "Triangular Sights(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228Triangular.p3d";
    };
    class HLC_optic228_XS : HLC_optic_XS
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "Notch-and-Post Pistol Sights for the P228/9<br />Magnification: None";
        displayname = "TrijiconXS Sights(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\iron_228XS.p3d";
    };
    class HLC_Optic228_Romeo1_RX : HLC_Optic_Romeo1_RX
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "High-Profile Irons and Collimator Sight<br />Magnification: None";
        displayname = "Romeo-1(228)";
        model = "\hlc_wp_p226\mesh\acc\sights\rx_228Romeo1.p3d";
        //picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
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
                class ACO2x
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "ADS_eye";
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
    class HLC_Optic228_Docter_CADEX : HLC_Optic_Docter_CADEX
    {
        dlc = "Niarms_P226";
        author = "Toadie";
        descriptionshort = "High-Profile Irons and Collimator Sight<br />Magnification: None";
        displayname = "Docter RDS (CADEX,228)";
        model = "\hlc_wp_p226\mesh\acc\sights\CADEX_228Docter.p3d";
        //picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
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

    //Selections notes 
    // {Slide,Frame,Grips,Common}

    class hlc_p226_base : Pistol_Base_F
    {
        magazineReloadSwitchPhase = 0.67;
        scope = protected;
        dlc = "Niarms_P226";
        AB_barrelTwist = 10;
        AB_barrelLength = 9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        magazines[] = { "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_JHP_P226", "hlc_15Rnd_9x19_SD_P226" };
        magazineWell[] = {"CBA_9x19_P226"};
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
        reloadAction = "HLC_GestureReloadP226";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_p226\anim\handpose_P226.rtm" };
        recoil = "recoil_pistol_p07";
        picture = "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_01\data\UI\gear_pistol_heavy_01_X_ca.paa";
        model = "\hlc_wp_p226\mesh\wpn\226selectionbinariser.p3d";
        class ItemInfo
        {
            priority = 2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            //class MuzzleSlot : asdg_MuzzleSlot_9MM {};
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        descriptionShort = "Pistol<br/>Caliber:9x19mm NATO";




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
        drysound[] = { "hlc_wp_p226\snd\p226_dryfire", 1, 1, 20 };
        changeFiremodeSound[] = { "hlc_wp_p226\snd\p226_dryfire", 1, 1, 8 };
        reloadmagazinesound[] = { "hlc_wp_p226\snd\p226_reload", 0.7, 1, 20 };
        sounds[] = { "StandardSound", "SilencedSound" };

        modes[] = { "Single" };
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p2269mm_Shot_SoundSet", "nia_p2269mm_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet" };
            };
            __ROF(460);
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
    class hlc_pistol_P226WestGerman :hlc_p226_base
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\226_9\226_WG.p3d";
        displayName = "Sig P226(German)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        picture = "\hlc_wp_p226\tex\ui\gear_226WG_ca";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226US :hlc_p226_base
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226_US.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226_ca";
        displayName = "SigSauer P226";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226R :hlc_p226_base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226R_ca";
        displayName = "SigSauer P226R";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "SIG_US_Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226slides_co.tga", "hlc_wp_p226\tex\p226\226R_frame_co.tga", "hlc_wp_p226\tex\p226\226usgrip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226slides.rvmat", "hlc_wp_p226\mat\226RFrame.rvmat", "hlc_wp_p226\mat\grip_226us.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_pistol_P226R_Elite : hlc_pistol_P226R
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Elite.p3d";
        displayName = "SigSauer P226R Elite";
        picture = "\hlc_wp_p226\tex\ui\gear_226elite_ca";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "226Slides", "Sigframe_226Elite", "SIG_E2Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226eliteslides_co.tga", "hlc_wp_p226\tex\p226\226elite_frame_co.tga", "hlc_wp_p226\tex\p226\226e2_grip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226eliteslides.rvmat", "hlc_wp_p226\mat\226EliteFrame.rvmat", "hlc_wp_p226\mat\grip_226e2.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_pistol_P226R_Combat :hlc_p226_base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 124.66;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226combat_ca";
        displayName = "SigSauer P226R Combat";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_9MM{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_Mk25 : hlc_pistol_P226R
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\226_9\mk25.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_mk25_ca";
        displayName = "Mk25";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "SIG_US_Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226mk25slides_co.tga", "hlc_wp_p226\tex\p226\226Rmk25_frame_co.tga", "hlc_wp_p226\tex\p226\226usgrip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226mk25slides.rvmat", "hlc_wp_p226\mat\226Rmk25Frame.rvmat", "hlc_wp_p226\mat\grip_226us.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_pistol_Mk25D : hlc_pistol_Mk25
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\226_9\mk25.p3d";\
        picture = "\hlc_wp_p226\tex\ui\gear_mk25d_ca";
        displayName = "SigSauer Mk25-D";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "SIG_US_Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226mk25dslides_co.tga", "hlc_wp_p226\tex\p226\226Rmk25d_frame_co.tga", "hlc_wp_p226\tex\p226\226usgrip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226mk25dslides.rvmat", "hlc_wp_p226\mat\226Rmk25dFrame.rvmat", "hlc_wp_p226\mat\grip_226us.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_pistol_Mk25TR :hlc_pistol_P226R_Combat
    {
        AB_barrelTwist = 10;
        AB_barrelLength = 4.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 124.66;
        author = "Toadie,Warlord_Murphy";
        model = "\hlc_wp_p226\mesh\wpn\226_9\Mk25RX.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_mk25spl_ca";
        displayName = "SigSauer Mk25-TR";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "Hogue_overmold", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226mk25dslides_co.tga", "hlc_wp_p226\tex\p226\226Rmk25spl_frame_co.tga", "hlc_wp_p226\tex\p226\226_overmold_grip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226mk25dslides.rvmat", "hlc_wp_p226\mat\226Rmk25splFrame.rvmat", "hlc_wp_p226\mat\grip_226overmold.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_Pistol_mk25RX : hlc_pistol_Mk25TR
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 124.66;
        author = "Toadie,Warlord_Murphy";
        displayName = "SigSauer Mk25 RX";
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "HLC_Optic_Romeo1_RX";
            };
        };
    };


    class hlc_P22640_Base : hlc_P226_Base
    {
        magazines[] = { "hlc_12Rnd_40SW_B_P226", "hlc_12Rnd_40sw_JHP_P226", "hlc_12Rnd_40SW_SD_P226" };
        magazineWell[] = {"CBA_40SW_P226"};
        recoil = "recoil_pistol_acpc2";
        descriptionShort = "Pistol<br/>Caliber:.40 SW";
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p226_357_Shot_SoundSet", "nia_p226_357_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
            };
            __ROF(460);
            __MOA(6.28);
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
    class hlc_pistol_P226R_40 :hlc_P22640_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226R_ca";
        displayName = "SigSauer P226R(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226R_40Elite : hlc_pistol_P226R_40
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Elite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226elite_ca";
        displayName = "SigSauer P226R Elite(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
    };
    class hlc_pistol_P226R_40Combat :hlc_P22640_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226combat_ca";
        displayName = "SigSauer P226R Combat(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_9MM{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226R_40Enox :hlc_P22640_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226enox_ca";
        displayName = "SigSauer P226R Equinox(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "SIG_US_Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226enoxslides_co.tga", "hlc_wp_p226\tex\p226\226R_frame_co.tga", "hlc_wp_p226\tex\p226\226usgrip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226Enoxslides.rvmat", "hlc_wp_p226\mat\226RFrame.rvmat", "hlc_wp_p226\mat\grip_226us.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };

    class hlc_P226357_Base : hlc_P226_Base
    {
        magazines[] = { "hlc_12Rnd_357SIG_B_P226", "hlc_12Rnd_357SIG_JHP_P226"};
        magazineWell[] = {"CBA_357SIG_P226"};
        recoil = "recoil_pistol_acpc2";
        descriptionShort = "Pistol<br/>Caliber:.357 SIG";
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p226_357_Shot_SoundSet", "nia_p226_357_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
            };
            __ROF(460);
            __MOA(6.28);
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
    class hlc_pistol_P226R_357 :hlc_P226357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226R_ca";
        displayName = "SigSauer P226R(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226R_357Elite : hlc_pistol_P226R_357
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Elite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226elite_ca";
        displayName = "SigSauer P226R Elite(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
    };
    class hlc_pistol_P226R_357Combat :hlc_P226357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226combat_ca";
        displayName = "SigSauer P226R Combat(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_9MM{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
    };
    class hlc_pistol_P226R_Stainless :hlc_P226357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_226stainles_ca";
        displayName = "SigSauer P226R Stainless(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_226_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.07;
        __PDEXTERITY(0.75);/**/
        hiddenSelections[] = { "226Slides", "Sigframe_226Mk25", "SIG_US_Grips", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\226stainlessslides_co.tga", "hlc_wp_p226\tex\p226\226R_frame_co.tga", "hlc_wp_p226\tex\p226\226usgrip_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\226stainlessslides.rvmat", "hlc_wp_p226\mat\226RFrame.rvmat", "hlc_wp_p226\mat\grip_226us.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };

    class hlc_P228_Base : hlc_p226_base
    {
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 98;

        magazines[] = { "hlc_13Rnd_9x19_B_P228", "hlc_13Rnd_9x19_JHP_P228", "hlc_13Rnd_9x19_SD_P228", "hlc_15Rnd_9x19_B_P226", "hlc_15Rnd_9x19_JHP_P226", "hlc_15Rnd_9x19_SD_P226" };
        magazineWell[] += {"CBA_9x19_P228"};
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p2269mm_Shot_SoundSet", "nia_p2269mm_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet" };
            };
            __ROF(460);
            __MOA(15.28);
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
        inertia = 0.082;
        __PDEXTERITY(0.825);/**/
        picture = "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_01\data\UI\gear_pistol_heavy_01_X_ca.paa";
        class ItemInfo
        {
            priority = 2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            //class MuzzleSlot : asdg_MuzzleSlot_9MM {};
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        descriptionShort = "Pistol<br/>Caliber:9x19mm NATO";

    };
    class hlc_Pistol_P228 :hlc_P228_Base
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\229_9\228.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_228US_ca";
        displayName = "Sig P228(German)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        initSpeed = 375;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : niarms_228_toprail{};
            mass = 21;
        };
        inertia = 0.082;
        __PDEXTERITY(0.825);/**/
    };
    class hlc_Pistol_M11 :hlc_P228_Base
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\229_9\m11.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_m11_ca";
        displayName = "M11";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        initSpeed = 375;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : niarms_228_toprail{};
            mass = 21;
        };
        inertia = 0.082;
        __PDEXTERITY(0.825);/**/
    };
    class hlc_pistol_P229R :hlc_P228_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Nitron.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229r_ca";
        displayName = "SigSauer P229R";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
    };
    class hlc_pistol_P229R_Combat :hlc_P228_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229rtac_ca";
        displayName = "SigSauer P229R Combat";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_9MM{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
    };
    class hlc_Pistol_M11A1 :hlc_P228_Base
    {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\229_9\m11a1.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_m11a1_ca";
        displayName = "SigSauer M11A1";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        initSpeed = 375;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : niarms_228_toprail{};
            mass = 21;
        };
        inertia = 0.088;
        __PDEXTERITY(0.885);/**/
        hiddenSelections[] = { "228Slides", "Sigframe_228", "SIG_US_Grips228", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\228m11a1slides_co.tga", "hlc_wp_p226\tex\p226\228m11a1_frame_co.tga", "hlc_wp_p226\tex\p226\228_grips_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\228m11a1slides.rvmat", "hlc_wp_p226\mat\228m11a1frame.rvmat", "hlc_wp_p226\mat\grip_228.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_Pistol_M11A1D :hlc_Pistol_M11A1
    {
        author = "Toadie";
        model = "\hlc_wp_p226\mesh\wpn\229_9\m11a1.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_m11a1d_ca";
        displayName = "SigSauer M11A1-D";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        initSpeed = 375;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class CowsSlot : niarms_228_toprail{};
            mass = 21;
        };
        inertia = 0.088;
        __PDEXTERITY(0.885);/**/
        hiddenSelections[] = { "228Slides", "Sigframe_228", "SIG_US_Grips228", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\228m11a1dslides_co.tga", "hlc_wp_p226\tex\p226\228m11a1d_frame_co.tga", "hlc_wp_p226\tex\p226\228_grips_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\228m11a1slides.rvmat", "hlc_wp_p226\mat\228m11a1frame.rvmat", "hlc_wp_p226\mat\grip_228.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };
    class hlc_pistol_P229R_Elite :hlc_P228_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_tacelite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229elite_ca";
        displayName = "SigSauer P229TR Elite";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_9MM{};
        };
        inertia = 0.091;
        __PDEXTERITY(0.915);/**/
    };

    class hlc_P22840_Base : hlc_P228_Base
    {
        magazines[] = { "hlc_10Rnd_40SW_B_P229", "hlc_10Rnd_40sw_JHP_P229", "hlc_10Rnd_40SW_SD_P229", "hlc_12Rnd_40SW_B_P226", "hlc_12Rnd_40sw_JHP_P226", "hlc_12Rnd_40SW_SD_P226" };
        magazineWell[] = {"CBA_40SW_P226", "CBA_40SW_P229"};
        recoil = "recoil_pistol_acpc2";
        descriptionShort = "Pistol<br/>Caliber:.40 SW";
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p226_357_Shot_SoundSet", "nia_p226_357_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
            };
            __ROF(460);
            __MOA(14.28);
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
    class hlc_pistol_P229R_40 :hlc_P22840_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Nitron.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229r_ca";
        displayName = "SigSauer P229R(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
    };
    class hlc_pistol_P229R_40Combat :hlc_P22840_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229rtac_ca";
        displayName = "SigSauer P229R Combat(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_45ACP{};
        };
        inertia = 0.091;
        __PDEXTERITY(0.915);/**/
    };
    class hlc_pistol_P229R_40Elite :hlc_P22840_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_tacelite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229elite_ca";
        displayName = "SigSauer P229TR Elite(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_45ACP{};
        };
        inertia = 0.092;
        __PDEXTERITY(0.925);/**/
    };
    class hlc_pistol_P229R_40Enox :hlc_P22840_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
        initSpeed = 416;
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Nitron.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229Renox_ca";
        displayName = "SigSauer P229R Equinox(.40)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
        hiddenSelections[] = { "228Slides", "Sigframe_22R", "SIG_US_Grips228", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\228ENOxslides_co.tga", "hlc_wp_p226\tex\p226\229R_frame_co.tga", "hlc_wp_p226\tex\p226\228_grips_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\228enoxslides.rvmat", "hlc_wp_p226\mat\229RFrame.rvmat", "hlc_wp_p226\mat\grip_228.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };

    class hlc_P228357_Base : hlc_P228_Base
    {
        magazines[] = { "hlc_10Rnd_357SIG_B_P229", "hlc_10Rnd_357SIG_JHP_P229", "hlc_12Rnd_357SIG_B_P226", "hlc_12Rnd_357SIG_JHP_P226" };
        magazineWell[] = {"CBA_357SIG_P226", "CBA_357SIG_P229"};
        recoil = "recoil_pistol_acpc2";
        descriptionShort = "Pistol<br/>Caliber:.357 SIG";
        class Single : Mode_SemiAuto
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
                soundSetShot[] = { "nia_p226_357_Shot_SoundSet", "nia_p226_357_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
            };
            __ROF(460);
            __MOA(14.28);
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
    class hlc_pistol_P229R_357 :hlc_P228357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Nitron.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229r_ca";
        displayName = "SigSauer P229R(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
    };
    class hlc_pistol_P229R_357Combat :hlc_P228357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Combat.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229rtac_ca";
        displayName = "SigSauer P229R Combat(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_45ACP{};
        };
        inertia = 0.091;
        __PDEXTERITY(0.915);/**/
    };
    class hlc_pistol_P229R_357Elite :hlc_P228357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 4.4;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 111.76;
        author = "Toadie";

        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_tacelite.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229elite_ca";
        displayName = "SigSauer P229TR Elite(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
            class MuzzleSlot :asdg_MuzzleSlot_45ACP{};
        };
        inertia = 0.092;
        __PDEXTERITY(0.925);/**/
    };
    class hlc_pistol_P229R_357Stainless :hlc_P228357_Base  {
        scope = public;
        AB_barrelTwist = 10;
        AB_barrelLength = 3.9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 99.06;
        author = "Toadie";
 
        model = "\hlc_wp_p226\mesh\wpn\229_9\229R_Nitron.p3d";
        picture = "\hlc_wp_p226\tex\ui\gear_229Rstainless_ca";
        displayName = "SigSauer P229R Stainless(.357SIG)";
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 21;
            class CowsSlot : niarms_228_toprail{};
            class PointerSlot :asdg_PistolUnderRail{};
        };
        inertia = 0.09;
        __PDEXTERITY(0.905);/**/
        hiddenSelections[] = { "228Slides", "Sigframe_22R", "SIG_US_Grips228", "SIGpistol_Common" };
        hiddenSelectionsTextures[] = { "hlc_wp_p226\tex\p226\228stainlessslides_co.tga", "hlc_wp_p226\tex\p226\229R_frame_co.tga", "hlc_wp_p226\tex\p226\228_grips_co.tga", "hlc_wp_p226\tex\p226\common_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_p226\mat\228stainlessslides.rvmat", "hlc_wp_p226\mat\229RFrame.rvmat", "hlc_wp_p226\mat\grip_228.rvmat", "hlc_wp_p226\mat\commonmap.rvmat" };
    };

   class hlc_pistol_P239 :hlc_p226_base
   {
       scope = public;
       AB_barrelTwist = 10;
       AB_barrelLength = 3.6;
       ACE_barrelTwist = 254.0;
       ACE_barrelLength = 91.144;
       author = "Toadie";
       initSpeed = 380;
       model = "\hlc_wp_p226\mesh\wpn\239_9\239.p3d";
       picture = "\hlc_wp_p226\tex\ui\gear_p239_ca";
       displayName = "SigSauer P239";
       discretedistance[] = { 50 };
       discretedistanceinitindex = 0;
       magazines[] = { "hlc_10Rnd_9x19_B_P239", "hlc_10Rnd_9x19_JHP_P239", "hlc_10Rnd_9x19_SD_P239" };
       magazineWell[] = {"CBA_9x19_P239"};
       reloadmagazinesound[] = { "\hlc_wp_p226\snd\p239_reload", 0.7, 1, 20 };
       reloadAction = "HLC_GestureReloadP226";
       class WeaponSlotsInfo : WeaponSlotsInfo
       {
           mass = 14;
       };
       inertia = 0.071;
       __PDEXTERITY(0.71);/**/
       class Single : Single
       {
           class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
           {
               soundSetShot[] = { "nia_p2399mm_Shot_SoundSet", "nia_p2399mm_tail_SoundSet" };
           };

           class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
           {
               soundSetShot[] = { "nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet" };
           };
           __ROF(460);
           __MOA(22.28);
       };
   };
   class hlc_pistol_P239_40 :hlc_p226_base
   {
       recoil = "recoil_pistol_4five";
       scope = public;
       AB_barrelTwist = 10;
       AB_barrelLength = 3.6;
       ACE_barrelTwist = 254.0;
       ACE_barrelLength = 91.144;
       author = "Toadie";
       model = "\hlc_wp_p226\mesh\wpn\239_9\239.p3d";
       picture = "\hlc_wp_p226\tex\ui\gear_p239_ca";
       displayName = "SigSauer P239 (.40)";
       discretedistance[] = { 50 };
       discretedistanceinitindex = 0;
       magazines[] = { "hlc_8Rnd_40SW_B_P239","hlc_8Rnd_40sw_JHP_P239","hlc_8Rnd_40sw_SD_P239" };
       magazineWell[] = {"CBA_40SW_P239"};
       reloadmagazinesound[] = { "\hlc_wp_p226\snd\p239_reload", 0.7, 1, 20 };
       reloadAction = "HLC_GestureReloadP226";
       class WeaponSlotsInfo : WeaponSlotsInfo
       {
           mass = 14;
       };
       inertia = 0.077;
       __PDEXTERITY(0.77);/**/
       class Single : Single
       {
           class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
           {
               soundSetShot[] = { "nia_p239_357_Shot_SoundSet", "nia_p239_357_tail_SoundSet" };
           };

           class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
           {
               soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
           };
           __ROF(460);
           __MOA(20.28);
       };
   };
   class hlc_pistol_P239_357 :hlc_p226_base
   {
       recoil = "recoil_pistol_4five";
       scope = public;
       AB_barrelTwist = 10;
       AB_barrelLength = 3.6;
       ACE_barrelTwist = 254.0;
       ACE_barrelLength = 91.144;
       author = "Toadie";
       model = "\hlc_wp_p226\mesh\wpn\239_9\239.p3d";
       picture = "\hlc_wp_p226\tex\ui\gear_p239_ca";
       displayName = "SigSauer P239 (.357SIG)";
       discretedistance[] = { 50 };
       discretedistanceinitindex = 0;
       magazines[] = { "hlc_8Rnd_357SIG_B_P239", "hlc_8Rnd_357SIG_JHP_P239"};
       magazineWell[] = {"CBA_357SIG_P239"};
       reloadmagazinesound[] = { "\hlc_wp_p226\snd\p239_reload", 0.7, 1, 20 };
       reloadAction = "HLC_GestureReloadP226";
       class WeaponSlotsInfo : WeaponSlotsInfo
       {
           mass = 14;
       };
       inertia = 0.077;
       __PDEXTERITY(0.77);/**/
       class Single : Single
       {
           class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
           {
               soundSetShot[] = { "nia_p239_357_Shot_SoundSet", "nia_p239_357_tail_SoundSet" };
           };

           class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
           {
               soundSetShot[] = { "nia_p226_357_silencerShot_SoundSet", "nia_p226_357_silencerTail_SoundSet" };
           };
           __ROF(460);
           __MOA(20.28);
       };
   };
};
