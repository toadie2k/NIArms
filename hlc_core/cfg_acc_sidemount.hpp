
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
        mass = 7;
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
        mass = 7;
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
