#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_aks {
        requiredaddons[] = {"A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark", "asdg_jointrails", "hlcweapons_core"};
        units[] = {"HLC_AK_ammobox","Weapon_hlc_rifle_ak74","Weapon_hlc_rifle_ak74_dirty","Weapon_hlc_rifle_aks74","Weapon_hlc_rifle_aks74_GL","Weapon_hlc_rifle_ak12","Weapon_hlc_rifle_ak12GL","Weapon_hlc_rifle_akU12","Weapon_hlc_rifle_RPK12",
            "Weapon_hlc_rifle_aks74u","Weapon_hlc_rifle_aek971worn","Weapon_hlc_rifle_aek971","Weapon_hlc_rifle_ak47","Weapon_hlc_rifle_akm","Weapon_hlc_rifle_akmgl","Weapon_hlc_rifle_rpk","Weapon_hlc_rifle_rpk74n","Weapon_hlc_rifle_saiga12k"
        };
        weapons[] = {"HLC_Optic_PSO1","HLC_Optic_1p29","hlc_muzzle_545SUP_AK","hlc_muzzle_762SUP_AK","hlc_rifle_ak74","hlc_rifle_aks74","hlc_optic_kobra","hlc_optic_goshawk","hlc_rifle_ak12","hlc_rifle_aks74u","hlc_rifle_ak47","hlc_rifle_akm","hlc_rifle_akmgl","hlc_rifle_rpk","hlc_rifle_aks74_GL","hlc_rifle_aek971","hlc_rifle_saiga12k"};
        magazines[] = { "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_EP_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_t_rpk", "hlc_45Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "hlc_VOG25_AK", "hlc_GRD_Red", "hlc_GRD_blue", "hlc_GRD_green", "hlc_GRD_yellow", "hlc_GRD_white", "hlc_GRD_purple", "hlc_GRD_orange", "hlc_30Rnd_762x39_b_ak_orig" };
        version="V2.1";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_AK : Mod_Base {
        name = "NIArsenal: AK Rifles";
        picture = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class asdg_OpticSideMount : asdg_OpticRail {
    class compatibleItems {
        HLC_Optic_PSO1 = 1;
        HLC_Optic_1p29 = 1;
        hlc_optic_kobra = 1;
        hlc_optic_goshawk = 1;
    };
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_545SUP_AK = 1;
    };
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_762SUP_AK = 1;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadAK12New = "HLC_GestureReloadAK12New"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadRPK12 = "HLC_GestureReloadRPK12";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Prone", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Prone", "Gesture" };
        };
        /*
        class RifleKneelActions : RifleBaseStandActions {
        HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };*/
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
                HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {

        class HLC_GestureReloadAK12New : Default {
            file = "hlc_wp_ak\anim\reload\reload_ak12_standing.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };

        class HLC_GestureReloadAK12New_Prone : Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadAK12New_Context : HLC_GestureReloadAK12New {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadRPK12 :Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_standing.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadRPK12_Prone : Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadRPK12_Context : HLC_GestureReloadRPK12 {
            mask = "handsWeapon_context";
        };
    };
};


class CfgVehicles {
    class NATO_Box_Base;
    class HLC_AK_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AK Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        dlc = "Niarms_AK";
        class TransportMagazines {
            __M_MAG(hlc_30Rnd_545x39_B_AK,60);
            __M_MAG(hlc_30Rnd_545x39_t_ak,60);
            __M_MAG(hlc_30Rnd_545x39_S_AK,60);
            __M_MAG(hlc_45Rnd_545x39_t_rpk,60);
            __M_MAG(hlc_30Rnd_545x39_EP_ak,60);
            __M_MAG(hlc_30Rnd_762x39_b_ak,60);
            __M_MAG(hlc_30Rnd_762x39_t_ak,60);
            __M_MAG(hlc_45Rnd_762x39_t_rpk,60);
            __M_MAG(hlc_45Rnd_762x39_m_rpk,60);
            __M_MAG(hlc_10rnd_12g_buck_S12,60);
            __M_MAG(hlc_10rnd_12g_slug_S12,60);
            __M_MAG(hlc_VOG25_AK,60);
            __M_MAG(hlc_GRD_White,60);
            __M_MAG(hlc_GRD_red,60);
            __M_MAG(hlc_GRD_green,60);
            __M_MAG(hlc_GRD_blue,60);
            __M_MAG(hlc_GRD_orange,60);
            __M_MAG(hlc_GRD_purple,60);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_ak74,10);
            __M_WEP(hlc_rifle_aks74,10);
            __M_WEP(hlc_rifle_aks74_GL,10);
            __M_WEP(hlc_rifle_aks74_MTK,10);
            __M_WEP(hlc_rifle_aks74u,10);
            __M_WEP(hlc_rifle_aks74u_MTK,10);
            __M_WEP(hlc_rifle_ak47,10);
            __M_WEP(hlc_rifle_akm,10);
            __M_WEP(hlc_rifle_akmgl,10);
            __M_WEP(hlc_rifle_akm_MTK,10);
            __M_WEP(hlc_rifle_RK62,10);
            __M_WEP(hlc_rifle_slr107u,10);
            __M_WEP(hlc_rifle_slr107u_MTK,10);
            __M_WEP(hlc_rifle_aku12,10);
            __M_WEP(hlc_rifle_rpk12,10);
            __M_WEP(hlc_rifle_rpk,10);
            __M_WEP(hlc_rifle_rpk74n,10);
            __M_WEP(hlc_rifle_ak12,10);
            __M_WEP(hlc_rifle_ak12gl,10);
            __M_WEP(hlc_rifle_aek971,10);
            __M_WEP(hlc_rifle_aek971_mtk,10);
            __M_WEP(hlc_rifle_ak74_MTK,10);
            __M_WEP(hlc_rifle_ak74m,10);
            __M_WEP(hlc_rifle_ak74m_gl,10);
            __M_WEP(hlc_rifle_ak74m_MTK,10);
            __M_WEP(hlc_rifle_saiga12k,10);
        };
        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(HLC_Optic_PSO1,10);
            __M_ITM(HLC_Optic_1p29,10);
            __M_ITM(hlc_muzzle_545SUP_AK,10);
            __M_ITM(hlc_muzzle_762SUP_AK,10);
            __M_ITM(hlc_optic_kobra,10);
            __M_ITM(hlc_optic_goshawk,10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_rifle_ak74,hlc_30Rnd_545x39_B_AK,AK-74,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74_MTK,hlc_30Rnd_545x39_B_AK,AK-74(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74_dirty,hlc_30Rnd_545x39_B_AK,AK-74(Worn),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74_dirty2,hlc_30Rnd_545x39_B_AK,AK-74(Worn),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aks74,hlc_30Rnd_545x39_B_AK,AKS-74,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aks74_MTK,hlc_30Rnd_545x39_B_AK,AKS-74(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aks74_GL,hlc_30Rnd_545x39_B_AK,AKS-74+GP30,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak12,hlc_30Rnd_545x39_B_AK,AK-12,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak12GL,hlc_30Rnd_545x39_B_AK,AK-12+GP30,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aku12,hlc_30Rnd_545x39_B_AK,AK-12U,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_RPK12,hlc_45Rnd_545x39_t_rpk,RPK-12,Niarms_AK,Toadie,MachineGuns);
    __WEAPONHOLDER(hlc_rifle_aks74u,hlc_30Rnd_545x39_B_AK,AKS-74U,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aks74u_MTK,hlc_30Rnd_545x39_B_AK,AKS-74U(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aek971worn,hlc_30Rnd_545x39_B_AK,AEK-971(Worn),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aek971,hlc_30Rnd_545x39_B_AK,AEK-971,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aek971_mtk,hlc_30Rnd_545x39_B_AK,AEK-971(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak47,hlc_30Rnd_762x39_b_ak,AK-47,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_akm,hlc_30Rnd_762x39_b_ak,AKM,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_akm_MTK,hlc_30Rnd_762x39_b_ak,AKM(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_akmgl,hlc_30Rnd_762x39_b_ak,AKM+GP25,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_rpk,hlc_75Rnd_762x39_m_rpk,RPK,Niarms_AK,Toadie,MachineGuns);
    __WEAPONHOLDER(hlc_rifle_rpk74n,hlc_45Rnd_545x39_t_rpk,RPK-74,Niarms_AK,Toadie,MachineGuns);
    __WEAPONHOLDER(hlc_rifle_saiga12k,hlc_10rnd_12g_buck_S12,Saiga 12K,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_RK62,hlc_30Rnd_762x39_b_ak,RK.62,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_slr107u,hlc_30Rnd_762x39_b_ak,SLR-107U,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_slr107u_MTK,hlc_30Rnd_762x39_b_ak,SLR-107U(MTK),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74m,hlc_30Rnd_545x39_B_AK,AK-74M,Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74m_gl,hlc_30Rnd_545x39_B_AK,AK-74M(GL),Niarms_AK,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ak74m_MTK,hlc_30Rnd_545x39_B_AK,AK-74M(MTK),Niarms_AK,Toadie,AssaultRifles);
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_10rnd_12g_buck_S12 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_12G_Buck";
        count = 10;
        displaynameshort = "00-Buck";
        displayname = "Saiga Mag (Buckshot) 10rnd 12 Gauge";
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
        initspeed = 370;
        lastroundstracer = 1;
        picture = "\hlc_wp_ak\tex\ui\m_saiga12k_buck_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
        tracersevery = 0;
        mass = 13.3;                                            // w/ guessed plastic mag ; 12 g * 70 ( pb 32 gramm, 11 pellets, 370 m/s, 604 gram )

    };

    class hlc_10rnd_12g_slug_S12 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "B_12Gauge_Slug";
        count = 10;
        displaynameshort = "Slug";
        displayname = "Saiga Mag (Slug) 10rnd 12 Gauge";
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
        initspeed = 420;
        lastroundstracer = 1;
        picture = "\hlc_wp_ak\tex\ui\m_saiga12k_slug_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
        tracersevery = 0;
        mass = 11.7;                                                // w/ guessed plastic mag ; 12 g * 70 ( pb/st 32 gramm, 1 pellets, 420 m/s, 531 gram)

    };
    class hlc_30Rnd_545x39_B_AK : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.45x39mm 7N6M (DOI: 1987<br />Type:Full Metal Jacket (Lead Tip, Mild Steel Core)<br />Rounds: 30";
        displaynameshort = "7N6M EPR";                                                  // I think this would actually be an EPR round, intermediate between AP and Ball
        displayname = "AK74 Mag (EPR) 30rnd 5.45mm";
        initSpeed = 879.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
        tracersevery = 0;
        mass = 12;

    };
    class hlc_30Rnd_545x39_S_AK : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_7u1";
        count = 30;
        displaynameshort = "7U1 Subsonic";
        displayname = "AK74 Mag (Subsonic) 30rnd 5.45mm";
        descriptionshort = "Caliber: 5.45x39mm 7U1 subsonic <br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        initspeed = 363;                                                                // is balanced so subsonic ammo ensures correct speed with 200 mm barrel => > 303 m/s
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
        tracersevery = 0;
        mass = 12.2;
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_30Rnd_545x39_t_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_Tracer";
        displaynameshort = "7T3 Tracer";
        displayname = "AK74 Mag (Tracer) 30rnd 5.45mm";
        descriptionshort = "Caliber: 5.45x39mm 7T3(DOI: 1974)<br />Type:Full Metal Jacket (Barium Tip, Mild Steel Core)<br />Rounds: 30";
        lastroundstracer = 0;
        tracersevery = 1;
        mass = 11.9;
        picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_45Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_Tracer";
        count = 45;
        displaynameshort = "7T3 Tracer";
        displayname = "RPK74 Mag (Tracer) 45rnd 5.45mm";
        descriptionshort = "Caliber: 5.45x39mm 7T3/7N6<br />Rounds: 45<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        initSpeed = 880;
        lastroundstracer = 1;
        mass = 17.8;
        picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
        tracersevery = 1;
        model = "\hlc_wp_ak\mesh\magazine\magazine_rpk74.p3d";
    };
    class hlc_45Rnd_545x39_m_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_Tracer";
        count = 45;
        displaynameshort = "7T3 Tracer";
        displayname = "RPK74 Mag (FMJ-Tracer) 45rnd 5.45mm"; 
        descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 45";
        lastroundstracer = 1;
        tracersevery = 1;
        mass = 18.3;
        picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_rpk74.p3d";
    };
    class hlc_60Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "FH_545x39_Tracer";
        count = 60;
        displaynameshort = "Tracer/Ball";
        descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 60";
        displayname = "RPK12 Mag (Tracer) 60rnd 5.45mm";
        lastroundstracer = 1;
        initSpeed = 880;                  
        mass = 24.1;
        picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_rpk12.p3d";
    };
    class hlc_30Rnd_545x39_EP_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        scope = 2;
        displaynameshort = "7N24 S-AP";
        displayname = "AK74 Mag (Enhanced Peneterator) 30rnd 5.45mm";
        descriptionshort = "Caliber: 5.45x39mm 7N24 Super-AP ( DOI: 1999 ). <br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        initSpeed = 880;
        lastroundstracer = 0;
        tracersevery = 0;
        mass = 12;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_30Rnd_762x39_b_ak : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_762x39_Ball";
        count = 30;
        displaynameshort = "M43 Ball";
        displayname = "AKM Mag (Ball) 30rnd 7.62mm";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 M43 Ball, Magazine (DOI: 1959) used in AK47 / AKM / RPK";
        initspeed = 718;
        lastroundstracer = 1;
        tracersevery = 0;
        mass = 14.5;                                             //akm magazine is much lighter
        picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
    };
    class hlc_30Rnd_762x39_b_ak_orig : 30Rnd_556x45_Stanag {        // is new class to have the original ak 47 magazine
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_762x39_Ball";
        count = 30;
        displaynameshort = "M43 Ball";
        displayname = "AK47 Mag (Ball) 30rnd 7.62mm";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 M43 Ball (DOI: 1944) Original Magazine used in AK47 / AKM / RPK";        
        initspeed = 710;
        mass = 20.3;                        // old fashioned, original heavy ak 47 magazine before the akm came out: 920 gramm
        tracersevery = 0;
        lastroundstracer = 0;
        picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
    };
    class hlc_30Rnd_762x39_t_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_762x39_Tracer";
        count = 30;
        displaynameshort = "57-N-231P Tracer";
        displayname = "AK47 - Mag (Tracer) 30rnds 7.62";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) Magazine used in AK47 / RPK";
        initspeed = 759.0;
        lastroundstracer = 1;
        tracersevery = 1;
        mass = 14.5;                                            
        picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
    };
    class hlc_30Rnd_762x39_AP_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_762x39_AP";
        count = 30;
        displaynameshort = "7N23 AP";
        descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 30";
        displayname = "AK47 Mag (AP) 30rnd 7.62mm";
        initspeed = 759.0;
        lastroundstracer = 0;
        tracersevery = 0;
        mass = 13;
        picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
    };
    class hlc_45Rnd_762x39_AP_rpk : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 45;
        descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 45";
        displayname = "RPK Mag (AP) 45rnd 7.62mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        mass = 16;
        displaynameshort = "7N23 AP";
        picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
        initspeed = 759.0;
    };
    class hlc_75Rnd_762x39_AP_rpk : hlc_45Rnd_762x39_AP_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 75";
        displayname = "RPK Drum (AP) 75rnd 7.62mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        mass = 32;
        displaynameshort = "7N23 AP";
        picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_RPKdrum.p3d";
        initspeed = 759.0;
    };
    class hlc_30rnd_762x39_s_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "HLC_762x39_Ball";
        count = 30;
        displayname = "AK47 Mag (Subsonic) 30rnd 7.62mm";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 U Subsonic (DOI 1962) Magazine used in AK47 /AKM / RPK";
        initspeed = 360;                                            // is balanced so subsonic ammo ensures correct speed with 200 mm barrel => 320 m/s
        lastroundstracer = 1;
        tracersevery = 1;
        mass = 14.5                                                // with more modern akm magazine => 798 gramm
        picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
    };
    class hlc_45Rnd_762x39_t_rpk : 30Rnd_556x45_Stanag {            // I dont want to change the name, but it actually are 40 rounders only
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 40;
        displaynameshort = "Tracer";
        displayname = "RPK Mag (Tracer) 40rnd 7.62mm";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) Magazine used in AK47 / RPK";
        initspeed = 718;                                            // the higher speed with the RPK up to 745 m/s needs to be set by the weapon
        lastroundstracer = 1;
        tracersevery = 1;
        mass = 19.4;                                                // with more modern ( lighter ) magazine => 880 gramm
        picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
    };
    class hlc_45Rnd_762x39_m_rpk : hlc_45Rnd_762x39_t_rpk {            // I dont want to change the name, but it actually are 40 rounders only
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 40;
        displaynameshort = "Tracer/Ball";
        displayname = "RPK Mag (Mixed) 40rnd 7.62mm";
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
        initspeed = 718;                                            // the higher speed with the RPK up to 745 m/s needs to be set by the weapon
        lastroundstracer = 1;
        tracersevery = 3;
        mass = 17.7;
        picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_RPK.p3d";
    };
    class 1Rnd_HE_Grenade_shell;
    class hlc_VOG25_AK : 1Rnd_HE_Grenade_shell {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = 2;
        ammo = "G_40mm_HE";
        count = 1;
        displaynameshort = "HE Grenade Round";
        displayname = "VOG25 HE Grenade Round";
        descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
        initspeed = 76;
        mass = 5.5;
        namesound = "";
        picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        reloadaction = "HLC_GestureReloadGP30";
        type = 16;
    };
    class hlc_GRD_White : 1Rnd_HE_Grenade_shell {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "G_40mm_Smoke";
        descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (White)";
        displaynameshort = "White Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        reloadaction = "HLC_GestureReloadGP30";
        mass = 5.8;
    };
    class hlc_GRD_Red : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeRed";
        descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Red)";
        displaynameshort = "Red Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
    };
    class hlc_GRD_green : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeGreen";
        descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Green)";
        displaynameshort = "Green Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
    };
    class hlc_GRD_yellow : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeYellow";
        descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Yellow)";
        displaynameshort = "Yellow Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
    };
    class hlc_GRD_orange : hlc_grd_white {
        ammo = "G_40mm_SmokeOrange";
        descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Orange)";
        displaynameshort = "Orange Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
    };
    class hlc_GRD_purple : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokePurple";
        descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Purple)";
        displaynameshort = "Purple Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
    };
    class hlc_GRD_blue : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeBlue";
        descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Blue)";
        displaynameshort = "Blue Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
    };
};

