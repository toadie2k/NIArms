class optic_Arco;
class optic_LRPS : ItemCore {
    class ItemInfo;
};
class optic_aco;
class InventoryOpticsItem_Base_F;
class hlc_optic_LeupoldM3A : optic_lrps {
    dlc = "Niarms_FN3011";
    author = "Toadie";
    descriptionshort = "Leupold M3A Ultra<br />Magnification: 10x";
    picture = "\hlc_core\tex\ui\gear_LeupoldM3A_Ca";
    model = "hlc_core\mesh\accessories\sights\LeupoldM3A.p3d";
    displayname = "Leupold M3A";

    class ItemInfo : ItemInfo {
        mass = 10.5;
        class OpticsModes {
            class Snip {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.0249;
                opticsZoomMax = 0.0249;
                opticsZoomInit = 0.0249;
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                discreteDistanceInitIndex = 4;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "Opticview";
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\Reticle_10xmildot" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron : Snip {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = { "", "" };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                __OPTICSZOOM_1X;
                memoryPointCamera = "eye2";
                visionMode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
    tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
    inertia = 0.05;
};
class hlc_optic_PVS4base : optic_Arco {
    author = "Bohemia Interactive, Toadie";
    descriptionshort = "Night Vision Optic<br />Magnification: 4x";
    displayname = "AN/PVS4";
    picture = "\hlc_core\tex\ui\gear_PVS4_x_ca";
    class ItemInfo : InventoryOpticsItem_Base_F {
        __OPTIC_DMR;
        mass = 49.6;
        modelOptics = "hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic";
        class OpticsModes {
            class Snip {
                useModelOptics = 1;
                opticsPPEffects[] = {};
                opticsZoomMin = 0.0625;
                opticsZoomMax = 0.0625;
                opticsZoomInit = 0.0625;
                discreteDistance[] = { 200, 300, 400, 500, 600 };
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 300;
                distanceZoomMax = 600;
                memoryPointCamera = "eye";
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic" };
                visionMode[] = { "NVG" };
                opticsFlare = 1;
                opticsid = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Snip2 : Snip {
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\NV_pvs4-daysight" };
                opticsid = 2;
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "AOTT";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 3;
                opticsppeffects[] = {};
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.22;
};


class hlc_optic_VOMZ : optic_lrps {
    dlc = "Niarms_Core";
    author = "Toadie";
    descriptionshort = "VOMZ Pilad P3 <br />Magnification: 3.5x";
    model = "hlc_core\mesh\accessories\sights\VOMZ_p3.p3d";
    displayname = "VOMZ Pilad P3(2D)";
    picture = "\hlc_core\tex\ui\gear_vomz_ca";
    inertia = 0.05;
    class ItemInfo : ItemInfo {
        mass = 11;
        class OpticsModes {
            class Snip {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.249 / 3.5;
                opticsZoomMax = 0.249 / 3.5;
                opticsZoomInit = 0.249 / 3.5;
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
                discreteDistanceInitIndex = 3;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "opticview";
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\VOMZ_PU_3,5x" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron : Snip {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = { "", "" };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                __OPTICSZOOM_1X;
                memoryPointCamera = "eye2";
                visionMode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
class hlc_optic_VOMZ3d :hlc_optic_VOMZ
{
    author = "Toadie";
    displayname = "VOMZ Pilad P3";
    class ItemInfo : ItemInfo {
        class OpticsModes {
            class Snip {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.249 / 3.5;
                opticsZoomMax = 0.249 / 3.5;
                opticsZoomInit = 0.249 / 3.5;
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
                discreteDistanceInitIndex = 3;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "eye";
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 0;
                cameraDir = "";
            };
            class Iron : Snip {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = { "", "" };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                __OPTICSZOOM_1X;
                memoryPointCamera = "eye2";
                visionMode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
};

class hlc_optic_HensoldtZO_Hi : optic_aco
{
    dlc = "Niarms_Core";
    scope = public;
    author = "Toadie";
    descriptionshort = "Hensoldt(Zeiss) ZO 4x30 Combat Optic <br />Magnification: 4x";
    displayname = "Hensoldt ZO (Riser)";
    picture = "\hlc_core\tex\ui\gear_zo-hi_ca";
    weaponInfoType = "RscWeaponZeroing";
    model = "hlc_core\mesh\accessories\sights\ZO_HI.p3d";
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        mass = 6;
        __OPTIC_DMR;
        modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZO_reticle.p3d";
        class OpticsModes
        {
            class Snip
            {
                useModelOptics = 0;
                cameradir = "look_dir";
                opticsZoomMin = 0.06225;
                opticsZoomMax = 0.06225;
                opticsZoomInit = 0.06225;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                discreteDistance[] = { 200 };
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memoryPointCamera = "eye";
                modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\ZO_reticle.p3d" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsid = 1;
                opticsDisablePeripherialVision = 1;
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "AOTT";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.06;
    tmr_optics_enhanced = 0;
};
class hlc_optic_HensoldtZO_Hi_2D : hlc_optic_HensoldtZO_Hi
{
    descriptionshort = "Hensoldt(Zeiss) ZO 4x30 Combat Optic <br />Magnification: 4x";
    displayname = "Hensoldt ZO (Riser/2D)";
    class ItemInfo :ItemInfo
    {
        class OpticsModes :OpticsModes
        {
            class Snip : Snip
            {
                useModelOptics = 1;
            };
            class Kolimator : Kolimator{};
        };
    };
};
class hlc_optic_HensoldtZO_Hi_Docter : hlc_optic_HensoldtZO_Hi
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO (Riser/RDS)";
    picture = "\hlc_core\tex\ui\gear_zo-hi-doc_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_Hi_Docter.p3d";
};
class hlc_optic_HensoldtZO_Hi_Docter_2D : hlc_optic_HensoldtZO_Hi_2D
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO (Riser/RDS/2D)";
    picture = "\hlc_core\tex\ui\gear_zo-hi-doc_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_Hi_Docter.p3d";
};
class hlc_optic_HensoldtZO_Lo :hlc_optic_HensoldtZO_Hi
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO";
    picture = "\hlc_core\tex\ui\gear_zo-lo_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_Lo.p3d";
};
class hlc_optic_HensoldtZO_Lo_2D : hlc_optic_HensoldtZO_Hi_2D
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO (2D)";
    picture = "\hlc_core\tex\ui\gear_zo-lo_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_Lo.p3d";
};
class hlc_optic_HensoldtZO_lo_Docter : hlc_optic_HensoldtZO_lo
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO (RDS)";
    picture = "\hlc_core\tex\ui\gear_zo-lo-doc_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_lo_Docter.p3d";
};
class hlc_optic_HensoldtZO_lo_Docter_2D : hlc_optic_HensoldtZO_lo_2D
{
    dlc = "Niarms_Core";
    author = "Toadie";
    displayname = "Hensoldt ZO (RDS/2D)";
    picture = "\hlc_core\tex\ui\gear_zo-lo-doc_ca";
    model = "hlc_core\mesh\accessories\sights\ZO_lo_Docter.p3d";
};

class hlc_optic_KernBase : optic_aco
{
    dlc = "Niarms_Core";
    scope = public;
    author = "Toadie";
    descriptionshort = "Kern 4x24 Zielfernrohr <br />Magnification: 4x";
    displayname = "Kern AARAU 4x24";
    picture = "hlc_core\tex\ui\gear_aarau_x_ca";
    weaponInfoType = "RscWeaponZeroing";
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        mass = 8.8;
        __OPTIC_DMR;
        modelOptics = "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d";
        class OpticsModes
        {
            class Snip
            {
                useModelOptics = 1;
                cameradir = "";
                opticsZoomMin = 0.06225;
                opticsZoomMax = 0.06225;
                opticsZoomInit = 0.06225;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 800;
                memoryPointCamera = "eye2";
                modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsid = 1;
                opticsDisablePeripherialVision = 1;
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "AOTT";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.04;
    tmr_optics_enhanced = 0;
};
class hlc_optic_ZF4xBase : optic_aco
{
    dlc = "Niarms_Core";
    scope = public;
    author = "Toadie";
    descriptionshort = "Hensoldt ZF 4x<br />Magnification: 4x";
    displayname = "FN STANAG 4x28";
    picture = "\hlc_core\tex\ui\gear_fnstanag_ca";
    weaponInfoType = "RscWeaponZeroing";
    class ItemInfo : InventoryOpticsItem_Base_F
    {
        mass = 7.7;
        opticType = 2;
        optics = 1;
        modelOptics = "hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
        class OpticsModes
        {
            class Snip
            {
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 600;
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics" };
                memoryPointCamera = "eye";
                cameradir = "";
                opticsZoomMin = 0.06225;
                opticsZoomMax = 0.06225;
                opticsZoomInit = 0.06225;
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsid = 1;
                opticsDisablePeripherialVision = 1;
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "AOTT";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.04;
    tmr_optics_enhanced = 0;
};
class HLC_optic_DocterR : optic_Arco {
    dlc = "Niarms_Core";
    author = "Toadie";
    descriptionshort = "Docter Red Dot Sight<br />Magnification: None";
    displayname = "Docter RDS";
    model = "hlc_core\mesh\accessories\sights\Docter_RIS.p3d";
    picture = "\hlc_core\tex\UI\gear_docter_ca.paa";
    class ItemInfo : InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty";
        optics = 0;
        class OpticsModes
        {
            class ACO
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "RDeye";
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                cameraDir = "";
                visionMode[] = {};
                opticsPPEffects[] = { "Default" };
            };
        };
    };
    tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
};
class hlc_optic_ZF95Base : optic_lrps
{
    dlc = "Niarms_Core";
    author = "Toadie";
    descriptionshort = "Kahles ZF95 with NATO Rangefinding Reticle<br />Magnification: 6x";
    displayname = "Kahles ZF95";
    model = "hlc_core\mesh\accessories\sights\ZF95.p3d";
    picture = "\hlc_core\tex\ui\gear_ZF95_ca";
    scope = public;
    __OPTIC_DMR;
    inertia = 0.052;
    class ItemInfo : ItemInfo
    {
        mass = 14.54;
        class OpticsModes
        {
            class Snip
            {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.249 / 6;
                opticsZoomMax = 0.249 / 6;
                opticsZoomInit = 0.0249;
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                discreteDistanceInitIndex = 4;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                memoryPointCamera = "eye";
                modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\NATORangefinder_ZF95_6x" };
                visionMode[] = { "Normal" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron : Snip
            {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = { "", "" };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                __OPTICSZOOM_1X;
                memoryPointCamera = "eye2";
                visionMode[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
//V is for Vanilla. 
class HLC_optic_DocterV : optic_Arco {
    dlc = "Niarms_Core";
    author = "Toadie";
    descriptionshort = "Docter Red Dot Sight For Pistols<br />Magnification: None";
    displayname = "Docter RDS";
    model = "hlc_core\mesh\accessories\sights\docter.p3d";
    picture = "\hlc_core\tex\UI\gear_docter_ca.paa";
    class ItemInfo : InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty";
        optics = 0;
        class OpticsModes
        {
            class ACO
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "RDeye";
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 50;
                distanceZoomMax = 50;
                cameraDir = "";
                visionMode[] = {};
                opticsPPEffects[] = { "Default" };
            };
        };
    };
    tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
};
class HLC_optic_RomeoV : optic_Arco {
    dlc = "Niarms_Core";
    author = "Toadie";
    descriptionshort = "Docter Red Dot Sight For Pistols<br />Magnification: None";
    displayname = "Romeo1 RDS";
    model = "hlc_core\mesh\accessories\sights\romeo1.p3d";
    picture = "\hlc_core\tex\UI\gear_romeo1_ca.paa";
    class ItemInfo : InventoryOpticsItem_Base_F {
        mass = 4;
        modelOptics = "\A3\Weapons_F\empty";
        optics = 0;
        class OpticsModes
        {
            class ACO
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "RDeye";
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 50;
                distanceZoomMax = 50;
                cameraDir = "";
                visionMode[] = {};
                opticsPPEffects[] = { "Default" };
            };
        };
    };
    tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
};