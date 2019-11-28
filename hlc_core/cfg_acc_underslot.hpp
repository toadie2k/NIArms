class bipod_01_F_snd : ItemCore{ class ItemInfo; };
class HLC_bipod_UTGShooters :bipod_01_F_snd
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = $STR_NIA_bipod_UTGShooters;
    model = "hlc_core\mesh\accessories\bipod\UTG\UTG.p3d";
    descriptionshort = $STR_NIA_bipod_UTGShooters;
};
class InventoryUnderItem_Base_F;
class HLC_ISOPOD : HLC_bipod_UTGShooters
{
    author = "Toadie";
    displayname = $STR_NIA_bipod_Isopod;
    picture = "\hlc_core\tex\ui\cha\gear_isopod_ca.paa";
    model = "hlc_core\mesh\accessories\acc\charms\ISOPOD.p3d";
    descriptionshort = $STR_NIA_Charm_Isopod_DESC;
    class ItemInfo : InventoryUnderItem_Base_F
    {
        soundBipodDown[] = { "\hlc_core\sound\squee2", 1, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_core\sound\squee1", 1, 1, 20 }; /// sound of folding the bipod
    };
};
class hlc_grip_AFG2 : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_bipod_afg2;
    descriptionShort = $STR_NIA_bipod_AFG;
    weaponInfoType = "NIArms_Rsc_Grip";
    model = "hlc_core\mesh\accessories\bipod\afg2.p3d";
    //picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip2.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    //rhs_grip_type = "rhs_grip2_change";
    NIA_grip_type = 2;
};
class hlc_grip_PMVFG : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_bipod_pmvfg;
    descriptionShort = $STR_NIA_bipod_VFG;
    weaponInfoType = "NIArms_Rsc_Grip";
    model = "hlc_core\mesh\accessories\bipod\PM_VFG.p3d";
    //picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip2.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    //rhs_grip_type = "rhs_grip1_change";
    NIA_grip_type = 2;
    };
    