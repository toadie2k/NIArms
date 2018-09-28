#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

#define __MAGSWITCHCLASS nia_magSwitch

#define __M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define __M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}
#define __M_ITM(x,y)	class _xx_##x {name = ##x; count = ##y;}

#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

#define __ROF(rpm) reloadtime = (60/##rpm)
#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)

#define __OPTICSZOOM_1X opticsZoomMin = 0.25; opticsZoomMax = 1.25; opticsZoomInit = 0.75

#define __WEAPONHOLDER(weepon,megazine,deename,deeelc,theman,editorsubcat)    class Weapon_##weepon : Weapon_Base_F {\
        dlc = ##deeelc;\
        scope = 2;\
        scopeCurator = 2;\
        displayName = ##deename;\
        author = ##theman;\
		editorCategory = "EdCat_Weapons";\
		editorSubcategory = EdSubcat_##editorsubcat;\
        vehicleClass = "WeaponsPrimary";\
        class TransportWeapons {\
            class ##weepon { weapon = ##weepon; count = 1; };\
        };\
        class TransportMagazines {\
            class ##megazine { magazine = ##megazine; count = 1; };\
        };\
    }

#define __556STANAG_MAGS "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S","hlc_30rnd_556x45_M"
#define __556STANAG_BI_MAGS "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red"
#define __556STANAG_RHS_MAGS "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_M200_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange"
#define __556STANAG_CUP_MAGS "CUP_30Rnd_556x45_Stanag", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"

#define __556NATO_BELTS "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_Mdim_SAW"
#define __556NATO_BI_BELTS "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F"
#define __556NATO_RHS_BELTS "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_B_SAW"
#define __556NATO_CUP_BELTS "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1"

#define __556NATO_BI_DRUMS "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F"

#define __762NATO_BELTS "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_100Rnd_762x51_T_M60E4", "hlc_100Rnd_762x51_Mdim_M60E4"
#define __762NATO_BI_BELTS "150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer"
#define __762NATO_RHS_BELTS "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51_m61_ap", "rhsusf_50Rnd_762x51_m62_tracer", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51_m82_blank", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m80a1epr", "rhsusf_100Rnd_762x51_m82_blank", "rhsusf_50Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993"
#define __762NATO_CUP_BELTS "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"

#define __545x39_MAGS "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk","hlc_45Rnd_545x39_m_rpk"
#define __545x39_BI_MAGS "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_Green_F"
#define __545x39_RHS_MAGS "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N6_AK", "rhs_45Rnd_545x39_7N6_AK"

#define __762x39_MAGS "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak", "hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk"
#define __762x39_BI_MAGS "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_Green_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_Green_F"
#define __762x39_RHS_MAGS "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"

#define __40MM_GP_GRENADES "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange"
#define __40MM_GP_RHS_GRENADES "rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red", "rhs_VG40MD_White", "rhs_VG40MD_Green", "rhs_VG40MD_Red", "rhs_GDM40"

#define __40MM_M203_BI_GRENADES "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"
#define __40MM_M203_RHS_GRENADES "rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M397_HET", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow"
#define __40MM_M203_CUP_GRENADES "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203"

#define __762FAL_MAGS "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_mk316_fal", "hlc_20Rnd_762x51_Barrier_fal", "hlc_20Rnd_762x51_t_fal", "hlc_20Rnd_762x51_TDim_fal", "hlc_20Rnd_762x51_S_fal", "hlc_50rnd_762x51_M_FAL","hlc_50rnd_762x51_MDIM_FAL"
#define __762G3_MAGS "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_mk316_G3", "hlc_20rnd_762x51_barrier_G3", "hlc_20rnd_762x51_T_G3", "hlc_20rnd_762x51_IRDim_G3", "hlc_20rnd_762x51_MDIM_G3", "hlc_50rnd_762x51_M_G3", "hlc_50rnd_762x51_MDIM_G3", "hlc_20rnd_762x51_S_G3"
#define __762FN_MAGS "hlc_10Rnd_762x51_B_fal", "hlc_10Rnd_762x51_mk316_fal", "hlc_10Rnd_762x51_Barrier_fal", "hlc_10Rnd_762x51_t_fal", "hlc_10Rnd_762x51_TDim_fal", "hlc_10Rnd_762x51_S_fal"
#define __300WM_MAGS "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_mk248_AWM", "hlc_5rnd_300WM_BTSP_AWM", "hlc_5rnd_300WM_AP_AWM", "hlc_5rnd_300WM_SBT_AWM", "hlc_5rnd_300WM_T_AWM"

