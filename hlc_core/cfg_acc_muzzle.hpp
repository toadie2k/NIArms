class ItemCore;
class muzzle_snds_H;
class muzzle_snds_M : muzzle_snds_H {
    class ItemInfo;
};

class hlc_muzzle_300blk_KAC : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "ImBrokeRU, Toadie";
    displayName = $STR_NIA_muzzle_300blk;// NOTE TO ME - REVERT NEXT VERSION WHEN I UNFUCK THE TEXTURES
    descriptionshort = $STR_NIA_300blk_DESC;
    picture = "\hlc_core\tex\UI\gear_FullNelson_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\762\762.p3d";// NOTE TO ME - REVERT NEXT VERSION WHEN I UNFUCK THE TEXTURES
};
class hlc_muzzle_556NATO_KAC : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_556NATO_KAC;
    descriptionshort = $STR_NIA_556NATO_KAC_DESC;
    picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
    model = "hlc_core\mesh\accessories\barrel\556\kacqd.p3d";
};
class hlc_muzzle_556NATO_M42000 : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_556NATO_M42000;
    descriptionshort = $STR_NIA_556NATO_KAC_DESC;
    picture = "\hlc_core\tex\ui\gear_aac-m42k_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\M4-2000.p3d";
};
class hlc_muzzle_556NATO_rotexiiic_tan : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_556NATO_rotexiiic_Tan;
    descriptionshort = $STR_NIA_556NATO_KAC_DESC;
    picture = "\hlc_core\tex\ui\gear_rotexiiic-tan_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC.p3d";
};
class hlc_muzzle_556NATO_rotexiiic_grey : hlc_muzzle_556NATO_rotexiiic_tan
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_556NATO_rotexiiic_grey;
    picture = "\hlc_core\tex\ui\gear_rotexiiic-grey_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC_grey.p3d";
};
class hlc_muzzle_Tundra : muzzle_snds_M
{
    dlc = "Niarms_core";
    author = "r_populik,Toadie";
    displayName = $STR_NIA_muzzle_9mm_Tundra;
    descriptionshort = $STR_NIA_9mm_DESC;
    picture = "\hlc_core\tex\ui\gear_tundra_ca";
    model = "hlc_core\mesh\accessories\barrel\9\tundra.p3d";
    class ItemInfo : ItemInfo {
        mass = 5;
    };
    inertia = 0.04;
};
class hlc_muzzle_Octane9 : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = " Toadie";
    displayName = $STR_NIA_muzzle_9mm_Octane9;
    descriptionshort = $STR_NIA_9mm_DESC;
    picture = "\hlc_core\tex\UI\gear_octane9_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\9\octane9.p3d";
};
class hlc_muzzle_Evo9 : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_9mm_Evo9;
    descriptionshort = $STR_NIA_9mm_DESC;
    picture = "\hlc_core\tex\UI\gear_evo9_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\9\evo9.p3d";
};
class hlc_muzzle_TiRant9 : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_9mm_Tirant9;
    descriptionshort = $STR_NIA_9mm_DESC;
    model = "hlc_core\mesh\accessories\barrel\9\tirant9.p3d";
    picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
};
class hlc_muzzle_TiRant9S : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_9mm_Tirant9s;
    descriptionshort = $STR_NIA_9mm_DESC;
    model = "hlc_core\mesh\accessories\barrel\9\tirant9s.p3d";
    picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
};
class hlc_muzzle_Octane45 : hlc_muzzle_Octane9
{
    dlc = "Niarms_core";
    author = " Toadie";
    displayName = $STR_NIA_muzzle_45acp_Octane45;
    descriptionshort = $STR_NIA_45_DESC;
    //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
    //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
};
class hlc_muzzle_Evo40 : hlc_muzzle_Evo9
{
    //dlc = "Niarms_226";
    author = "Toadie";
    displayName = $STR_NIA_muzzle_40SW_Evo40;
    descriptionshort = $STR_NIA_40_DESC;
    //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
    //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
};
class NIAmuzzle_flash_rifle_MAG : ItemCore
{
    scope = 2;
    model = "hlc_core\mesh\muzzleflash\acc\Muzzle_flash_MAG58.p3d";
};
class hlc_muzzle_MAG58_Brake : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "ImBrokeRU, Toadie";
    displayName = $STR_NIA_muzzle_762NATO_MAG58;
    descriptionshort = $STR_NIA_762NATO_Mag58_DESC;
    picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
    model = "hlc_core\mesh\accessories\barrel\762\FNMAG_Brake.p3d";
    class ItemInfo : ItemInfo {
        mass = 1;
        soundTypeIndex = 0;
        muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
        alternativeFire = "NIAmuzzle_flash_rifle_MAG";  // class in cfgWeapons with model of muzzle flash	
    };
    inertia = 0.00;
};

