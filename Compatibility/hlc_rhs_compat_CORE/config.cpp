#include "\hlc_core\script_macros.hpp"

class CfgPatches
{
	class HLC_COMPAT_RHS_CORE
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","rhsusf_c_weapons"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};

class CfgWeapons
{
    class GrenadeLauncher;
    class UGL_F : GrenadeLauncher {
        magazines[] += { __40MM_M203_RHS_GRENADES };
    };
};
class UnderBarrelSlot;
class nia_rifle_grips_slot: UnderBarrelSlot
{
	displayName = "Gripod slot";
	class compatibleItems
	{
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhs_acc_grip_ffg2 = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
		rhsusf_acc_kac_grip = 1;
	};
};
class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo
{
	class compatibleItems{};
};
class nia_rifle_bipodsgrips_slot: asdg_UnderSlot
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhs_acc_grip_ffg2 = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
		rhsusf_acc_kac_grip = 1;
	};
};
class CfgMagazineWells
{
	class CBA_545x39_AK
	{
		RHS_Magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_AK_no_tracers","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_45Rnd_545x39_AK","rhs_45Rnd_545x39_7N6_AK","rhs_45Rnd_545x39_7N10_AK","rhs_45Rnd_545x39_7N22_AK","rhs_45Rnd_545x39_AK_green","rhs_45Rnd_545x39_7U1_AK"};
	};
	class CBA_545x39_RPK
	{
		RHS_Magazines[] = {"rhs_45Rnd_545x39_AK","rhs_45Rnd_545x39_7N6_AK","rhs_45Rnd_545x39_7N10_AK","rhs_45Rnd_545x39_7N22_AK","rhs_45Rnd_545x39_AK_green","rhs_45Rnd_545x39_7U1_AK"};
	};
	class CBA_762x39_AK{};
	class CBA_762x39_RPK{};
};