#define __556G36_MAGS "hlc_30rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SOST_G36", "hlc_100rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_Tracers_G36","hlc_30rnd_556x45_MDIM_G36", "hlc_30rnd_556x45_TDIM_G36", "hlc_100rnd_556x45_M_G36" ,"hlc_100rnd_556x45_Mdim_G36"
#define __556G36_CUP_MAGS "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"
#define __556G36_BWA3_MAGS "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP", "BWA3_100Rnd_556x45_G36", "BWA3_100Rnd_556x45_G36_Tracer"
#define __556G36_RHS_MAGS "rhssaf_30rnd_556x45_EPR_G36", "rhssaf_30rnd_556x45_SOST_G36", "rhssaf_30rnd_556x45_SPR_G36", "rhssaf_100rnd_556x45_EPR_G36", "rhssaf_30rnd_556x45_Tracers_G36", "rhssaf_30rnd_556x45_TDIM_G36", "rhssaf_30rnd_556x45_MDIM_G36"
#define __556AUG_MAGS "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_TDIM_AUG"
#define __556SG550_MAGS "hlc_30Rnd_556x45_EPR_sg550", "hlc_30Rnd_556x45_SOST_sg550", "hlc_30Rnd_556x45_SPR_sg550", "hlc_30Rnd_556x45_T_sg550", "hlc_30Rnd_556x45_MDIM_sg550","hlc_30Rnd_556x45_TDIM_sg550"
#define __556HK33_MAGS "hlc_30rnd_556x45_b_HK33", "hlc_30rnd_556x45_t_HK33", "hlc_30rnd_556x45_EPR_HK33", "hlc_30rnd_556x45_SOST_HK33", "hlc_30rnd_556x45_SPR_HK33", "hlc_30rnd_556x45_tdim_HK33", "hlc_30rnd_556x45_mdim_HK33"

#define __762M14_MAGS "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_20Rnd_762x51_Mdim_M14", "hlc_20Rnd_762x51_Tdim_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14","hlc_50Rnd_762x51_MDIM_M14"
#define __762M14_BI_MAGS "20Rnd_762x51_Mag"
#define __762M14_RHS_MAGS "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m62_Mag"
#define __762M14_CUP_MAGS "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR"

#define __792MG42_MAGS "hlc_50Rnd_792x57_B_MG42","hlc_50Rnd_792x57_M_MG42","hlc_50Rnd_792x57_T_MG42", "hlc_100Rnd_792x57_B_MG42","hlc_100Rnd_792x57_M_MG42","hlc_100Rnd_792x57_T_MG42","hlc_200Rnd_792x57_B_MG42","hlc_200Rnd_792x57_M_MG42","hlc_200Rnd_792x57_T_MG42","hlc_50Rnd_792x57_AP_MG42","hlc_100Rnd_792x57_AP_MG42","hlc_200Rnd_792x57_AP_MG42"
#define __762MG3_MAGS "hlc_50Rnd_762x51_B_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_Barrier_MG3","hlc_50Rnd_762x51_T_MG3","hlc_100Rnd_762x51_B_MG3","hlc_100Rnd_762x51_M_MG3","hlc_100Rnd_762x51_Barrier_MG3","hlc_100Rnd_762x51_T_MG3","hlc_250Rnd_762x51_B_MG3","hlc_250Rnd_762x51_B_MG3", "hlc_250Rnd_762x51_M_MG3","hlc_250Rnd_762x51_Barrier_MG3","hlc_250Rnd_762x51_T_MG3"
#define __GRIPS_RHS_ACC rhsusf_acc_grip1 = 1; rhsusf_acc_grip2 = 1; rhsusf_acc_grip2_tan = 1; rhsusf_acc_grip2_wd = 1; rhsusf_acc_grip3 = 1; rhsusf_acc_grip3_tan = 1; rhs_acc_grip_rk2 = 1; rhs_acc_grip_rk6 = 1; rhs_acc_grip_ffg2 = 1;
// calculate dexterity (how fast you can turn) with rifle based on it's total weight - meant to produce values close to BIS
// __COMPONENTS = sum of parts defined below
// __MODIF = 0 default, 1 for having a grip, 1 for bullpups, -3 for bulky weapons
// aimTransitionSpeed - the new thing, made it dexterity x 0.7

// formula for rifles, mg, launchers
#define __DEXTERITY(__COMPONENTS,__MODIF) dexterity = __EVAL((3.75/__EVAL(__COMPONENTS + 0.001)) + __EVAL(__MODIF/10) + 0.4); aimTransitionSpeed = __EVAL(((3.75/__EVAL(__COMPONENTS + 0.001)) + __EVAL(__MODIF/10) + 0.4) * 0.7)
// handguns have another formula
#define __PDEXTERITY(__COMPONENTS) dexterity = __EVAL((0.75/__EVAL(__COMPONENTS + 0.001)) + 0.9); aimTransitionSpeed = __EVAL(((0.75/__EVAL(__COMPONENTS + 0.001)) + 0.9) * 0.7)

#include "script_ai.hpp"
