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
	picture = "\hlc_core\tex\ui\gear_AFG2_ca.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    //rhs_grip_type = "rhs_grip2_change";
    NIA_grip_type = "AFG";
};

class hlc_grip_AFG : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_bipod_afg;
    descriptionShort = $STR_NIA_bipod_AFG;
	weaponInfoType = "NIArms_Rsc_Grip";
    model = "hlc_core\mesh\accessories\bipod\afg1.p3d";
	picture = "\hlc_core\tex\ui\gear_AFG1_ca.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    //rhs_grip_type = "rhs_grip2_change";
    NIA_grip_type = "AFG";
};
class hlc_grip_PMVFG : HLC_bipod_UTGShooters
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayName = $STR_NIA_bipod_pmvfg;
    descriptionShort = $STR_NIA_bipod_VFG;
	weaponInfoType = "NIArms_Rsc_Grip";
    model = "hlc_core\mesh\accessories\bipod\PM_VFG.p3d";
	picture = "\hlc_core\tex\ui\Gear_KACVFG_ca.paa";
    class ItemInfo : ItemInfo
    {
        hasBipod = 0;
    };
    //rhs_grip_type = "rhs_grip1_change";
    NIA_grip_type = "VFG";
    };
class hlc_grip_PMVFG_Black : hlc_grip_PMVFG
{
	dlc = "Niarms_Core";
	author = "Toadie";
	model = "hlc_core\mesh\accessories\bipod\PM_VFG_Blk.p3d";
	picture = "\hlc_core\tex\ui\Gear_KACVFG-Blk_ca.paa";
};
class hlc_grip_PMVFG_Tan : hlc_grip_PMVFG
{
	dlc = "Niarms_Core";
	author = "Toadie";
	model = "hlc_core\mesh\accessories\bipod\PM_VFG_Tan.p3d";
	picture = "\hlc_core\tex\ui\Gear_KACVFG-tan_ca.paa";
};

class HLC_Panel_Under_base : HLC_bipod_UTGShooters {
	dlc = "Niarms_Core";
	scope = public;
	author = "Toadie";
	model = "hlc_core\mesh\accessories\acc\charms\ISOPOD.p3d";
	class ItemInfo : ItemInfo
	{
		deployedPivot = "bipod";
		mass = 1;
	};
	inertia = 0.01;
};

class HLC_Panel_Under_FN5cm_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_2xFN5cm_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_2length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN10cm_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_10cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN15cm_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_15cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_Ladder_S_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Under_Ladder_M_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Under_Ladder_L_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Under_MagpulXT_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Under_XTME_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_2xXTME_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2XXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_2length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_4xXTME_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4XXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_4length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_6xXTME_Desert :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6XXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_6Length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
	descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};


class HLC_Panel_Under_FN5cm_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_2xFN5cm_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_2length.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN10cm_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_10cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN15cm_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_15cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_Ladder_S_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_co.tga" };
};
class HLC_Panel_Under_Ladder_M_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_co.tga" };
};
class HLC_Panel_Under_Ladder_L_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_co.tga" };
};
class HLC_Panel_Under_MagpulXT_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_co.tga" };
};
class HLC_Panel_Under_XTME_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_2xXTME_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2XXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_2length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_4xXTME_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4XXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_4length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_6xXTME_Black :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6XXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_6Length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Under_FN5cm_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_2xFN5cm_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_2length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN10cm_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_10cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN15cm_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_15cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_Ladder_S_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Under_Ladder_M_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Under_Ladder_L_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Under_MagpulXT_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Under_XTME_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_2xXTME_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2XXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_2length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_4xXTME_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4XXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_4length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_6xXTME_OD :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6XXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_6Length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Under_FN5cm_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_2xFN5cm_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\underslot\FN_5cm_2length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN10cm_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_10cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_FN15cm_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\FN_15cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Under_Ladder_S_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Under_Ladder_M_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Under_Ladder_L_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Under_MagpulXT_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Under_XTME_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_2xXTME_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2XXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_2length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_4xXTME_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4XXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_4length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Under_6xXTME_RG :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6XXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XTME_6Length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Under_Ladder_S_Pride :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride_co.tga" };
};
class HLC_Panel_Under_Ladder_M_Pride :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride_co.tga" };
};
class HLC_Panel_Under_Ladder_L_Pride :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride_co.tga" };
};
class HLC_Panel_Under_MagpulXT_Pride :HLC_Panel_Under_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride_co.tga" };
};


