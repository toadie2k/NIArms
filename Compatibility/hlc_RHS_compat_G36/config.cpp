class CfgPatches 
{
	class HLC_COMPAT_RHS_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "rhsusf_c_weapons", "hlcweapons_G36" };
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
	class hlc_G36_base : Rifle_Base_F
	{
		class hlc_GL_AG36 : UGL_F
		{
			magazines[] += {"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow"  };
		};
	};

};