#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_AUG {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_AUG_ammobox", "HLC_AUG_Weaponbox1", 
            "Weapon_hlc_rifle_aug", "Weapon_hlc_rifle_auga1_t", "Weapon_hlc_rifle_auga1_b", 
            "Weapon_hlc_rifle_auga1carb", "Weapon_hlc_rifle_auga1carb_t", "Weapon_hlc_rifle_auga1carb_b", 
            "Weapon_hlc_rifle_aughbar", "Weapon_hlc_rifle_aughbar_t", "Weapon_hlc_rifle_aughbar_b",
            "Weapon_hlc_rifle_augpara", "Weapon_hlc_rifle_augpara_t", "Weapon_hlc_rifle_augpara_b",
            "Weapon_hlc_rifle_auga2", "Weapon_hlc_rifle_auga2_t", "Weapon_hlc_rifle_auga2_b",
            "Weapon_hlc_rifle_auga2carb", "Weapon_hlc_rifle_auga2carb_t", "Weapon_hlc_rifle_auga2carb_b",
            "Weapon_hlc_rifle_auga2lsw", "Weapon_hlc_rifle_auga2lsw_t", "Weapon_hlc_rifle_auga2lsw_b",
            "Weapon_hlc_rifle_auga2para", "Weapon_hlc_rifle_auga2para_t", "Weapon_hlc_rifle_auga2para_b",
            "Weapon_hlc_rifle_augsr", "Weapon_hlc_rifle_augsr_t", "Weapon_hlc_rifle_augsr_b",
            "Weapon_hlc_rifle_augsrcarb", "Weapon_hlc_rifle_augsrcarb_t", "Weapon_hlc_rifle_augsrcarb_b",
            "Weapon_hlc_rifle_augsrhbar", "Weapon_hlc_rifle_augsrhbar_t", "Weapon_hlc_rifle_augsrhbar_b",
            "Weapon_hlc_rifle_auga3", "Weapon_hlc_rifle_auga3_bl", "Weapon_hlc_rifle_auga3_b",
            "Weapon_hlc_rifle_auga3_GL", "Weapon_hlc_rifle_auga3_GL_bl", "Weapon_hlc_rifle_auga3_GL_b"
        };
        weapons[] = { "hlc_barrel_standard", "hlc_barrel_carbine", "hlc_barrel_hbar", "hlc_barrel_9mm",
            "hlc_rifle_aug", "hlc_rifle_auga1_t", "hlc_rifle_auga1_B",
            "hlc_rifle_auga1carb", "hlc_rifle_auga1carb_t", "hlc_rifle_auga1carb_b", 
            "hlc_rifle_aughbar", "hlc_rifle_aughbar_b", "hlc_rifle_aughbar_t",
            "hlc_rifle_augpara", "hlc_rifle_augpara_b", "hlc_rifle_augpara_t",
            "hlc_rifle_auga2", "hlc_rifle_auga2_b", "hlc_rifle_auga2_t",
            "hlc_rifle_augsr", "hlc_rifle_augsr_b", "hlc_rifle_augsr_t",
            "hlc_rifle_auga2para", "hlc_rifle_auga2para_b", "hlc_rifle_auga2para_t", 
            "hlc_rifle_auga2carb", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2carb_b", 
            "hlc_rifle_augsrcarb", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrcarb_b", 
            "hlc_rifle_auga2lsw", "hlc_rifle_auga2lsw_t", "hlc_rifle_auga2lsw_b", 
            "hlc_rifle_augsrhbar", "hlc_rifle_augsrhbar_b", "hlc_rifle_augsrhbar_t", 
            "hlc_rifle_auga3", "hlc_rifle_auga3_bl", "hlc_rifle_auga3_b",
            "hlc_rifle_auga3_GL", "hlc_rifle_auga3_GL_BL", "hlc_rifle_auga3_GL_B"
        };
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG","hlc_25Rnd_9x19mm_subsonic_AUG" };
        author="toadie";
        version = "1.55";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgSounds {
    class hlc_barrelswapaug {
        name = "hlc_barrelswapaug";
        Sound[] = { "\hlc_wp_aug\snd\aug_swapbarrel.wss", 1, 1, 15 };
        titles[] = {};
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_AUG = 1;
    };
};
class niarms_MuzzleSlot_augpara: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_a6aug = 1;
    };
};

