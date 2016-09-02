class CfgPatches 
{
	class HLC_COMPAT_CUP_AR15
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_ar15","CUP_Weapons_M16","CUP_Weapons_L85","CUP_weapons_L110","CUP_Weapons_M249","CUP_Weapons_SCAR"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class SlotInfo;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_M16_Base : Rifle_Base_f
	{
		/*"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"*/
		magazines[] += {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S"  };
		class M203 : UGL_F
		{
			/*magazines[] = { "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };*/
		};
	};
	class CUP_arifle_M4A1;
	class CUP_srifle_Mk12SPR : CUP_arifle_M4A1
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S"  };
	};
	class CUP_arifle_L85A2_Base : Rifle_Base_F
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S"  };
	};
	class CUP_lmg_L110A1 : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_S"};
	};
	class CUP_saw_base : Rifle_Base_F
	{
		//magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_S"};
	};
	class CUP_lmg_minimipara : CUP_saw_base
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_S"};
	};
	class CUP_arifle_SCAR_Base : Rifle_Base_F
	{
		reloadAction = "HLC_GestureReloadAR15_catch_DR";
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_S"};
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_ar15_base;
	class hlc_rifle_RU556 : hlc_ar15_base 
	{
		magazines[] += {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};
	};/*
	class hlc_rifle_RU5562 : hlc_rifle_RU556
	{
		magazines[] += {};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] += {"CUP_muzzle_snds_M16", "CUP_muzzle_snds_M16_camo"};
			};
		};
	};
	class hlc_rifle_CQBR : hlc_rifle_RU556
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] += {"CUP_muzzle_snds_M16", "CUP_muzzle_snds_M16_camo"};
			};
		};
	};*/
	class hlc_rifle_M4 : hlc_ar15_base
	{
		magazines[] += { "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};
	};
	class hlc_rifle_m4m203 : hlc_rifle_m4
	{
		//magazines[] += { "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};
		class hlc_M203_M4 : UGL_F
		{
			magazines[] += { "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
		};
	};
	class hlc_rifle_bcmjack : hlc_ar15_base
	{
		magazines[] += { "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};
	};
	class hlc_rifle_Colt727 : hlc_ar15_base
	{
		magazines[] += { "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};

	};
	class hlc_rifle_Colt727_GL : hlc_rifle_Colt727
	{
		

		class hlc_M203_CAR15 : UGL_F
		{
			magazines[] += { "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
		};
	};
	class hlc_rifle_SAMR : hlc_ar15_base
	{
		magazines[] += {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"};

	};

	
};
