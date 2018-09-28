class CfgMagazineWells
{
    class STANAG_556x45
    {
        NIA_Magazines[] =
        {
            //30 round STANAGs
            "hlc_30rnd_556x45_EPR",
            "hlc_30rnd_556x45_SOST",
            "hlc_30rnd_556x45_SPR",
            "hlc_30rnd_556x45_S",
            "hlc_30rnd_556x45_M",
            "hlc_30rnd_556x45_t",
            "hlc_30rnd_556x45_MDim",
            "hlc_30rnd_556x45_TDim",
            //X15 drum mags
            "hlc_50rnd_556x45_EPR",
            "hlc_50rnd_556x45_SOST",
            "hlc_50rnd_556x45_SPR",
            "hlc_50rnd_556x45_M",
            "hlc_50rnd_556x45_MDim",
            //PMAGs
            "hlc_30rnd_556x45_EPR_PMAG",
            "hlc_30rnd_556x45_SOST_PMAG",
            "hlc_30rnd_556x45_SPR_PMAG",
            "hlc_30rnd_556x45_S_PMAG",
            "hlc_30rnd_556x45_M_PMAG",
            "hlc_30rnd_556x45_t_PMAG",
            "hlc_30rnd_556x45_MDim_PMAG",
            "hlc_30rnd_556x45_TDim_PMAG",
            // H&K Heavy Duty STANAG
            "hlc_30rnd_556x45_EPR_STANAGHD",
            "hlc_30rnd_556x45_SOST_STANAGHD",
            "hlc_30rnd_556x45_SPR_STANAGHD",
            "hlc_30rnd_556x45_S_STANAGHD",
            "hlc_30rnd_556x45_M_STANAGHD",
            "hlc_30rnd_556x45_t_STANAGHD",
            "hlc_30rnd_556x45_MDim_STANAGHD",
            "hlc_30rnd_556x45_TDim_STANAGHD",
            //Lancer L5
            "hlc_30rnd_556x45_EPR_L5",
            "hlc_30rnd_556x45_SOST_L5",
            "hlc_30rnd_556x45_SPR_L5",
            "hlc_30rnd_556x45_S_L5",
            "hlc_30rnd_556x45_M_L5",
            "hlc_30rnd_556x45_t_L5",
            "hlc_30rnd_556x45_MDim_L5",
            "hlc_30rnd_556x45_TDim_L5",
            //EMAGs
            "hlc_30rnd_556x45_EPR_EMAG",
            "hlc_30rnd_556x45_SOST_EMAG",
            "hlc_30rnd_556x45_SPR_EMAG",
            "hlc_30rnd_556x45_S_EMAG",
            "hlc_30rnd_556x45_M_EMAG",
            "hlc_30rnd_556x45_t_EMAG",
            "hlc_30rnd_556x45_MDim_EMAG",
            "hlc_30rnd_556x45_TDim_EMAG"
        };
        BI_Magazines[] =
        {
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow"
        };
    };
    /*class M249_556x49
    {
        RHS_Magazines[] =
        {
            //200 round plastic box mags
            //M855A1
            "rhsusf_200Rnd_556x45_box",//standard
            "rhsusf_200rnd_556x45_mixed_box",//mixed
            //M855
            "rhsusf_200rnd_556x45_M855_box",//standard
            "rhsusf_200rnd_556x45_M855_mixed_box",//mixed

            //200 round softpacks
            //M855A1
            "rhsusf_200Rnd_556x45_soft_pouch",//standard
            "rhsusf_200Rnd_556x45_mixed_soft_pouch",//mixed
            //M855
            "rhsusf_200Rnd_556x45_M855_soft_pouch",//standard
            "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",//mixed

            //100 round softpacks
            //M855A1
            "rhsusf_100Rnd_556x45_soft_pouch",//standard
            "rhsusf_100Rnd_556x45_mixed_soft_pouch",//mixed
            //M855
            "rhsusf_100Rnd_556x45_M855_soft_pouch",//standard
            "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",//mixed
            //M200
            "rhsusf_100Rnd_556x45_M200_soft_pouch"//blanks
        };
        BI_Magazines[] =
        {
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_Red_F",
            "200Rnd_556x45_Box_Tracer_F",
            "200Rnd_556x45_Box_Tracer_Red_F"
        };
    };
    class M240_762x51
    {
        RHS_Magazines[] =
        {
            "rhsusf_50Rnd_762x51", // M80
            "rhsusf_50Rnd_762x51_m61_ap",
            "rhsusf_50Rnd_762x51_m62_tracer",
            "rhsusf_50Rnd_762x51_m80a1epr",
            "rhsusf_50Rnd_762x51_m82_blank",

            "rhsusf_100Rnd_762x51", // M80
            "rhsusf_100Rnd_762x51_m61_ap",
            "rhsusf_100Rnd_762x51_m62_tracer",
            "rhsusf_100Rnd_762x51_m80a1epr",
            "rhsusf_100Rnd_762x51_m82_blank"
        };
    };*/
    class NIA_STANAG_556x45 :STANAG_556x45 {};
    class UGL_40x36
    {
        BI_Magazines[] =
        {
            "1Rnd_HE_Grenade_shell",
            "UGL_FlareWhite_F",
            "UGL_FlareGreen_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",
            "UGL_FlareCIR_F",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
    };
    class 3UGL_40x36
    {
        BI_Magazines[] =
        {
            "3Rnd_HE_Grenade_shell",
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareGreen_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareYellow_F",
            "3Rnd_UGL_FlareCIR_F",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell"
        };
    };
};