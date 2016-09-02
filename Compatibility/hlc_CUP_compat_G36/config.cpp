class CfgPatches 
{
	class HLC_COMPAT_BWMOD_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "CUP_Weapons_G36", "hlcweapons_G36" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
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
	class CUP_arifle_G36_Base : Rifle_Base_f
	{
		magazines[] += {"hlc_30rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SOST_G36", "hlc_100rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_Tracers_G36" };
	};
	class hlc_G36_base : Rifle_Base_F
	{
		class hlc_GL_AG36 : UGL_F
		{
			magazines[] += { "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
		};
		magazines[] += {"CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag" };
	};/*
	class hlc_rifle_G36VAG36 :hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36V :hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36C : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36A1AG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_MG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36A1 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};*/
};
