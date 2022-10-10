
class InventoryFlashLightItem_Base_F;
class hlc_acc_TLR1 : ItemCore
{
    dlc = "Niarms_Core";
    author = "Toadie";
    _generalMacro = "acc_flashlight";
    scope = 2;
    displayName = $STR_NIA_acc_TLR1;
    descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
    picture = "\hlc_core\tex\UI\gear_tlr1_ca.paa";
    model = "hlc_core\mesh\accessories\acc\tlr1.p3d";
    descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
    class ItemInfo : InventoryFlashLightItem_Base_F
    {
		__SMALLMASS(0, 0, 122);
        class FlashLight
        {
            position = "flash";
            direction = "flash dir";
            color[] = { 25, 22, 20 };
            ambient[] = { 0.001, 0.001, 0.001 };
            size = 1;
            innerAngle = 50;
            outerAngle = 120;
            coneFadeCoef = 10;
            intensity = 330;
            useFlare = 1;
            dayLight = 1;
            FlareSize = 0.7;
            onlyInNvg = 0;
            class Attenuation
            {
                start = 0;
                constant = 2;
                linear = 1;
                quadratic = 75;
            };
            scale[] = { 0 };
        };
    };
    inertia = 0.05;
};
class hlc_acc_DBALPL : ItemCore
{
    MRT_SwitchItemNextClass = "hlc_acc_DBALPL_FL";
    MRT_SwitchItemPrevClass = "hlc_acc_DBALPL_FL";
    MRT_switchItemHintText = "IR(Laser)";
    dlc = "Niarms_Core";
    author = "Toadie";
    _generalMacro = "acc_flashlight";
    scope = 2;
    displayName = $STR_NIA_acc_DBALPL;
    descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
    picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
    model = "hlc_core\mesh\accessories\acc\dbal.p3d";
    descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
    class ItemInfo : InventoryFlashLightItem_Base_F
    {
		__SMALLMASS(0, 0, 153);
        class Pointer
        {
            irLaserPos = "flash";
            irLaserEnd = "flash dir";
            irDistance = 5;
        };
        class FlashLight{};
    };
    inertia = 0.05;
};
class hlc_acc_DBALPL_FL : ItemCore
{
    MRT_SwitchItemNextClass = "hlc_acc_DBALPL";
    MRT_SwitchItemPrevClass = "hlc_acc_DBALPL";
    MRT_switchItemHintText = "VIS(Flashlight)";
    dlc = "Niarms_Core";
    author = "Toadie";
    _generalMacro = "acc_flashlight";
    scope = 2;
    displayName = $STR_NIA_acc_DBALPL_FL;
    descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
    picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
    model = "hlc_core\mesh\accessories\acc\dbal_FL.p3d";
    descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
    class ItemInfo : InventoryFlashLightItem_Base_F
    {
        mass = 7;
        class FlashLight{
            position = "flash";
            direction = "flash dir";
            color[] = { 130, 160, 180 };
            ambient[] = { 0.001, 0.001, 0.001 };
            size = 1;
            innerAngle = 22;
            outerAngle = 50;
            coneFadeCoef = 10;
            intensity = 600;
            useFlare = 1;
            dayLight = 1;
            FlareSize = 0.5;
            onlyInNvg = 0;
            class Attenuation
            {
                start = 0;
                constant = 2;
                linear = 1;
                quadratic = 75;
            };
            scale[] = { 0 };
        };
    };
    inertia = 0.05;
};
//New for 2022:
// Now available as Side mounts!
class hlc_acc_TLR1_Side : hlc_acc_TLR1
{
	dlc = "Niarms_Core";
	author = "Toadie";
	_generalMacro = "acc_flashlight";
	model = "hlc_core\mesh\accessories\acc\tlr1_Side.p3d";
};
class hlc_acc_DBALPL_Side :hlc_acc_DBALPL
{
	dlc = "Niarms_Core";
	author = "Toadie";
	MRT_SwitchItemNextClass = "hlc_acc_DBALPL_Side_FL";
	MRT_SwitchItemPrevClass = "hlc_acc_DBALPL_Side_FL";
	model = "hlc_core\mesh\accessories\acc\dbal_side.p3d";
};
class hlc_acc_DBALPL_side_FL : hlc_acc_DBALPL_FL
{
	dlc = "Niarms_Core";
	author = "Toadie";
	MRT_SwitchItemNextClass = "hlc_acc_DBALPL_Side";
	MRT_SwitchItemPrevClass = "hlc_acc_DBALPL_Side";
	model = "hlc_core\mesh\accessories\acc\dbal_side_FL.p3d";
};
//class itemcore;
class HLC_Panel_base : ItemCore
{
	dlc = "Niarms_Core";
	scope = public;
	author = "Toadie";
	descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
	picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm.p3d";
	descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
		mass = 1;
	};
	inertia = 0.01;
};
class HLC_Panel_Side_FN5cm_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_desert_co.tga" };
};
class HLC_Panel_Side_2xFN5cm_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_2length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_desert_co.tga" };
};
class HLC_Panel_Side_FN10cm_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_10cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_desert_co.tga" };
};
class HLC_Panel_Side_FN15cm_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_15cm_D.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_desert_co.tga" };
};
class HLC_Panel_Side_Ladder_S_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Side_Ladder_M_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Side_Ladder_L_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long_D.p3d";
	picture = "\hlc_core\tex\UI\gear_ladder_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Side_MagpulXT_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Desert_co.tga" };
};
class HLC_Panel_Side_XTME_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_2xXTME_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2xXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_2length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_4xXTME_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4xXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_4length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_6xXTME_Desert :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6xXTME_Desert;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_6Length_D.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_D_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Side_FN5cm_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Side_2xFN5cm_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_2length.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Side_FN10cm_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_10cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Side_FN15cm_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_15cm.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_co.tga" };
};
class HLC_Panel_Side_Ladder_S_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_magpul_co.tga" };
};
class HLC_Panel_Side_Ladder_M_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_magpul_co.tga" };
};
class HLC_Panel_Side_Ladder_L_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_magpul_co.tga" };
};
class HLC_Panel_Side_MagpulXT_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_magpul_co.tga" };
};
class HLC_Panel_Side_XTME_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_2xXTME_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2xXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_2length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_4xXTME_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4xXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_4length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_6xXTME_Black :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6xXTME_Black;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_6Length.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_CA.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Side_FN5cm_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_FN_OD_co.tga" };
};
class HLC_Panel_Side_2xFN5cm_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_2length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_FN_OD_co.tga" };
};
class HLC_Panel_Side_FN10cm_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_10cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_FN_OD_co.tga" };
};
class HLC_Panel_Side_FN15cm_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_15cm_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_FN_OD_co.tga" };
};
class HLC_Panel_Side_Ladder_S_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Side_Ladder_M_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Side_Ladder_L_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Side_MagpulXT_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_OD_co.tga" };
};
class HLC_Panel_Side_XTME_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_2xXTME_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2xXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_2length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_4xXTME_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4xXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_4length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_6xXTME_OD :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6xXTME_OD;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_6Length_OD.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_OD_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

