class ItemCore;
class muzzle_snds_H;
class muzzle_snds_M : muzzle_snds_H {
    class ItemInfo;
};
class hlc_muzzle_300blk_KAC : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "ImBrokeRU, Toadie";
    displayName = "QD.300BLK Suppressor";
    picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
    model = "hlc_core\mesh\accessories\barrel\762\762.p3d";
};
class hlc_muzzle_556NATO_KAC : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "Gemtech Halo";
    picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
    model = "hlc_core\mesh\accessories\barrel\556\kacqd.p3d";
};
class hlc_muzzle_556NATO_M42000 : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "AAC M4-2000";
    picture = "\hlc_core\tex\ui\gear_aac-m42k_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\M4-2000.p3d";
};
class hlc_muzzle_556NATO_rotexiiic_tan : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "Rotex-IIIC (Tan)";
    picture = "\hlc_core\tex\ui\gear_rotexiiic-tan_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC.p3d";
};
class hlc_muzzle_556NATO_rotexiiic_grey : hlc_muzzle_556NATO_rotexiiic_tan
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "Rotex-IIIC (Grey)";
    picture = "\hlc_core\tex\ui\gear_rotexiiic-grey_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC_grey.p3d";
};
class hlc_muzzle_Tundra : muzzle_snds_M
{
    dlc = "Niarms_core";
    author = "r_populik,Toadie";
    displayName = "Gemtech Tundra (9mm)";
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
    displayName = "SilencerCo Octane9 (9mm)";
    picture = "\hlc_core\tex\UI\gear_octane9_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\9\octane9.p3d";
};
class hlc_muzzle_Evo9 : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = "AAC Evolution9 (9mm)";
    picture = "\hlc_core\tex\UI\gear_evo9_ca.paa";
    model = "hlc_core\mesh\accessories\barrel\9\evo9.p3d";
};
class hlc_muzzle_TiRant9 : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = "AAC Ti-Rant9 (9mm)";
    model = "hlc_core\mesh\accessories\barrel\9\tirant9.p3d";
    picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
};
class hlc_muzzle_TiRant9S : muzzle_snds_h
{
    dlc = "Niarms_core";
    author = "Toadie";
    displayName = "AAC Ti-Rant9S (9mm)";
    model = "hlc_core\mesh\accessories\barrel\9\tirant9s.p3d";
    picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
};
class hlc_muzzle_Octane45 : hlc_muzzle_Octane9
{
    dlc = "Niarms_core";
    author = " Toadie";
    displayName = "SilencerCo Octane (.45ACP)";
    //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
    //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
};
class hlc_muzzle_Evo40 : hlc_muzzle_Evo9
{
    //dlc = "Niarms_226";
    author = "Toadie";
    displayName = "AAC Evolution (.40SW)";
    //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
    //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
};
class NIAmuzzle_flash_rifle_MAG : ItemCore
{
    scope = 2;
    model = "hlc_core\mesh\muzzleflash\Muzzle_flash_MAG58.p3d";
};
class hlc_muzzle_MAG58_Brake : muzzle_snds_M {
    dlc = "Niarms_Core";
    author = "ImBrokeRU, Toadie";
    displayName = "MAG58 Flash Hider";
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