class NIAmuzzle_flash_rifle_cherrybomb : ItemCore
{
	scope = 2;
	model = "hlc_core\mesh\muzzleflash\acc\Muzzle_flash_low.p3d"; // this gets it's own mesh eventually
};
class hlc_muzzle_Cherrybomb : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "ImBrokeRU, Toadie";
	displayName = $STR_NIA_muzzle_Cherrybomb;
	descriptionshort = $STR_NIA_762NATO_CherryBomb_DESC;
	picture = "\hlc_core\tex\UI\gear_Cherrybomb_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\Cherrybomb.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_cherrybomb";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};
class NIAmuzzle_flash_rifle_FSC30 : ItemCore
{
	scope = 2;
	model = "hlc_core\mesh\muzzleflash\acc\Muzzle_flash_AK12.p3d"; // this gets it's own mesh eventually
};
class hlc_muzzle_FSC30 : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_FSC30;
	descriptionshort = $STR_NIA_762NATO_FSC30_DESC;
	picture = "\hlc_core\tex\UI\gear_FSC30_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\FSC30.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_FSC30";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};
class hlc_muzzle_17SBrake : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_OEMBrake_17S;
	descriptionshort = $STR_NIA_762NATO_FSC30_DESC;
	picture = "\hlc_core\tex\UI\gear_OEMBrake17S_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\OEMBrake_17s.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_FSC30";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};
class NIAmuzzle_flash_rifle_Miter : ItemCore
{
	scope = 2;
	model = "hlc_core\mesh\muzzleflash\acc\Muzzle_flash_3prong.p3d"; // this gets it's own mesh eventually
};
class hlc_muzzle_Miter18T : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_Miter18T;
	descriptionshort = $STR_NIA_762NATO_Miter_DESC;
	picture = "\hlc_core\tex\UI\gear_Miter18T_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\Miter18T.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_Miter";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};
class hlc_muzzle_OEMDevice : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_OEMBrake;
	descriptionshort = $STR_NIA_762NATO_Miter_DESC;
	picture = "\hlc_core\tex\UI\gear_oemdevice_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\OEMBrake.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_Miter";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};
class hlc_muzzle_OEMDevice_556 : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_OEMBrake;
	descriptionshort = $STR_NIA_556NATO_OEM_DESC;
	picture = "\hlc_core\tex\UI\gear_oemdevice556_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\556\OEMBrake_556.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIAmuzzle_flash_rifle_Miter";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};

class hlc_muzzle_AAC_762SDN6 : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_AAC_762SDN6;
	descriptionshort = $STR_NIA_300blk_DESC;
	picture = "\hlc_core\tex\UI\gear_762SDN6_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\AAC_762SDN6.p3d";
};
class hlc_muzzle_AAC_SCARH : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_AAC_SCARHSD;
	descriptionshort = $STR_NIA_300blk_DESC;
	picture = "\hlc_core\tex\UI\gear_SCARHSD_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\AAC_SCARH.p3d";
};
class hlc_muzzle_Brevis : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_Brevis;
	descriptionshort = $STR_NIA_300blk_DESC;
	picture = "\hlc_core\tex\UI\gear_BrevisIII_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\BrevisIII.p3d";
};
class hlc_muzzle_ThunderChicken : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_ThunderChicken;
	descriptionshort = $STR_NIA_300blk_DESC;
	picture = "\hlc_core\tex\UI\gear_ThunderChicken_ca.paa";
	model = "hlc_core\mesh\accessories\barrel\762\ThunderChicken.p3d";
};
class NIA_muzzle_flash_rifle_KX3 : ItemCore
{
	scope = 2;
	model = "hlc_core\mesh\accessories\barrel\556\Muzzle_flash_KX3.p3d"; // this gets it's own mesh eventually
};
class hlc_muzzle_KX3_comp : muzzle_snds_M {
	dlc = "Niarms_Core";
	author = "Toadie";
	displayName = $STR_NIA_muzzle_KX3;
	descriptionshort = $STR_NIA_KX3_DESC;
	picture = "hlc_core\tex\UI\gear_kx3_ca";
	model = "hlc_core\mesh\accessories\barrel\556\KX3_Brake.p3d";
	class ItemInfo : ItemInfo {
		mass = 1;
		soundTypeIndex = 0;
		muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
		alternativeFire = "NIA_muzzle_flash_rifle_KX3";  // class in cfgWeapons with model of muzzle flash	
	};
	inertia = 0.00;
};