class CfgFunctions {
    class HLC {
        class common {
            class barrel_init {
                file = "\hlc_wp_aug\pre_init.sqf";
                preInit = 1;
            };
            class getmagazinesprimary { file = "\hlc_wp_aug\scripts\fnc_getmagazinesprimary.sqf"; };
            class barrelswitch { file = "\hlc_wp_aug\scripts\fnc_barrelswitch.sqf"; };
        };
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_AUG : Mod_Base {
        name = "NIArsenal: AR15 Rifles";
        picture = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
    };
};

class CfgVehicles {
    class Man;
	class CAManBase : Man {/*
        class AGM_SelfActions {
            class HLC_BarrelSwap {
                displayName = "Change AUG Barrel";
                condition = "((currentweapon _player) == (primaryweapon _player)) && (primaryweapon _player in hlc_augs_weapons)";
                statement = "";
                showDisabled = 0;
                enableInside = 0;
                priority = -5;
                icon = "\hlc_wp_aug\tex\ui\AUGswap_ca.paa";
                subMenu[] = { "HLC_BarrelSwap", 1 };

                class hlc_switch_barrel_standard {
                    displayName = "Change Barrel (Standard)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 1;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items _player)";
                    statement = "[_player,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_carbine {
                    displayName = "Change Barrel (Carbine)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 2;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items _player)";
                    statement = "[_player,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_hbar {
                    displayName = "Change Barrel (HBAR)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 3;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items _player)";
                    statement = "[_player,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_9mm {
                    displayName = "Change Barrel (9MM PARA)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 4;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items _player)";
                    statement = "[_player,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
                };
            };
        };*/
        class UserActions {
            class hlc_switch_barrel_standard {
                displayName = "Change Barrel (Standard)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items player)}";
                statement = "[this,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_carbine {
                displayName = "Change Barrel (Carbine)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items player)}";
                statement = "[this,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_hbar {
                displayName = "Change Barrel (HBAR)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items player)}";
                statement = "[this,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_9mm {
                displayName = "Change Barrel (9MM PARA)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items player)}";
                statement = "[this,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
            };
        };
    };
    class NATO_Box_Base;
    class HLC_AUG_ammobox : NATO_Box_Base {
        dlc = "Niarms_AUG";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AUG Ammo";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_30Rnd_556x45_B_AUG, 20);
            __M_MAG(hlc_30Rnd_556x45_SOST_AUG, 20);
            __M_MAG(hlc_30Rnd_556x45_SPR_AUG, 20);
            __M_MAG(hlc_40Rnd_556x45_B_AUG, 20);
            __M_MAG(hlc_40Rnd_556x45_SOST_AUG, 20);
            __M_MAG(hlc_40Rnd_556x45_SPR_AUG, 20);
            __M_MAG(hlc_25Rnd_9x19mm_M882_AUG, 20);
            __M_MAG(hlc_25Rnd_9x19mm_JHP_AUG, 20);
            __M_MAG(hlc_25Rnd_9x19mm_subsonic_AUG, 20);
        };/*
        class TransportWeapons {
            class _xhlc_rifle_falosw {
                weapon = "hlc_rifle_falosw";
                count = 20;
            };
            class _xhlc_rifle_osw_GL {
                weapon = "hlc_rifle_osw_GL";
                count = 20;
            };
            class _xhhlc_rifle_L1A1 {
                weapon = "hlc_rifle_L1A1slr";
                count = 20;
            };
            class _xhlc_rifle_SLR {
                weapon = "hlc_rifle_SLR";
                count = 20;
            };
            class _xhlc_rifle_STG58F {
                weapon = "hlc_rifle_STG58F";
                count = 20;
            };
            class _xhlc_rifle_FAL5061 {
                weapon = "hlc_rifle_FAL5061";
                count = 20;
            };
            class _xhlc_rifle_c1A1 {
                weapon = "hlc_rifle_c1A1";
                count = 20;
            };
            class _xhlc_rifle_LAR {
                weapon = "hlc_rifle_LAR";
                count = 20;
            };
            class _xhlc_rifle_SLRchopmod {
                weapon = "hlc_rifle_SLRchopmod";
                count = 20;
            };
        };*/
        class TransportItems {
            __M_ITM(hlc_muzzle_snds_a6AUG, 10);
            __M_ITM(hlc_muzzle_snds_AUG, 10);
            __M_ITM(hlc_barrel_standard, 5);
            __M_ITM(hlc_barrel_carbine, 5);
            __M_ITM(hlc_barrel_hbar, 5);
            __M_ITM(hlc_barrel_9mm, 5);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_ACO_grn, 10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_rifle_aug, hlc_30Rnd_556x45_B_AUG, AUGA1(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga1_t, hlc_30Rnd_556x45_B_AUG, AUGA1(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga1_b, hlc_30Rnd_556x45_B_AUG, AUGA1(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga1carb, hlc_30Rnd_556x45_B_AUG, AUGA1 Carbine(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga1carb_b, hlc_30Rnd_556x45_B_AUG, AUGA1 Carbine(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga1carb_t, hlc_30Rnd_556x45_B_AUG, AUGA1 Carbine(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_aughbar, hlc_40Rnd_556x45_B_AUG, AUGA1 HBAR(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aughbar_t, hlc_40Rnd_556x45_B_AUG, AUGA1 HBAR(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_aughbar_b, hlc_40Rnd_556x45_B_AUG, AUGA1 HBAR(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_augpara, hlc_25Rnd_9x19mm_M882_AUG, AUGA1 PARA(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augpara_t, hlc_25Rnd_9x19mm_M882_AUG, AUGA1 PARA(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augpara_b, hlc_25Rnd_9x19mm_M882_AUG, AUGA1 PARA(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga2, hlc_30Rnd_556x45_B_AUG, AUGA2(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2_t, hlc_30Rnd_556x45_B_AUG, AUGA2(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2_b, hlc_30Rnd_556x45_B_AUG, AUGA2(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga2carb, hlc_30Rnd_556x45_B_AUG, AUGA2 Carbine(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2carb_b, hlc_30Rnd_556x45_B_AUG, AUGA2 Carbine(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2carb_t, hlc_30Rnd_556x45_B_AUG, AUGA2 Carbine(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga2lsw, hlc_40Rnd_556x45_B_AUG, AUGA2 HBAR(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2lsw_t, hlc_40Rnd_556x45_B_AUG, AUGA2 HBAR(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2lsw_b, hlc_40Rnd_556x45_B_AUG, AUGA2 HBAR(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga2para, hlc_25Rnd_9x19mm_M882_AUG, AUGA2 PARA(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2para_t, hlc_25Rnd_9x19mm_M882_AUG, AUGA2 PARA(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga2para_b, hlc_25Rnd_9x19mm_M882_AUG, AUGA2 PARA(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_augsr, hlc_30Rnd_556x45_B_AUG, AUG-SR(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsr_t, hlc_30Rnd_556x45_B_AUG, AUG-SR(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsr_b, hlc_30Rnd_556x45_B_AUG, AUGA2(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_augsrcarb, hlc_30Rnd_556x45_B_AUG, AUG-SR Carbine(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsrcarb_b, hlc_30Rnd_556x45_B_AUG, AUG-SR Carbine(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsrcarb_t, hlc_30Rnd_556x45_B_AUG, AUG-SR Carbine(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_augsrhbar, hlc_40Rnd_556x45_B_AUG, AUG-SR HBAR(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsrhbar_t, hlc_40Rnd_556x45_B_AUG, AUG-SR HBAR(Tan), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_augsrhbar_b, hlc_40Rnd_556x45_B_AUG, AUG-SR HBAR(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga3, hlc_30Rnd_556x45_B_AUG, AUGA3(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga3_bl, hlc_30Rnd_556x45_B_AUG, AUGA3(Blue), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga3_b, hlc_30Rnd_556x45_B_AUG, AUGA3(Black), Niarms_AUG, Toadie,AssaultRifles);

    __WEAPONHOLDER(hlc_rifle_auga3_GL, hlc_40Rnd_556x45_B_AUG, AUGA3 GL(OD), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga3_GL_bl, hlc_40Rnd_556x45_B_AUG, AUGA3 GL(Blue), Niarms_AUG, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_auga3_GL_b, hlc_40Rnd_556x45_B_AUG, AUGA3 GL(Black), Niarms_AUG, Toadie,AssaultRifles);
    
    class HLC_AUG_Weaponbox1 : NATO_Box_Base {
        dlc = "Niarms_AUG";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AUG Weapon Cache";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_30Rnd_556x45_B_AUG, 30);
            __M_MAG(hlc_30Rnd_556x45_SOST_AUG, 30);
            __M_MAG(hlc_30Rnd_556x45_SPR_AUG, 30);
            __M_MAG(hlc_40Rnd_556x45_B_AUG, 30);
            __M_MAG(hlc_40Rnd_556x45_SOST_AUG, 30);
            __M_MAG(hlc_40Rnd_556x45_SPR_AUG, 30);
            __M_MAG(hlc_25Rnd_9x19mm_M882_AUG, 30);
            __M_MAG(hlc_25Rnd_9x19mm_JHP_AUG, 30);
            __M_MAG(hlc_25Rnd_9x19mm_subsonic_AUG, 30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_aug, 10);
            __M_WEP(hlc_rifle_auga1carb, 10);
            __M_WEP(hlc_rifle_aughbar, 10);
            __M_WEP(hlc_rifle_augpara, 10);

            __M_WEP(hlc_rifle_auga2, 10);
            __M_WEP(hlc_rifle_auga2carb, 10);
            __M_WEP(hlc_rifle_auga2lsw, 10);
            __M_WEP(hlc_rifle_auga2para, 10);

            __M_WEP(hlc_rifle_augsr, 10);
            __M_WEP(hlc_rifle_augsrcarb, 10);
            __M_WEP(hlc_rifle_augsrhbar, 10);

            __M_WEP(hlc_rifle_auga3, 10);
            __M_WEP(hlc_rifle_auga3_GL, 10);

            __M_WEP(hlc_rifle_auga1_t, 10);
            __M_WEP(hlc_rifle_auga1carb_t, 10);
            __M_WEP(hlc_rifle_aughbar_t, 10);
            __M_WEP(hlc_rifle_augpara_t, 10);

            __M_WEP(hlc_rifle_auga2_t, 10);
            __M_WEP(hlc_rifle_auga2carb_t, 10);
            __M_WEP(hlc_rifle_auga2lsw_t, 10);
            __M_WEP(hlc_rifle_auga2para_t, 10);

            __M_WEP(hlc_rifle_augsr_t, 10);
            __M_WEP(hlc_rifle_augsrcarb_t, 10);
            __M_WEP(hlc_rifle_augsrhbar_t, 10);

            __M_WEP(hlc_rifle_auga3_bl, 10);
            __M_WEP(hlc_rifle_auga3_GL_bl, 10);

            __M_WEP(hlc_rifle_auga1_b, 10);
            __M_WEP(hlc_rifle_auga1carb_b, 10);
            __M_WEP(hlc_rifle_aughbar_b, 10);
            __M_WEP(hlc_rifle_augpara_b, 10);

            __M_WEP(hlc_rifle_auga2_b, 10);
            __M_WEP(hlc_rifle_auga2carb_b, 10);
            __M_WEP(hlc_rifle_auga2lsw_b, 10);
            __M_WEP(hlc_rifle_auga2para_b, 10);

            __M_WEP(hlc_rifle_augsr_b, 10);
            __M_WEP(hlc_rifle_augsrcarb_b, 10);
            __M_WEP(hlc_rifle_augsrhbar_b, 10);

            __M_WEP(hlc_rifle_auga3_b, 10);
            __M_WEP(hlc_rifle_auga3_GL_b, 10);
        };
        class TransportItems {
            __M_ITM(hlc_muzzle_snds_a6AUG, 10);
            __M_ITM(hlc_muzzle_snds_AUG, 10);
            __M_ITM(hlc_barrel_standard, 5);
            __M_ITM(hlc_barrel_carbine, 5);
            __M_ITM(hlc_barrel_hbar, 5);
            __M_ITM(hlc_barrel_9mm, 5);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_ACO_grn, 10);
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    //AUGMags
    class hlc_30Rnd_556x45_B_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (EPR) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm EPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SOST_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (SOST) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm SOST";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SPR_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (SPR) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm SPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_T_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "B_556x45_Ball_Tracer_Red";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (Tracer) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = "5.56mm Tracer";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_MDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm EPR IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (EPR,IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 4;
        mass = 7;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_30Rnd_556x45_TDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_40Rnd_556x45_B_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_EPR";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 40<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (EPR) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm EPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_40Rnd_556x45_TDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 8;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_40Rnd_556x45_SOST_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SOST";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm EPR<br />Rounds: 42<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (SOST) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm SOST";
        author = "Spartan0536,Toadie";
    };
    class hlc_40Rnd_556x45_SPR_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SPR";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 40<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (SPR) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm Ball";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_M882_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_M882_SMG";
        count = 25;
        descriptionshort = "Caliber: 9x19mm M882 NATO Ball<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (Ball) 25rnd 9mm";
        initspeed = 400;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_ball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        displaynameshort = "9mm Ball";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_JHP_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_GoldDot";
        count = 25;
        descriptionshort = "Caliber: 9x19mm LE Jacketed Hollowpoint<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (JHP) 25rnd 9mm";
        initspeed = 420;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_JHP_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        displaynameshort = "9mm JHP";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_subsonic_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_Subsonic";
        count = 25;
        descriptionshort = "Caliber: 9x19mm Subsonic Ball<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (Subsonic) 25rnd 9mm";
        initspeed = 340;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_sub_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        author = "Spartan0536,Toadie";
        displaynameshort = "9mm Subsonic";
    };
};

class CfgWeapons {

    class ItemCore;

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_snds_AUG : muzzle_snds_H {
        author = "Bohemia Interactive,Toadie";
        displayName = "KAC M4-2000";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_aug\mesh\m42000\M42000";
    };
    class hlc_muzzle_snds_a6AUG : muzzle_snds_H {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AWC Agenda Six (AUG-Thread)";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_aug\mesh\agendasix\a6";
    };

//barrels

    class hlc_barrel_standard : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (Standard)";
        descriptionshort = "Steyr AUG QD-Barrel- 20in. Rifle";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
        scope = 2;
        class ItemInfo {
            mass = 20;
            type = 201;
        };
    };
    class hlc_barrel_carbine : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (Carbine)";
        descriptionshort = "Steyr AUG QD-Barrel- 16in. Carbine";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
        scope = 2;
        class ItemInfo {
            mass = 17;
            type = 201;
        };
    };
    class hlc_barrel_hbar : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (HBAR)";
        descriptionshort = "Steyr AUG QD-Barrel- 24in. HBAR";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
        scope = 2;
        class ItemInfo  {
            mass = 30;
            type = 201;
        };
    };
    class hlc_barrel_9mm : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        descriptionshort = "AUG 9mm Kit";
        displayName = "Steyr AUG 9mm Caliber Conversion Kit";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_9mm_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\9mm_kit.p3d";
        scope = 2;
        class ItemInfo {
            mass = 20;
            type = 201;
        };
    };

//weapons

    class Rifle;
    class UGL_F;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_aug_base : Rifle_Base_F {
        dlc = "Niarms_AUG";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Toadie";
        scope = private;
        magazineReloadSwitchPhase = 0.5;
        aidispersioncoefx = 3;
        aidispersioncoefy = 5;
        class Library {
            libTextDesc = "Izhmash AK74";
        };
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
            mass = 33;
            class PointerSlot {};
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        magazines[] = { __556AUG_MAGS };
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

        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

        class Single : Mode_SemiAuto {
            __ROF(680);
            dispersion = 0.000308356;

            showToPlayer = 0;
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

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
            };
        };
        class FullAuto : Mode_FullAuto {
            __ROF(680);
            dispersion = 0.000308356;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 15;
            maxRangeProbab = 0.3;

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
            };
        };
        class fullauto_medium : FullAuto {
            burst = 3;
            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.1;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
        drysound[] = { "\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10 };
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };

        class ItemInfo {
            priority = 1;
        };
    };

    class hlc_rifle_aug : hlc_aug_base {
        author = "Sarv, Tenoyl, Toadie";
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
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        inertia = 0.36;
        __DEXTERITY(3.6, 2);
        scope = public;
        displayName = "Steyr AUGA1[OD]";
        model = "hlc_wp_aug\mesh\auga1\auga1.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1OD_x_ca";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        reloadAction = "HLC_GestureReloadAUG";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        optics = 1;
        visionmode[] = { "Normal" };
        HLC_CompatibleBarrels_Classes[]    = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_standard";

        class Library {
            libTextDesc = "Steyr AUG A1";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class CowsSlot {};
        };

        modes[] = { "FullAuto", "Single", "fullauto_medium" }; // fixed optics, other modes don't work since we can't attach other opticsType's

        class Single : Single {
            showToPlayer = 0;
            maxRange = 600;
        };

        class OpticsModes {
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomInit = 0.166;
                opticsZoomMin = 0.166;
                opticsZoomMax = 0.166;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                memorypointcamera = "eye";
                opticsid = 1;
                visionmode[] = {"Normal"};
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye2";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = {"", ""};
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
    };
    class hlc_rifle_auga1_t : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga1TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga1_b : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga1carb : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        AB_barrelTwist = 9;
        AB_barrelLength = 16;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 406.4;
        inertia = 0.33;
        __DEXTERITY(3.3, 2);
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineOD_x_ca";
        displayName = "Steyr AUGA1 Carbine[OD]";
        hiddenSelections[] = { "Camo" };
        reloadAction = "HLC_GestureReloadAUG";
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";

        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
            };
            dispersion = 0.000596155;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
            };
            dispersion = 0.000596155;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.1;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
        };
    };
    class hlc_rifle_auga1carb_B : hlc_rifle_auga1carb {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
        displayName = "Steyr AUGA1 Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_black_co.paa" };
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_auga1carb_t : hlc_rifle_auga1carb {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbinetan_x_ca";
        displayName = "Steyr AUGA1 Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_aughbar : hlc_rifle_aug {
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Sarv, Tenoyl, Toadie";
        inertia = 0.39;
        __DEXTERITY(3.9, 2);
        AB_barrelTwist = 9;
        AB_barrelLength = 24;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 609.6;
        agm_bipod = 1;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        bg_bipod = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarOD_x_ca";
        displayName = "Steyr AUGA1 HBAR[OD]";
        hiddenSelections[] = { "Camo" };
        reloadAction = "HLC_GestureReloadAUG";
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";

        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
            };
            dispersion = 0.000266686;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
            };
            dispersion = 0.000266686;
        };

        modes[] = {"FullAuto", "close", "medium", "far"};

        class close : FullAuto {
            burst = 8;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium : close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 2;
            minRange = 80;
            minRangeProbab = 0.8;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class far : close {
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.8;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.1;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
        };
    };
    class hlc_rifle_aughbar_B : hlc_rifle_aughbar {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarBLACK_x_ca";
        displayName = "Steyr AUGA1 HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_black_co.paa" };
        modes[] = { "FullAuto","fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_aughbar_t : hlc_rifle_aughbar {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarTAN_x_ca";
        displayName = "Steyr AUGA1 HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        modes[] = { "FullAuto","fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augpara : hlc_aug_base {
        author = "Sarv, Tenoyl, Toadie";
        inertia = 0.31;
        __DEXTERITY(3.1, 2);
        AB_barrelTwist = 9;
        AB_barrelLength = 16.5;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 419.1;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        scope = public;
        magazines[] = { "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG", "hlc_25Rnd_9x19mm_Subsonic_AUG" };
        displayName = "Steyr AUGA1 9mm[OD]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        model = "hlc_wp_aug\mesh\augSMG\AUGa1.p3d";
        reloadAction = "HLC_GestureReloadAUGPara";
        descriptionShort = "SMG<br/>Caliber: 9x19mm NATO";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\aug-arra_reload", 1, 1, 30 };
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        optics = 0;
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mm_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class CowsSlot {};
            class MuzzleSlot : niarms_MuzzleSlot_augpara {};
        };

        modes[] = { "FullAuto", "Single", "fullauto_medium" }; // fixed optics, other modes don't work since we can't attach other opticsType's

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.001044521;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 30;
            maxRangeProbab = 0.2;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.001044521;

            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
            aiRateOfFireDispersion = 2;
            minRange = 40;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 250;
            maxRangeProbab = 0.1;
        };

        class fullauto_medium : FullAuto {
            burst = 3;
            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 40;
            midRangeProbab = 0.5;
            maxRange = 50;
            maxRangeProbab = 0.2;
        };

        class OpticsModes {
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomInit = 0.166;
                opticsZoomMin = 0.166;
                opticsZoomMax = 0.166;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memorypointcamera = "eye";
                opticsid = 1;
                visionmode[] = { "Normal" };
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye2";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = { "", "" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
    };
    class hlc_rifle_augpara_b : hlc_rifle_augpara {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1 9mm[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmBLACK_x_ca";\
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_augpara_t : hlc_rifle_augpara {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1 9mm[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };

    class hlc_rifle_auga2 : hlc_rifle_aug {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        inertia = 0.37;
        __DEXTERITY(3.7, 2);
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        picture = "\hlc_wp_aug\tex\ui\gear_auga2OD_x_ca";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm"};
        reloadAction = "HLC_GestureReloadAUG";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;      
        displayName = "Steyr AUGA2[OD]";
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "", "" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        discretedistance[] = { 100, 200, 300};
        discretedistanceinitindex = 0;
        model = "hlc_wp_aug\mesh\auga2\auga2_mil.p3d";

        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

        class Single : Single {
            showToPlayer = 0;
            maxRange = 500;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72;
            class CowsSlot: asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };
    };
    class hlc_rifle_auga2_t : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga2_b : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_augsr : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        reloadAction = "HLC_GestureReloadAUG";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar"};
        HLC_CurrentBarrel = "hlc_barrel_standard";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        displayName = "Steyr AUG-SR[OD]";
        model = "hlc_wp_aug\mesh\auga2\auga2.p3d";

        modes[] = { "Single", "single_medium_optics1", "single_far_optics2" };
        class Single : Single {
            showToPlayer = 1;
            minRange = 0;
        };
    };
    class hlc_rifle_augsr_t : hlc_rifle_augsr {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_augsr_b : hlc_rifle_augsr {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga2para : hlc_aug_base {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        inertia = 0.28;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 16.5;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 419.1;
        magazines[] = { "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG","hlc_25Rnd_9x19mm_Subsonic_AUG" };
        displayName = "Steyr AUGA2 9mm[OD]";
        hiddenSelections[] = { "Camo" };
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        model = "hlc_wp_aug\mesh\augSMG\AUGa2.p3d";
        reloadAction = "HLC_GestureReloadAUGPara";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\aug-arra_reload", 1, 1, 30 };
        descriptionShort = "SMG<br/>Caliber: 9x19mm NATO";
        optics = 0;
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "", "" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        discretedistance[] = { 100};
        discretedistanceinitindex = 0;
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2_x_ca";

        modes[] = { "FullAuto", "Single", "fullauto_medium" }; // 9mm, optics don't matter much

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.001044521;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 30;
            maxRangeProbab = 0.2;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.001044521;

            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
            aiRateOfFireDispersion = 2;
            minRange = 40;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 250;
            maxRangeProbab = 0.1;
        };

        class fullauto_medium : FullAuto {
            burst = 3;
            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 40;
            midRangeProbab = 0.5;
            maxRange = 50;
            maxRangeProbab = 0.2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class MuzzleSlot : niarms_MuzzleSlot_augpara {};
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };
    };
    class hlc_rifle_auga2para_t : hlc_rifle_auga2para {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 9mm[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_auga2para_b : hlc_rifle_auga2para {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 9mm[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2BLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_auga2carb : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        inertia = 0.34;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 18;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 457.2;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        displayName = "Steyr AUGA2 Carbine[OD]";
        model = "hlc_wp_aug\mesh\auga2\AUGa2_carbine.p3d";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineOD_x_ca";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };

        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
            };
            dispersion = 0.000555596;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
            };
            dispersion = 0.000555596;
            maxRange = 400;
        };

        class fullauto_medium : FullAuto {
            burst = 3;
            showToPlayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            maxRange = 800;
            maxRangeProbab = 0.01;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
    };
    class hlc_rifle_auga2carb_t : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";

    };
    class hlc_rifle_auga2carb_b : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_augsrcarb : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga2\augsr_carbine.p3d";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
        displayName = "Steyr AUG-SR Carbine[OD]";

        modes[] = { "Single", "single_medium_optics1", "single_far_optics2" };
        class Single : Single {
            showToPlayer = 1;
            minRange = 0;
        };
    };
    class hlc_rifle_augsrcarb_t : hlc_rifle_augsrcarb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA-SR Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_augsrcarb_b : hlc_rifle_augsrcarb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_auga2lsw : hlc_rifle_aughbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia = 0.49;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 24;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 609.6;
        agm_bipod = 1;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        bg_bipod = 1;
        cse_bipod = 1;
        model = "hlc_wp_aug\mesh\auga2\auga2_hbar.p3d";
        displayName = "Steyr AUGA2 HBAR[OD]";    
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarOD_x_ca";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "", "" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };

        class FullAuto : FullAuto {
            __ROF(750);
        };
        class Single : Single {
            __ROF(750);
        };

        modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};

        class close : FullAuto {
            burst = 8;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short : close {
            burst = 7;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 2;
            minRange = 80;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.1;
        };
        class medium : close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 650;
            maxRangeProbab = 0.1;
        };
        class far_optic1 : close {
			requiredOpticType = 1;
            burst = 3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 800;
            aiRateOfFireDispersion = 4;
            minRange = 400;
            minRangeProbab = 0.8;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 1200;
            maxRangeProbab = 0.01;
        };
        class far_optic2 : far_optic1 {
            requiredOpticType = 2;
        };

        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.1;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
    };
    class hlc_rifle_auga2lsw_t : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_auga2lsw_b : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augsrhbar : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        model = "hlc_wp_aug\mesh\auga2\augsr_hbar.p3d";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        displayName = "Steyr AUG-SR HBAR[OD]";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";

        modes[] = { "Single", "single_medium_optics1", "single_far_optics2" };
        class Single : Single {
            showToPlayer = 1;
            minRange = 0;
        };
    };
    class hlc_rifle_augsrhbar_t : hlc_rifle_augsrhbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augsrhbar_b : hlc_rifle_augsrhbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_auga3 : hlc_rifle_aug {
        author = "Wang_Chung, Philibuster, Toadie";
        inertia = 0.4;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 18;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 457.2;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        displayName = "Steyr AUGA3[Green]";
        model = "hlc_wp_aug\mesh\auga3\auga3.p3d";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_aug\gesture\a3\auga3_hands.rtm"};
        hiddenSelections[] = { "Camo","Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa" };
        bg_bipod = 0;    
        optics = 0;
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "", "" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        reloadAction = "HLC_GestureReloadAUGA3";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\auga3_reload", 1, 1, 30 };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3GREEN_x_ca";

        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

        class Single : Single {
            showToPlayer = 0;
            maxRange = 500;
        };

        class Library {
            libTextDesc = "Steyr AUG A3";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };

    class hlc_rifle_auga3_bl : hlc_rifle_auga3 {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3[Blue]";
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3BLUE_x_ca";

    };
    class hlc_rifle_auga3_b : hlc_rifle_auga3 {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3[Black]";
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3BLACK_x_ca";
    };
    class hlc_rifle_auga3_GL : hlc_rifle_auga3 {
        author = "Wang_Chung, Philibuster, Toadie";
        scope = public;
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa" };
        bg_bipod = 0;
        optics = 0;

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87;
            class UnderBarrelSlot {};
        };
        inertia = 0.6;
        dexterity = 1.6;
        displayName = "Steyr AUGA3(GL)[Green]";
        model = "hlc_wp_aug\mesh\auga3\AUGa3GL.p3d";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\a3\auga3gl_hands.rtm" };
        muzzles[] = { "this", "hlc_M203_AUGA3" };
        picture = "\hlc_wp_aug\tex\ui\gear_augglGREEN_x_ca";
        class hlc_M203_AUGA3 : UGL_F {
            cameradir = "GL Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye15", "GL Eye2", "GL Eye25", "GL Eye3", "GL Eye35", "GL Eye4", "GL Eye45" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203A1";
            useModelOptics = false;
            useExternalOptic = false;
            reloadAction = "GestureReloadTrgUGL";
            cursoraim = "gl";
        };
    };
    class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3(GL)[Blue]";
        hiddenSelections[] = { "Camo"};
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa"};
        picture = "\hlc_wp_aug\tex\ui\gear_augglBLUE_x_ca";
    };
    class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3(GL)[Black]";
        hiddenSelections[] = { "Camo"};
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa"};
        picture = "\hlc_wp_aug\tex\ui\gear_augglBLACK_x_ca";
    };
};
