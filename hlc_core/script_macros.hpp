#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

#define __M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define __M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}
#define __M_ITM(x,y)	class _xx_##x {name = ##x; count = ##y;}

#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

#define __ROF(rpm) reloadtime = (60/##rpm)
#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)

#define __556STANAG_MAGS "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "hlc_50rnd_556x45_EPR"
#define __556STANAG_BI_MAGS "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red"
#define __556STANAG_RHS_MAGS "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M200_Stanag"

#define __556NATO_BELTS "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_Mdim_SAW"
#define __556NATO_BI_BELTS "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F"
#define __556NATO_RHS_BELTS "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_B_SAW"

#define __556NATO_BI_DRUMS "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F"

#define __762NATO_BELTS "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_100Rnd_762x51_T_M60E4", "hlc_100Rnd_762x51_Mdim_M60E4"
#define __762NATO_BI_BELTS "150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer"
#define __762NATO_RHS_BELTS "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51_m61_ap", "rhsusf_50Rnd_762x51_m62_tracer", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51_m82_blank", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m80a1epr", "rhsusf_100Rnd_762x51_m82_blank", "rhsusf_50Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993"

#define __545x39_MAGS "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
#define __545x39_BI_MAGS "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_Green_F"
#define __545x39_RHS_MAGS "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"

#define __762x39_MAGS "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak"
#define __762x39_BI_MAGS "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_Green_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_Green_F"
#define __762x39_RHS_MAGS "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"