class CfgWeapons {

//optics

    class InventoryOpticsItem_Base_F;
    class ItemCore;
    class optic_ACO_grn : ItemCore {
        class ItemInfo;
    };
    class optic_dms;

    class HLC_Optic_PSO1 : optic_dms {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";

        displayname = "PSO-1M";
        descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
        model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { -10, 10 };
        ACE_ScopeAdjust_Increment = 0.5;
        class ItemInfo: InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 12.5;
            modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = { 100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000 };
                    discreteDistanceInitIndex = 3;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip_ILLUM {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {400};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics_illum"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.06;
    };

    class HLC_Optic_1p29 : HLC_Optic_PSO1 {
        dlc = "Niarms_AK";
        author = "Bionic, Toadie";

        displayname = "1P29";
        descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
        model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
        ACE_ScopeAdjust_Vertical[] = {};
        ACE_ScopeAdjust_Horizontal[] = {};
        ACE_ScopeAdjust_Increment = 0;
        class ItemInfo: InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 16;
            modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    discreteDistance[] = {300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\1p29\1p29_optics"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.08;
    };

    class hlc_optic_kobra : optic_ACO_grn {
        dlc = "Niarms_AK";
        author = "Tigg, Toadie";

        displayname = "Kobra Sight";
        descriptionshort = "Open Face Collimator Optic";
        model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_kobra_ca";
        scope = 2;
        weaponinfotype = "RscWeaponZeroing";
        class ItemInfo: ItemInfo {
            mass = 8;
        };
        inertia = 0.04;
    };

