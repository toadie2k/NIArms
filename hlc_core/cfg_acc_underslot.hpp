class bipod_01_F_snd : ItemCore{ class ItemInfo; };
class HLC_bipod_UTGShooters :bipod_01_F_snd
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "UTG Lightweight";
    model = "hlc_core\mesh\accessories\bipod\UTG\UTG.p3d";
    descriptionshort = "UTG Shooter's Sniper Bipod, Steel Feet";
};
class hlc_grip_AFG2 : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "Magpul AFG2";
    descriptionShort = "The AFG (Angled Fore Grip) takes into account natural body mechanics and provides a comfortable and stable user interface that reduces fatigue and allows for more precise weapon control.";
    model = "hlc_core\mesh\accessories\bipod\afg2.p3d";
    //picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip2.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    rhs_grip_type = "rhs_grip2_change";
};
class hlc_grip_PMVFG : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = "ProMag VFG";
    descriptionShort = "The AFG (Angled Fore Grip) takes into account natural body mechanics and provides a comfortable and stable user interface that reduces fatigue and allows for more precise weapon control.";
    model = "hlc_core\mesh\accessories\bipod\PM_VFG.p3d";
    //picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip2.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    rhs_grip_type = "rhs_grip1_change";
};