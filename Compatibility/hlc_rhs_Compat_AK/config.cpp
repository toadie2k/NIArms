class CfgPatches 
{
	class HLC_COMPAT_RHS_AK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_aks","rhs_c_weapons"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_545SUP_AK = 1;
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
        hlc_muzzle_762SUP_AK = 1;
        rhs_acc_pbs1 = 1;
        rhs_acc_dtk1l = 1;
    };
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	/*
	========================================
	RHS GUNS
	========================================
	*/
    class GP25_Base : UGL_F
    {/*			"rhs_VOG25","rhs_VOG25p","rhs_vg40tb","rhs_vg40sz","rhs_vg40op_white","rhs_vg40op_green","rhs_vg40op_red","rhs_GRD40_white","rhs_GRD40_green","rhs_GRD40_red"*/
        magazines[] += { "hlc_VOG25_AK", "VOG25P_test", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
    };
	class rhs_weap_ak74m_Base_F : Rifle_Base_F
	{
		/*			"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",	"rhs_30Rnd_545x39_7N10_AK",	"rhs_30Rnd_545x39_7N22_AK",	"rhs_30Rnd_545x39_AK_green","rhs_45Rnd_545x39_AK","rhs_45Rnd_545x39_7N10_AK","rhs_45Rnd_545x39_7N22_AK","rhs_45Rnd_545x39_AK_green"*/
		magazines[] += {	"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK"};

	};
    class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
	class rhs_weap_akm : rhs_weap_ak74m
	{
		magazines[] += {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak" };
    };/*
    class rhs_weap_ak103_base : rhs_weap_akm
	{
		magazines[] += {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak" };
	};*/
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_ak_base;
	class hlc_rifle_ak74 : hlc_ak_base
	{
		magazines[] += {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",	"rhs_30Rnd_545x39_7N10_AK",	"rhs_30Rnd_545x39_7N22_AK",	"rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_7U1_AK",	"rhs_45Rnd_545x39_AK",	"rhs_45Rnd_545x39_7N10_AK",	"rhs_45Rnd_545x39_7N22_AK","rhs_45Rnd_545x39_AK_green",	"rhs_45Rnd_545x39_7U1_AK"};
	};
	class hlc_rifle_ak12;
	class hlc_rifle_ak12GL : hlc_rifle_ak12

	{
		class hlc_GP30_AK12 : UGL_F
		{
            magazines[] += {     
                "rhs_VOG25",
                "rhs_VOG25p",
                "rhs_vg40tb",
                "rhs_vg40sz",
                "rhs_vg40op_white",
                "rhs_vg40op_green",
                "rhs_vg40op_red",
                "rhs_GRD40_white",
                "rhs_GRD40_green",
                "rhs_GRD40_red",
                "rhs_VG40MD_White",
                "rhs_VG40MD_Green",
                "rhs_VG40MD_Red",
                "rhs_GDM40" };
		};
	};
	class hlc_rifle_RPK12 : hlc_rifle_ak12
	{
		magazines[] += {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"};
	};

	class hlc_rifle_aks74u : hlc_ak_base
	{
		magazines[] += {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"};
	};
	class hlc_rifle_aks74u_MTK : hlc_ak_base
	{
		magazines[] += {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"};
	};
	class hlc_rifle_ak47 : hlc_ak_base
	{
		magazines[] += {  "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"	 };
	};
	class hlc_rifle_akm;
	class hlc_rifle_akmgl :hlc_rifle_akm
	{
		class hlc_GP25_AKM : UGL_F
		{
			magazines[] += { "rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red" };
		};
	};
	class hlc_rifle_rpk : hlc_ak_base
	{
		magazines[] += {   "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"	};
	};
	class hlc_rifle_rpk74n :hlc_ak_base
	{
		magazines[] += {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"};
	};
	class hlc_rifle_aks74;
	class hlc_rifle_aks74_GL : hlc_rifle_aks74
	{
		class hlc_GP30_AKS74 : UGL_F
		{
			magazines[] += { "rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red" };
		};
	};
	class hlc_rifle_ak74m_MTK : hlc_ak_base
	{
		magazines[] += {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"};
	};
	class hlc_rifle_RK62 : hlc_ak_base
	{
		magazines[] += {  "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"	};
	};
	class hlc_rifle_slr107u : hlc_ak_base
	{
		magazines[] += {  "rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm_tracer","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_U"	};
	};
	class hlc_rifle_slr107u_MTK : hlc_ak_base
	{
		magazines[] += {  "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"	};
	};

};