    class hlc_optic_goshawk : optic_ACO_grn {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        scope = public;
        displayName = "Goshawk";
        descriptionshort = "Goshawk Adaptable Thermal Optic<br />Magnification: 3.6x";
        picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca";
        model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 32;
            modelOptics = "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d";
            class OpticsModes {
                class Goshawk_TI {
                    opticsID = 1;
                    useModelOptics = true;
                    opticsZoomMin = 0.06944444;// 3.6 zoom
                    opticsZoomMax = 0.06944444;
                    opticsZoomInit = 0.06944444;
                    distanceZoomMin = 300;
                    distanceZoomMax = 2200;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200 };
                    discreteDistanceInitIndex = 1;
                    modelOptics[] = { "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d" };
                    memoryPointCamera = "eye2";
                    visionmode[] = { "Ti", "Normal" };
                    thermalMode[] = { 0, 1 };
                    opticsFlare = true;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "eye";
                };
            };
        };
        inertia = 0.16;
    };

//muzzles

    class muzzle_snds_H : ItemCore {
        class ItemInfo;
    };

    class hlc_muzzle_545SUP_AK : muzzle_snds_H {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        displayName = "PBS4 AK Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "\hlc_wp_ak\mesh\PBS4\pbs4";
        class ItemInfo: ItemInfo {
            mass = 6.5;                                                        // guessed
        };
        inertia = 0.08;
    };
    class hlc_muzzle_762SUP_AK : hlc_muzzle_545SUP_AK {
        dlc = "Niarms_AK";
        author = "Jason9Jason, Toadie";
        displayName = "PBS1 AK Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "\hlc_wp_ak\mesh\PBS1\pbs1";
        class ItemInfo: ItemInfo {
            mass = 9;
        };
        
    };

//weapons

    class UGL_F;
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_ak_base : Rifle_Base_F {
        magazineReloadSwitchPhase = 0.5;
        author = "Toadie";
        recoil = "recoil_mk20";
    
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = private;
        magazines[] = { __545x39_MAGS, __545x39_BI_MAGS };
        class Library {
            libTextDesc = "Izhmash AK74";
        };
        reloadAction = "HLC_GestureReloadAK";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot_545R {};
            class CowsSlot {};
            class PointerSlot {};
        };
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        dexterity = 1.8;
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
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        modes[] = {"FullAuto","Single", "AI_Burst_close", "AI_Burst_far","AI_Single_optics1", "AI_Single_optics2" };

        class Single : Mode_SemiAuto {
            __ROF(650);
            dispersion = 0.000654498;

