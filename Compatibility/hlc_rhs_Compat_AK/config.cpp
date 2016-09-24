#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_AK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_aks", "rhs_c_weapons", "cba_jr"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_tgpa = 1;
        rhs_acc_dtk3 = 1;
        rhs_acc_dtk1 = 1;
        rhs_acc_dtk = 1;
        rhs_acc_dtk4short = 1;
        rhs_acc_ak5 = 1;
       // rhs_acc_dtk2 = 1;
    };
};
class asdg_MuzzleSlot_762R : asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_pbs1 = 1;
        rhs_acc_dtk1l = 1;
    };
};
class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;

	/*
	========================================
	RHS GUNS
	========================================
	*/
    class rhs_weap_ak74m_Base_F : Rifle_Base_F {
        magazines[] += { __545x39_MAGS, __545x39_BI_MAGS };
    };
    class rhs_weap_ak74m;
    class rhs_weap_akm : rhs_weap_ak74m {
        magazines[] += { __762x39_MAGS, __762x39_BI_MAGS };
    };
    class rhs_weap_ak103_base : rhs_weap_akm {
        //magazines[] += { __762x39_MAGS, __762x39_BI_MAGS }; // THIS IS WHERE IT GETS DUMB for some reason (BIS BUG); FIGURED OUT A WAY TO GET AROUND THIS WITH SPLIT COMPAT CONFIG
    };
    class rhs_weap_pkp;
    class rhs_weap_rpk74m : rhs_weap_pkp {
        magazines[] += { __545x39_MAGS, __545x39_BI_MAGS };
    };
    class rhs_weap_m70_base : Rifle_Base_F {
        magazines[] += { __762x39_MAGS, __762x39_BI_MAGS };
    };
    class GP25_Base : UGL_F {
        magazines[] += { __40MM_GP_GRENADES };
    };

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_ak_base : Rifle_Base_F {
        magazines[] += { __545x39_RHS_MAGS };
        class hlc_GP30 : UGL_F {
            magazines[] += { __40MM_GP_RHS_GRENADES };
        };
    };

	/*
	========================================
	BIS GUNS
	========================================
	*/
    class arifle_AKS_base_F : Rifle_Base_F {
        magazines[] += { __545x39_MAGS, __545x39_RHS_MAGS };
    };
    class arifle_AK12_base_F : Rifle_Base_F {
        magazines[] += { __762x39_MAGS, __762x39_RHS_MAGS };
    };
    class arifle_AKM_base_F : Rifle_Base_F {
        magazines[] += { __762x39_MAGS, __762x39_RHS_MAGS };
    };

};