class HLC_Panel_Side_Ladder_S_Pride2 :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride2_co.tga" };
};
class HLC_Panel_Side_Ladder_M_Pride2 :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride2_co.tga" };
};
class HLC_Panel_Side_Ladder_L_Pride2 :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride2_co.tga" };
};
class HLC_Panel_Side_MagpulXT_Pride2 :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_Pride;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT_Pride.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_Pride_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_Pride2_co.tga" };
};

class HLC_Panel_Side_FN5cm_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN5cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_rg_co.tga" };
};
class HLC_Panel_Side_2xFN5cm_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN2x5cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_5cm_2length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_rg_co.tga" };
};
class HLC_Panel_Side_FN10cm_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN10cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_10cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_rg_co.tga" };
};
class HLC_Panel_Side_FN15cm_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_FN15cm_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\FN_15cm_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_TD5cm_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_fn_rg_co.tga" };
};
class HLC_Panel_Side_Ladder_S_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_S_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Side_Ladder_M_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_M_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Side_Ladder_L_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Ladder_L_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_Ladder_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Side_MagpulXT_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXT_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XT_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\RailPanels_Magpul_RG_co.tga" };
};
class HLC_Panel_Side_XTME_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_MagpulXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_2xXTME_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul2xXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_2length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_4xXTME_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul4xXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_4length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};
class HLC_Panel_Side_6xXTME_RG :HLC_Panel_base
{
	author = "Toadie";
	scope = public;
	displayname = $STR_NIA_Panel_Magpul6xXTME_RG;//$STR_NIA_Charm_Eurojank;
	model = "hlc_core\mesh\accessories\acc\panels\Magpul_XTME_6Length_RG.p3d";
	picture = "\hlc_core\tex\UI\gear_XTME_RG_ca.paa";
 descriptionShort = $STR_NIA_Railpanels_Generic_DESC;
	hiddenSelections[] = { "camo1","camo2" };
	hiddenSelectionsTextures[] = { "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga", "hlc_core\tex\acc\acc\railpanels\railpanels_xtm-e_co.tga" };
};

//Pink