            __AI_ROF_AK_SINGLE;

            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
            };
        };
        class FullAuto : Mode_FullAuto {
            __ROF(650);
            dispersion = 0.000654498;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.8;
            maxRange = 30;
            maxRangeProbab = 0.3;

            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
            };
        }; 
        class AI_Burst_close : FullAuto {
            
                showToPlayer = 0; 
                aiBurstTerminable = 1; 
                burst = 7; 
                __AI_ROF_AK_CLOSE_BURST; 
        }; 
        class AI_Burst_far : AI_Burst_close {
            
                burst = 4; 
                __AI_ROF_AK_FAR_BURST; 
        }; 
        class AI_Single_optics1 : Single {
            
                showToPlayer = 0; 
                requiredOpticType = 1; 
                __AI_ROF_AK_MSCOPE_SINGLE; 
        }; 
        class AI_Single_optics2 : AI_Single_optics1 {
            
                requiredOpticType = 2; 
                __AI_ROF_AK_HSCOPE_SINGLE; 
        }; 
        class Burst3 : Single {
            
                __AI_ROF_AK_SHORT_BURST; 
                burst = 3; 
                displayName = $STR_DN_MODE_BURST; 
                textureType = "burst"; 
                soundBurst = 0; 
                showToPlayer = 0;
        }; 
        class Burst2 : Burst3 {
            
                burst = 2; 
                textureType = "dual"; 
        };
        drysound[] = {"hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10};
        reloadMagazineSound[] = { "hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload", 0.8, 1, 20 };
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class hlc_GP30 : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "GP30";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = { "A3\sounds_f\Weapons\other\sfx5", 1, 1, 400 };
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { __40MM_GP_GRENADES };
            reloadmagazinesound[] = { "\hlc_wp_ak\snd\gp30_reload", 1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "\hlc_wp_ak\snd\gp30_fire", 1.0, 1, 400 };
            weaponinfotype = "RscWeaponZeroing";
            reloadAction = "HLC_GestureReloadGP30";
            __AI_ROF_GL_SINGLE;
        };
        class hlc_GP25 : hlc_GP30 {
            cameraDir = "OP_look";
            discreteDistanceCameraPoint[] = { "OP_eye", "OP_eye1", "OP_eye2", "OP_eye3", "OP_eye4", "OP_eye5", "OP_eye6", "OP_eye7" };
            discreteDistanceInitIndex = 2;
            displayname = "GP25";
        };
    };

    class hlc_rifle_ak74 : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "MrRifleman, Toadie";
        scope = public;
        AB_barrelTwist=7.87;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        displayName = "Izhmash AK74 [16.3 inch]";

        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_ak74\body_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        bg_bipod = 0; 
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        reloadAction = "HLC_GestureReloadAK545";
        __AI_AK_MODES(Single, FullAuto);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67.7;
            class CowsSlot : asdg_OpticSideMount {};
        };
        inertia = 0.3;
        __DEXTERITY(3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_60rnd";
            default = "hlc_rifle_ak74";
        };
    };
    class hlc_rifle_ak74_45rnd : hlc_rifle_ak74
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_45rnd.p3d";
    };
    class hlc_rifle_ak74_60rnd : hlc_rifle_ak74
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_60rnd.p3d";
    };

    class hlc_rifle_ak74_dirty : hlc_rifle_ak74 {
        author = "MrRifleman, Millenia, Toadie";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74d1_ca";
        displayName = "Izhmash AK74(Worn)";
        hiddenSelections[] = { "Main", "Dovetail", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_ak74\body_dirty_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_dirty_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty_60rnd";
            default = "hlc_rifle_ak74_dirty";
        };
    };
    class hlc_rifle_ak74_dirty_45rnd : hlc_rifle_ak74_dirty
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(Worn)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty_45rnd.p3d";
    };
    class hlc_rifle_ak74_dirty_60rnd : hlc_rifle_ak74_dirty
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(Worn)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty_60rnd.p3d";
    };

    class hlc_rifle_ak74_dirty2 : hlc_rifle_ak74 {
        author = "MrRifleman, Bull5hit, Toadie";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74d2_ca";
        displayName = "Izhmash AK74(Worn)";
        hiddenSelections[] = { "Main", "Dovetail", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_ak74\body_dirty2_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty2_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_dirty2_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty2_60rnd";
            default = "hlc_rifle_ak74_dirty2";
        };
    };
    class hlc_rifle_ak74_dirty2_45rnd : hlc_rifle_ak74_dirty2
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(Worn)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2_45rnd.p3d";
    };
    class hlc_rifle_ak74_dirty2_60rnd : hlc_rifle_ak74_dirty2
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(Worn)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2_60rnd.p3d";
    };

    class hlc_rifle_aks74 : hlc_rifle_ak74 {
        dlc = "Niarms_AK";

        author = "MrRifleman, Toadie";

        scope =public;
        displayName = "Izhmash AKS74 [16.3 inch]";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        reloadAction = "HLC_GestureReloadAK545";
        model = "\hlc_wp_ak\mesh\aks74\aks74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74_ca";

        hiddenSelections[] = { "Main", "Dovetail", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_aks\aks_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        bg_bipod = 0; 
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.4;
        };
        inertia = 0.29;
        __DEXTERITY(2.9,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_60rnd";
            default = "hlc_rifle_aks74";
        };
    };
    class hlc_rifle_aks74_45rnd : hlc_rifle_aks74
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74";
        model = "\hlc_wp_ak\mesh\aks74\aks74_45rnd.p3d";
        
    };
    class hlc_rifle_aks74_60rnd : hlc_rifle_aks74
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74";
        model = "\hlc_wp_ak\mesh\aks74\aks74_60rnd.p3d";
        
    };

    class hlc_rifle_ak12 : hlc_ak_base {
        dlc = "Niarms_AK";

        author = "Maibatsu, Toadie";
        scope = public;   
        displayName = "Izhmash AK12 [16.3 inch]";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        model = "\hlc_wp_ak\mesh\ak12\ak12.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak12_ca";
        hiddenSelections[] = { "Main", "Foregrip", "Bracket", "Bipod", "GP30"};
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\ak12\ak12_m_co.tga", "hlc_wp_ak\tex\ak12\ak12_upper_co.tga", "hlc_wp_ak\tex\toadie_offset\rail_co.tga","hlc_wp_ak\tex\mil_aks\aks-74u_co.tga",""};
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        bg_bipod = 0;
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2",1, 1, 20 };
        reloadAction = "HLC_GestureReloadAK12New";

        modes[] = { "FullAuto", "Burst", "Single", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2","AI_far","SemiAuto" };

        class FullAuto : Mode_FullAuto {
            __ROF(600);
            dispersion = 0.000654498;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.8;
            maxRange = 30;
            maxRangeProbab = 0.3;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
            };
        };
        class Single : Mode_SemiAuto {
            __ROF(600);
            dispersion = 0.00062541;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
            };
        };
        class Burst : Mode_Burst {
            burst = 2;
            textureType = "dual";
            __ROF(1000);
            dispersion = 0.00062541;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.0005;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
            };

        };
        class AI_Burst_close : FullAuto {
            
                showToPlayer = 0; 
                aiBurstTerminable = 1; 
                burst = 4; 
                __AI_ROF_RIFLE_SMALL_CLOSE_BURST; 
        }; 
        class AI_Single_optics1 : Single {
            
                showToPlayer = 0; 
                requiredOpticType = 1; 
                __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE; 
        }; 
        class AI_Single_optics2 : AI_Single_optics1 {
            
                requiredOpticType = 2; 
                __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE; 
        }; 
        class SemiAuto : Single {
            showToPlayer = 0;
                __AI_ROF_RIFLE_SMALL_SEMI; 
        }; 
        class AI_far : Single {
            
                showToPlayer = 0; 
                aiBurstTerminable = 1; 
                burst = 5; 
                reloadtime = 0.2; 
                __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE; 
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72.7;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
        };
        inertia = 0.33;
        __DEXTERITY(3.3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak12_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak12_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak12_60rnd";
            default = "hlc_rifle_ak12";
        };
    };
    class hlc_rifle_ak12_45rnd : hlc_rifle_ak12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12";
        model = "\hlc_wp_ak\mesh\ak12\ak12_45rnd.p3d";

    };
    class hlc_rifle_ak12_60rnd : hlc_rifle_ak12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12";
        model = "\hlc_wp_ak\mesh\ak12\ak12_60rnd.p3d";

    };

    class hlc_rifle_ak12GL : hlc_rifle_ak12 {
        dlc = "Niarms_AK";

        author = "Maibatsu, Toadie";
        scope = public;
        displayName = "Izhmash AK12(GL) [16.3 inch]";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        model = "\hlc_wp_ak\mesh\ak12\ak12GP.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak12GL_ca";
        hiddenSelections[] = { "Main", "Foregrip", "Bracket", "Bipod", "GP30" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\ak12\ak12_m_co.tga", "hlc_wp_ak\tex\ak12\ak12_upper_co.tga", "hlc_wp_ak\tex\toadie_offset\rail_co.tga", "hlc_wp_ak\tex\mil_aks\aks-74u_co.tga", "hlc_wp_ak\tex\gp30\gp30_co.tga" };
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        bg_bipod = 0;
        handanim[] = { "OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm" };
        reloadAction = "HLC_GestureReloadAK12New";
        muzzles[] = { "this", "hlc_GP30" };
        weaponinfotype = "RscWeaponZeroing";
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.8;
        };
        inertia = 0.67;
        __DEXTERITY(3.3 + 1.4,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak12GL_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak12GL_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak12GL_60rnd";
            default = "hlc_rifle_ak12GL";
        };
    };
    class hlc_rifle_ak12GL_45rnd : hlc_rifle_ak12GL
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12(GL)";
        model = "\hlc_wp_ak\mesh\ak12\ak12GP_45rnd.p3d";

    };
    class hlc_rifle_ak12GL_60rnd : hlc_rifle_ak12GL
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12(GL)";
        model = "\hlc_wp_ak\mesh\ak12\ak12GP_60rnd.p3d";

    };

    class hlc_rifle_aku12 : hlc_rifle_ak12 {
        dlc = "Niarms_AK";
        author = "Maibatsu, Toadie";
        scope = public;
        AB_barrelTwist=6.3;
        AB_barrelLength=8.3;
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;                                                    
        displayName = "Izhmash AK12U [8.3 inch]";                                    
        initspeed = -0.835227;                                                            // original value = -0.816667 => 735 m/s with 880 m/s ammo
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded

        model = "\hlc_wp_ak\mesh\ak12\akU12.p3d";                                    
        picture = "\hlc_wp_ak\tex\ui\gear_ak12u_ca";                                
        hiddenSelections[] = { "Main", "Foregrip", "Bracket", "Bipod", "GP30" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\ak12\ak12_m_co.tga", "hlc_wp_ak\tex\ak12\ak12_upper_co.tga", "hlc_wp_ak\tex\toadie_offset\rail_co.tga", "hlc_wp_ak\tex\mil_aks\aks-74u_co.tga", "hlc_wp_ak\tex\gp30\gp30_co.tga"};
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        bg_bipod = 0; 
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2", 1, 1, 20 };
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        reloadAction = "HLC_GestureReloadAK12New";
        class FullAuto: FullAuto {
            dispersion = 0.000972294;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
            };
        };
        class Single : Single {
            dispersion = 0.000972294;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
            };
            maxRange = 400;
        };
        class Burst : Burst {
            dispersion = 0.000972294;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
            };
        };
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class AI_Single_optics1 : Single {

            showToPlayer = 0;
            requiredOpticType = 1;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class AI_Single_optics2 : AI_Single_optics1 {

            requiredOpticType = 2;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class SemiAuto : Single {
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_SEMI;
        };
        class AI_far : Single {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 5;
            reloadtime = 0.2;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61;
        };
        inertia = 0.3;
        __DEXTERITY(3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aku12_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aku12_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aku12_60rnd";
            default = "hlc_rifle_aku12";
        };
    };
    class hlc_rifle_aku12_45rnd : hlc_rifle_aku12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12U";
        model = "\hlc_wp_ak\mesh\ak12\aku12_45rnd.p3d";

    };
    class hlc_rifle_aku12_60rnd : hlc_rifle_aku12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK12U";
        model = "\hlc_wp_ak\mesh\ak12\aku12_60rnd.p3d";

    };

    class hlc_rifle_RPK12 : hlc_rifle_ak12 {
        dlc = "Niarms_AK";
        author = "Maibatsu, Toadie";
        scope = public;
        AB_barrelLength=23.2;
        ACE_barrelLength = 589.28;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        displayName = "Izhmash RPK12";
        initspeed = -1.090909;
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod

        model = "\hlc_wp_ak\mesh\ak12\rpk12_30rnd.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk12_ca";
        hiddenSelections[] = { "Main", "Foregrip", "Bracket", "Bipod", "GP30" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\ak12\ak12_m_co.tga", "hlc_wp_ak\tex\ak12\ak12_upper_co.tga", "hlc_wp_ak\tex\toadie_offset\rail_co.tga", "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\gp30\gp30_co.tga" };
        cursor = "mg";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\rpk12_reload", 1, 1, 20 };
        reloadAction = "HLC_GestureReloadRPK12";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 101.4;
        };

        class FullAuto: FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
            };
        };
        class Single: Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
            };

             class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
            };
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
            };
        };
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class AI_Single_optics1 : Single {
            
            showToPlayer = 0;
            requiredOpticType = 1;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class AI_Single_optics2 : AI_Single_optics1 {

            requiredOpticType = 2;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class SemiAuto : Single {
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_SEMI;
        };
        class AI_far : Single {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 5;
            reloadtime = 0.2;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        inertia = 0.7;
        __DEXTERITY(5,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_RPK12_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_RPK12_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_RPK12_60rnd";
            default = "hlc_rifle_RPK12";
        };
    };
    class hlc_rifle_RPK12_45rnd : hlc_rifle_RPK12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash RPK12";
        model = "\hlc_wp_ak\mesh\ak12\rpk12_45rnd.p3d";

    };
    class hlc_rifle_RPK12_60rnd : hlc_rifle_RPK12
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash RPK12";
        model = "\hlc_wp_ak\mesh\ak12\rpk12.p3d";

    };

    class hlc_rifle_aks74u : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Millenia, Toadie";
        scope = public;
        AB_barrelTwist=6.3;
        AB_barrelLength=8.3;
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;

        displayName = "Izhmash AKS74U";
        initspeed = -0.835227;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74u_x_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount","Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\mil_aks\aks-74u_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga","hlc_wp_ak\tex\rifleman_ak74\body_co.tga" };
        discretedistance[] = {350,500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        reloadAction = "HLC_GestureReloadAK545OneHand";
        class FullAuto: FullAuto {
            __ROF(700);
            dispersion = 0.000972294;

            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
            };
        };
        class Single: Single {
            __ROF(700);
            dispersion = 0.000972294;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
            };
            maxRange = 400;
        };
        class Library {
            libTextDesc = "Izhmash AKS74U";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 52;
            class CowsSlot : asdg_OpticSideMount {};
        };
        inertia = 0.26;
        __DEXTERITY(2.6,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74u_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74u_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_60rnd";
            default = "hlc_rifle_aks74u";
        };
    };
    class hlc_rifle_aks74u_45rnd : hlc_rifle_aks74u
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74U";
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u_45rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\mil_aks\aks-74u_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\adept\wpn_ak_10_co.tga" };
    };
    class hlc_rifle_aks74u_60rnd : hlc_rifle_aks74u
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74U";
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u_60rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\mil_aks\aks-74u_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\rifleman_akmags\texture_co.tga" };
    };

    class hlc_rifle_ak47 : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Twinke Masta, Marcius, Toadie";
        scope = public;
        AB_barrelTwist=9.45;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 414.02;
        bg_bipod = 0; 
        displayName = "Izhmash AK47 [16.3 inch]";
        descriptionShort = "Assault rifle<br/>Caliber: 7.62mm (DOI: 1947)";
        magazines[] = { __762x39_MAGS, __762x39_BI_MAGS };
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        model = "\hlc_wp_ak\mesh\ak47\ak47.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak47_ca";
        hiddenSelections[] = { "Main","upper", "Dovetail", "Mount", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\47_rec_co.tga","hlc_wp_ak\tex\upper_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\magazine_co.tga" };
        recoil = "recoil_mx";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";

        reloadAction = "HLC_GestureReloadAK762";
        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak47\ak_reload_longer",0.9,1,30};



        class FullAuto: FullAuto {
            reloadTime = 0.097;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
            };
        };
        class Single : Single {
            reloadTime = 0.097;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AK47 (Type 1)";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
            class CowsSlot : asdg_OpticSideMount {};
        };
        inertia = 0.35;
        __DEXTERITY(3.5,0);
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_ak47_45rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_ak47_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_ak47_75rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_ak47_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_ak47_75rnd";
            default = "hlc_rifle_ak47";
        };
    };
    class hlc_rifle_ak47_45rnd : hlc_rifle_ak47
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK47";
        model = "\hlc_wp_ak\mesh\ak47\ak47_45rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\47_rec_co.tga", "hlc_wp_ak\tex\upper_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\bl_rpk\mag_co.tga" };
    };
    class hlc_rifle_ak47_75rnd : hlc_rifle_ak47
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK47";
        model = "\hlc_wp_ak\mesh\ak47\ak47_75rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\47_rec_co.tga", "hlc_wp_ak\tex\upper_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_akm : hlc_rifle_ak47 {
        dlc = "Niarms_AK";
        author = "MrRifleman, Bull5hit, Toadie";
        scope = public;
        AB_barrelTwist=7.87;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        displayName = "Izhmash AKM [16.3 inch]";
        descriptionShort = "Assault rifle<br/>Caliber: 7.62mm (DOI: 1959)";
        model = "\hlc_wp_ak\mesh\akm\akm.p3d";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        picture = "\hlc_wp_ak\tex\ui\gear_akm_x_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_akm\akm_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga"};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68.3;
        };
        inertia = 0.31;
        __DEXTERITY(3.1,0);
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_akm_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akm_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akm_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akm_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akm_75rnd";
            default = "hlc_rifle_akm";
        };
    }; 
    class hlc_rifle_akm_45rnd : hlc_rifle_akm
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM";
        model = "\hlc_wp_ak\mesh\akm\akm_45rnd.p3d";
        
    };
    class hlc_rifle_akm_75rnd : hlc_rifle_akm
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM";
        model = "\hlc_wp_ak\mesh\akm\akm_75rnd.p3d";
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_akmgl : hlc_rifle_akm {
        dlc = "Niarms_AK";

        author = "MrRifleman, Bull5hit, Bohemia Interactive, Toadie";
        displayName = "Izhmash AKM [16.3 inch] (GL)";
        descriptionShort = "Assault rifle,Grenade Launcher<br/>Caliber: 7.62mm";
        model = "\hlc_wp_ak\mesh\akmgl\akm.p3d";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hiddenSelections[] = { "Main", "Dovetail", "Mount","GP25" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_akm\akm_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga","hlc_wp_ak\tex\bi_gp25\gp25_co.tga" };
        handanim[] = {"OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp.rtm"};

        muzzles[] = {"this", "hlc_GP25"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 101.4;
        };
        inertia = 0.66;
        __DEXTERITY(3.1 + 1.5,0);
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_akmgl_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akmgl_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akmgl_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akmgl_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akmgl_75rnd";
            default = "hlc_rifle_akmgl";
        };
    };
    class hlc_rifle_akmgl_45rnd : hlc_rifle_akmgl
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM (GL)";
        model = "\hlc_wp_ak\mesh\akmgl\akm_45rnd.p3d";

    };
    class hlc_rifle_akmgl_75rnd : hlc_rifle_akmgl
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM (GL)";
        model = "\hlc_wp_ak\mesh\akmgl\akm_75rnd.p3d";
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_rpk : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Booly, Toadie";
        scope =public;
        AB_barrelTwist=9.45;
        AB_barrelLength=23.2;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 589.28; 
        agm_bipod=1;
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        cse_bipod = 1;
        bg_bipod = 1; 
        displayName = "Izhmash RPK [23.2 inch]";
        descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
        initspeed = -1.041958;
        magazines[] = { __762x39_MAGS, __762x39_BI_MAGS };
        model = "\hlc_wp_ak\mesh\rpk\rpk_30rnd.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount", "magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\rifleman_akm\akm_co.tga" };
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        reloadAction = "HLC_GestureReloadRPK";
        cursor = "mg";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = {  "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        cameraDir = "eye_look";

        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\rpk_reload",0.9,1,30};
        aidispersioncoefx = 10;
        aidispersioncoefy = 12;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.8;
            class CowsSlot : asdg_OpticSideMount {};
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
        };

        modes[] = { "FullAuto", "Single", "50m", "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar", "AI_far_optic1", "AI_toofar_optic1", "AI_far_optic2", "AI_toofar_optic2"};
        class FullAuto: FullAuto {
            __ROF(600);
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_SoundSet", "Nia_rpk_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
            };
            __AI_ROF_MG_FULLAUTO;
        };
        class Single : Single {
            __ROF(600);
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_SoundSet", "Nia_rpk_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
            };
            __AI_ROF_MG_SINGLE;
        };
        class 50m : FullAuto{ 
            __AI_ROF_MG_FULLAUTO; 
                }; 
        class AI_long : 50m { 
            showToPlayer = 0; 
            aiBurstTerminable = 1; 
            __AI_ROF_MG_LONG_BURST; 
                }; 
        class AI_close: AI_long { 
            __AI_ROF_MG_CLOSE_BURST; 
                }; 
        class AI_short: AI_close { 
            __AI_ROF_MG_SHORT_BURST; 
                }; 
        class AI_medium: AI_close { 
            __AI_ROF_MG_MEDIUM_BURST; 
                }; 
        class AI_far: AI_close { 
            __AI_ROF_MG_FAR_BURST; 
                }; 
        class AI_toofar: AI_far { 
            __AI_ROF_MG_VERYFAR_BURST; 
                }; 
        class AI_far_optic1: AI_far { 
            requiredOpticType = 1; 
            __AI_ROF_MG_FAR_SCOPE_BURST; 
                }; 
        class AI_toofar_optic1: AI_far_optic1 { 
            __AI_ROF_MG_VERYFAR_SCOPE_BURST; 
                }; 
        class AI_far_optic2: AI_far_optic1 { 
            requiredOpticType = 2; 
                }; 
        class AI_toofar_optic2: AI_toofar_optic1 { 
            requiredOpticType = 2; 
                }; 
        };
        inertia = 0.68;
        __DEXTERITY(4.8,0);
        class __MAGSWITCHCLASS 
        {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_rpk_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_rpk_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_rpk_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_rpk_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_rpk_75rnd";
            default = "hlc_rifle_rpk";
        };
    };
    class hlc_rifle_rpk_45rnd : hlc_rifle_rpk
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash RPK";
        model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\bl_rpk\mag_co.tga" };
    };
    class hlc_rifle_rpk_75rnd : hlc_rifle_rpk
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        model = "\hlc_wp_ak\mesh\rpk\rpk_75rnd.p3d";
        displayName = "Izhmash RPK";
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
    };

    class hlc_rifle_rpk74n : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Booly, Toadie";
        scope = public;
        AB_barrelTwist = 9.45;
        AB_barrelLength = 23.2;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 589.28;
        agm_bipod = 1;
        cse_bipod = 1;
        bg_bipod = 1;
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        displayName = "Izhmash RPK74 [23.2 inch]";
        descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        reloadAction = "HLC_GestureReloadRPK";
        aidispersioncoefx = 10;
        aidispersioncoefy = 12;
        discreteDistance[] = {  100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = {  "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk74\rpk74_reload", 0.9, 1, 30 };
        model = "\hlc_wp_ak\mesh\rpk\rpk74_30rnd.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk74_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount", "magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\rifleman_aks\aks_co.tga" };
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        modes[] = { "FullAuto", "Single", "50m", "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar", "AI_far_optic1", "AI_toofar_optic1", "AI_far_optic2", "AI_toofar_optic2" };
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 101.4;
            descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
            modes[] = { "FullAuto", "Single", "50m", "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar", "AI_far_optic1", "AI_toofar_optic1", "AI_far_optic2", "AI_toofar_optic2" };
            inertia = 0.67;
            __DEXTERITY(4.7,0);
        };    
        class FullAuto : FullAuto {
            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";
                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
            };
            __AI_ROF_MG_FULLAUTO;
        };
        class Single : Single {
            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
            };
            __AI_ROF_MG_SINGLE;
        };
        class 50m : FullAuto{
            __AI_ROF_MG_FULLAUTO;
        };
        class AI_long : 50m {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            __AI_ROF_MG_LONG_BURST;
        };
        class AI_close : AI_long {
            __AI_ROF_MG_CLOSE_BURST;
        };
        class AI_short : AI_close {
            __AI_ROF_MG_SHORT_BURST;
        };
        class AI_medium : AI_close {
            __AI_ROF_MG_MEDIUM_BURST;
        };
        class AI_far : AI_close {
            __AI_ROF_MG_FAR_BURST;
        };
        class AI_toofar : AI_far {
            __AI_ROF_MG_VERYFAR_BURST;
        };
        class AI_far_optic1 : AI_far {
            requiredOpticType = 1;
            __AI_ROF_MG_FAR_SCOPE_BURST;
        };
        class AI_toofar_optic1 : AI_far_optic1 {
            __AI_ROF_MG_VERYFAR_SCOPE_BURST;
        };
        class AI_far_optic2 : AI_far_optic1 {
            requiredOpticType = 2;
        };
        class AI_toofar_optic2 : AI_toofar_optic1 {
            requiredOpticType = 2;
        };

        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_rpk74n_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_60rnd";
            default = "hlc_rifle_rpk74n";
        };
    };
    class hlc_rifle_rpk74n_45rnd : hlc_rifle_rpk74n
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash RPK74";
        model = "\hlc_wp_ak\mesh\rpk\rpk74.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\adept\wpn_ak_10_co.tga" };
    };
    class hlc_rifle_rpk74n_60rnd : hlc_rifle_rpk74n
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash RPK74";
        model = "\hlc_wp_ak\mesh\rpk\rpk74_60rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bl_rpk\rpk_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\rifleman_akmags\texture_co.tga" };
    };

    class hlc_rifle_aks74_GL : hlc_rifle_aks74 {
        dlc = "Niarms_AK";

        author = "MrRifleman, Tigg, Toadie";
        bg_bipod = 0; 
        displayName = "Izhmash AKS74 [16.3 inch] (GL)";
        model = "\hlc_wp_ak\mesh\aks74gl\aks74gl.p3d";
        handanim[] = {"OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm"};
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        picture = "\hlc_wp_ak\tex\ui\gear_aks74gl_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount", "GP30" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_aks\aks_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\gp30\gp30_co.tga" };
        muzzles[] = {"this", "hlc_GP30"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98.5;
        };
        inertia = 0.62;
        __DEXTERITY(2.9 + 1.3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_GL_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_GL_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_GL_60rnd";
            default = "hlc_rifle_aks74_GL";
        };
    };
    class hlc_rifle_aks74_GL_45rnd : hlc_rifle_aks74_GL
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74(GL)";
        model = "\hlc_wp_ak\mesh\aks74\aks74_45rnd.p3d";

    };
    class hlc_rifle_aks74_GL_60rnd : hlc_rifle_aks74_GL
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74(GL)";
        model = "\hlc_wp_ak\mesh\aks74\aks74_60rnd.p3d";

    };

    class hlc_rifle_aek971 : hlc_rifle_ak74 {
        dlc = "Niarms_AK";
        author = "Arby26, Millenia, Toadie";
        scope = public;
        AB_barrelTwist = 7.87;                            // no idea how to convert the twist of the barrel
        AB_barrelLength = 16.5;
        ACE_barrelTwist = 241.3;
        ACE_barrelLength = 420;
        bg_bipod = 0; 
        displayName = "ZID AEK971S [16.3 inch]";
        descriptionShort = "5.45x39 Assault Rifle (DOI: 1978)";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded

        model = "\hlc_wp_ak\mesh\aek971\aek971clean.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aek_x_ca";
        hiddenSelections[] = { "Main", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\mill_aek\bull5hit\aek971_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        reloadMagazineSound[] = { "hlc_wp_ak\snd\soundshaders\aek\aek_reload", 1, 1, 20 };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye1", "eye", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        discretedistanceinitindex = 0;

        reloadAction = "HLC_GestureReloadAK545OneHand";
        modes[] = {"FullAuto","Burst","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72.7;
        };
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.0681;
            dispersion = 0.0005563233;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
            };

            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        };
        class Burst : Mode_Burst {
            reloadTime = 0.0681;
            dispersion = 0.0005563233;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
            };

            __AI_ROF_RIFLE_SMALL_SHORT_BURST;
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.0681;
            dispersion = 0.0005563233;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
            };

            __AI_ROF_RIFLE_SMALL_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
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
        class Library {
            libTextDesc = "ZID AEK971S";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
        inertia = 0.33;
        __DEXTERITY(3.3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_60rnd";
            default = "hlc_rifle_aek971";
        };
    };
    class hlc_rifle_aek971_45rnd : hlc_rifle_aek971
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S";
        model = "\hlc_wp_ak\mesh\aek971\aek971clean_45rnd.p3d";

    };
    class hlc_rifle_aek971_60rnd : hlc_rifle_aek971
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S";
        model = "\hlc_wp_ak\mesh\aek971\aek971clean_60rnd.p3d";

    };

    class hlc_rifle_aek971worn : hlc_rifle_aek971 {
        displayName = "ZID AEK971S(Worn)";
        model = "\hlc_wp_ak\mesh\aek971\aek971.p3d";
        hiddenSelections[] = { "Main", "Mount" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\mill_aek\aek971_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971worn_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971worn_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971worn_60rnd";
            default = "hlc_rifle_aek971worn";
        };
    };
    class hlc_rifle_aek971worn_45rnd : hlc_rifle_aek971worn
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S";
        model = "\hlc_wp_ak\mesh\aek971\aek971_45rnd.p3d";

    };
    class hlc_rifle_aek971worn_60rnd : hlc_rifle_aek971worn
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S";
        model = "\hlc_wp_ak\mesh\aek971\aek971_60rnd.p3d";

    };

    class hlc_rifle_saiga12k : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        ACE_barrelTwist = 0.0;
        ACE_twistDirection = 0;
        ACE_barrelLength = 429.26;

        scope =public;
        bg_bipod = 1; 
        displayName = "Izhmash Saiga12K [16.9 inch]";
        descriptionShort = "Semi-automatic Shotgun<br/>Caliber:12 Gauge";
        reloadAction = "HLC_GestureReloadRPK";
        magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12"};
        model = "\hlc_wp_ak\mesh\saiga\saiga12k.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_saiga_ca";
        hiddenSelections[] = { "Main" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\bi_s12k\saiga12k_co.tga" };

        discretedistance[] = {100,200,300,400};
        discretedistanceinitindex = 0;
        recoil = "recoil_m320";

        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\saiga\saiga_reload",0.9,1,30};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
            dispersion = 0.001666789;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_saiga_Shot_SoundSet", "Nia_saiga_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
            };

            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 60;
            midRangeProbab = 0.2;
            maxRange = 140;
            maxRangeProbab = 0.02;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70;
            class MuzzleSlot {};
            class CowsSlot : asdg_OpticSideMount {};
        };
        inertia = 0.35;
        __DEXTERITY(3.5,0);
        class __MAGSWITCHCLASS {
            default = "hlc_rifle_saiga12k";
        };
    };



//V0.9
//NEW SHIT
//*HORNS*
    class hlc_rifle_RK62 : hlc_ak_base {

        dlc = "Niarms_AK";
        author = "Nix";
        scope = public;
        displayName = "Valmet Rk.62";
        descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
        magazines[] = { __762x39_MAGS, __762x39_BI_MAGS };
        model = "hlc_wp_ak\mesh\rk62\rk62.p3d";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        picture = "\hlc_wp_ak\tex\ui\gear_rk62_ca";
        hiddenSelections[] = { "Main" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\nix_rk62\rk62_co.paa" };

        drysound[] = { "hlc_wp_ak\snd\empty_assaultrifles", 1.5, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rk62\rk62_reload", 1, 1, 20 };
        reloadAction = "HLC_GestureReloadAK";
        recoil = "recoil_mx";

        inertia = 0.35;
        __DEXTERITY(3.5,0);

        discreteDistance[] = { 150, 100, 200, 300, 400, 500, 600};
        discreteDistanceCameraPoint[] = { "eye_150", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600" };
        cameraDir = "eye_look";
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70;
            class MuzzleSlot : asdg_MuzzleSlot_762R {};
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rk62_Shot_SoundSet", "Nia_rk62_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
            };

            reloadTime = 0.085;
            dispersion = 0.000378155;
            __AI_ROF_AK_SINGLE;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rk62_Shot_SoundSet", "Nia_rk62_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
            };

            reloadTime = 0.085;
            dispersion = 0.00049451;
            __AI_ROF_AK_FULLAUTO;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 7;
            __AI_ROF_AK_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_AK_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_AK_HSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_RK62_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_RK62_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_RK62_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_RK62_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_RK62_75rnd";
            default = "hlc_rifle_RK62";
        };
    };
    class hlc_rifle_RK62_45rnd : hlc_rifle_RK62
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Valmet Rk.62";
        model = "hlc_wp_ak\mesh\rk62\rk62_45rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\nix_rk62\rk62_co.paa" };
    };
    class hlc_rifle_RK62_75rnd : hlc_rifle_RK62
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Valmet Rk.62";
        model = "hlc_wp_ak\mesh\rk62\rk62_75rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\nix_rk62\rk62_co.paa" };
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_slr107u : hlc_ak_base {
        dlc = "Niarms_AK";
        author = "Toadie";
        scope = public;
        AB_barrelTwist = 7.87;
        AB_barrelLength = 8.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 210.82;
        bg_bipod = 0;
        displayName = "Arsenal Inc. SLR107U [8.3 inch]";
        descriptionShort = "7.62x39 Carbine";
        initspeed = -0.889510;                        // brake down normal 715 m/s to 636 m/s
        deployedPivot = "deploypivot";               // what point should be used to be on surface while unfolded
        magazines[] = { __762x39_MAGS, __762x39_BI_MAGS };

        model = "\hlc_wp_ak\mesh\slr107u\slr.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_slr107u_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount", "magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\toadie_slr107u\akm_762_mag_co.tga" };

        recoil = "recoil_mx";
        discretedistance[] = { 350, 500 };
        discretedistanceinitindex = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };

        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Single {
            reloadTime = 0.097;
            dispersion = 0.000972294;
            maxRange = 400;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            reloadTime = 0.097;
            dispersion = 0.000972294;
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 56;
            class CowsSlot : asdg_OpticSideMount {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762R {};
        };
        inertia = 0.28;
        __DEXTERITY(2.8,0);
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\slr107u\slr107U_reload_empty", 0.8, 1, 20 };
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_slr107u_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_slr107u_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_slr107u_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_75rnd";
            default = "hlc_rifle_slr107u";
        };
    };
    class hlc_rifle_slr107u_45rnd : hlc_rifle_slr107u
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Arsenal Inc. SLR107U";
        model = "\hlc_wp_ak\mesh\slr107u\slr_45rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\bl_rpk\mag_co.tga" };
    };
    class hlc_rifle_slr107u_75rnd : hlc_rifle_slr107u
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Arsenal Inc. SLR107U";
        model = "\hlc_wp_ak\mesh\slr107u\slr_75rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_slr107u_MTK : hlc_rifle_slr107u {
        dlc = "Niarms_AK";
        author = "Toadie,RedRogueXIII";
        displayName = "Arsenal Inc. SLR107U(MTK)";
        model = "\hlc_wp_ak\mesh\slr107u\slr_MTK.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_slr107umtk_ca";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.3;
        __DEXTERITY(2.8 + 0.2,0);
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_slr107u_MTK_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_slr107u_MTK_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_slr107u_MTK_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_MTK_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_MTK_75rnd";
            default = "hlc_rifle_slr107u_MTK";
        };
    };
    class hlc_rifle_slr107u_MTK_45rnd : hlc_rifle_slr107u_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Arsenal Inc. SLR107U";
        model = "\hlc_wp_ak\mesh\slr107u\slr_MTK_45rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\bl_rpk\mag_co.tga" };
    };
    class hlc_rifle_slr107u_MTK_75rnd : hlc_rifle_slr107u_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Arsenal Inc. SLR107U";
        model = "\hlc_wp_ak\mesh\slr107u\slr_MTK_75rnd.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga", "hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.tga" };
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_ak74_MTK : hlc_rifle_ak74 {
        dlc = "Niarms_AK";
        author = "MrRifleman, Toadie";
        displayName = "Izhmash AK74(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74mtk_ca";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 64;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.32;
        __DEXTERITY(3 + 0.2,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_MTK_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_MTK_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_MTK_60rnd";
            default = "hlc_rifle_ak74_MTK";
        };
    };
    class hlc_rifle_ak74_MTK_45rnd : hlc_rifle_ak74_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk_45rnd.p3d";
    };
    class hlc_rifle_ak74_MTK_60rnd : hlc_rifle_ak74_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk_60rnd.p3d";
    };

    class hlc_rifle_ak74m : hlc_rifle_ak74 {
        dlc = "Niarms_AK";

        author = "MrRifleman, Toadie";
        bg_bipod = 0;
        displayName = "Izhmash AK74M [16.3 inch]";
        descriptionShort = "5.45x39 Assault Rifle (DOI: 1991)";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        reloadAction = "HLC_GestureReloadAK545OneHand";
        scope = public;
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74m_ca";
        hiddenSelections[] = { "Main", "Dovetail", "Mount","Foregrip","GP30" };
        hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\rifleman_ak74\body_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.tga","hlc_wp_ak\tex\tigg_ak74m\ak74m_co.tga","hlc_wp_ak\tex\gp30\gp30_co.tga" };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 74.9;
        };
        inertia = 0.34;
        __DEXTERITY(3.4,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_60rnd";
            default = "hlc_rifle_ak74m";
        };
    };
    class hlc_rifle_ak74m_45rnd : hlc_rifle_ak74m
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_45rnd.p3d";
    };
    class hlc_rifle_ak74m_60rnd : hlc_rifle_ak74m
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_60rnd.p3d";
    };

    class hlc_rifle_ak74m_gl : hlc_rifle_ak74m {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        author = "MrRifleman, Tigg, Toadie";
        bg_bipod = 0;
        displayName = "Izhmash AK74M [16.3 inch] (GL)";
        descriptionShort = "5.45x39 Assault Rifle (DOI: 1991)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm" };

        picture = "\hlc_wp_ak\tex\ui\gear_ak74mgl_ca";
        muzzles[] = { "this", "hlc_GP30" };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 108;
        };
        inertia = 0.67;
        __DEXTERITY(3.4 + 1.3,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_gl_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_gl_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_gl_60rnd";
            default = "hlc_rifle_ak74m_gl";
        };
    };
    class hlc_rifle_ak74m_gl_45rnd : hlc_rifle_ak74m_gl
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M(GL)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl_45rnd.p3d";
    };
    class hlc_rifle_ak74m_gl_60rnd : hlc_rifle_ak74m_gl
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M(GL)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl_60rnd.p3d";
    };

    class hlc_rifle_ak74m_MTK : hlc_rifle_ak74m {
        dlc = "Niarms_AK";
        author = "MrRifleman,Tigg, Toadie";
        displayName = "Izhmash AK74M(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74mmtk_ca";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.36;
        __DEXTERITY(3.4 + 0.2,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_60rnd";
            default = "hlc_rifle_ak74m_MTK";
        };
    };
    class hlc_rifle_ak74m_MTK_45rnd : hlc_rifle_ak74m_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk_45rnd.p3d";
    };
    class hlc_rifle_ak74m_MTK_60rnd : hlc_rifle_ak74m_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AK74M(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk_60rnd.p3d";
    };

    class hlc_rifle_aek971_mtk : hlc_rifle_aek971 {
        dlc = "Niarms_AK";
        author = "Arby26, Millenia, Toadie";
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aekmtk_ca";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.35;
        __DEXTERITY(3.3 + 0.2,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971_mtk_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971_mtk_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_mtk_60rnd";
            default = "hlc_rifle_aek971_mtk";
        };
    };
    class hlc_rifle_aek971_mtk_45rnd : hlc_rifle_aek971_mtk
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_45rnd.p3d";
    };
    class hlc_rifle_aek971_mtk_60rnd : hlc_rifle_aek971_mtk
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_60rnd.p3d";
    };

    class hlc_rifle_aks74u_MTK : hlc_rifle_aks74u {
        dlc = "Niarms_AK";
        author = "Millenia, Toadie";
        displayName = "Izhmash AKS74U(MTK)";
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74umtk_ca";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 56;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.28;
        __DEXTERITY(2.6 + 0.2,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74u_MTK_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74u_MTK_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_MTK_45rnd";
            default = "hlc_rifle_aks74u_MTK";
        };
    };
    class hlc_rifle_aks74u_MTK_45rnd : hlc_rifle_aks74u_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_45rnd.p3d";
    };
    class hlc_rifle_aks74u_MTK_60rnd : hlc_rifle_aks74u_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_60rnd.p3d";
    };

    class hlc_rifle_akm_MTK : hlc_rifle_akm {
        dlc = "Niarms_AK";
        author = "MrRifleman, Bull5hit, Toadie";
        model = "\hlc_wp_ak\mesh\akm\akm_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_akmmtk_ca";
        displayName = "Izhmash AKM(MTK)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.33;
        __DEXTERITY(3.1 + 0.2,0);
        class __MAGSWITCHCLASS {
            HLC_45rnd_762x39_T_RPK = "hlc_rifle_akm_MTK_45rnd";
            hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akm_MTK_45rnd";
            hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akm_MTK_75rnd";
            hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akm_MTK_45rnd";
            hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akm_MTK_75rnd";
            default = "hlc_rifle_akm_MTK";
        };
    };
    class hlc_rifle_akm_MTK_45rnd : hlc_rifle_akm_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM(MTK)";
        model = "\hlc_wp_ak\mesh\akm\akm_mtk_45rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\47_rec_co.tga", "hlc_wp_ak\tex\upper_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\bl_rpk\mag_co.tga" };
    };
    class hlc_rifle_akm_MTK_75rnd : hlc_rifle_akm_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKM(MTK)";
        model = "\hlc_wp_ak\mesh\akm\akm_mtk_75rnd.p3d";
        //hiddenSelectionsTextures[] = { "hlc_wp_ak\tex\47_rec_co.tga", "hlc_wp_ak\tex\upper_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\rifleman_ak74\mount_co.tga", "hlc_wp_ak\tex\bis_rpk\drum_magazine_co.tga" };
        reloadAction = "HLC_GestureReloadAK762Drum";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload", 0.9, 1, 30 };
    };

    class hlc_rifle_aks74_MTK : hlc_rifle_aks74 {
        dlc = "Niarms_AK";
        author = "MrRifleman, Toadie";
        model = "\hlc_wp_ak\mesh\aks74\aks74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74mtk_ca";
        displayName = "Izhmash AKS74(MTK)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 62;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        inertia = 0.31;
        __DEXTERITY(2.9 + 0.2,0);
        class __MAGSWITCHCLASS {
            hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_MTK_45rnd";
            hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_MTK_45rnd";
            hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_MTK_60rnd";
            default = "hlc_rifle_aks74_MTK";
        };
    };
    class hlc_rifle_aks74_MTK_45rnd : hlc_rifle_aks74_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74(MTK)";
        model = "\hlc_wp_ak\mesh\aks74\aks74_mtk_45rnd.p3d";
    };
    class hlc_rifle_aks74_MTK_60rnd : hlc_rifle_aks74_MTK
    {
        scopeArsenal = 0;
        dlc = "Niarms_AK";
        displayName = "Izhmash AKS74(MTK)";
        model = "\hlc_wp_ak\mesh\aks74\aks74_mtk_60rnd.p3d";
    };
};
