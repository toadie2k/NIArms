class Extended_PreInit_EventHandlers {
    class nia_core {
        init = call compile preprocessFileLineNumbers '\hlc_core\XEH_preInit.sqf';
    };
};

class Extended_Reloaded_EventHandlers {
    class CAManBase {
        class nia_core {
            clientReloaded = "_this call Niarms_fnc_magSwitch";
        };
        class nia_altReloads {
            clientReloaded = "_this call NIArms_altReloads_fnc_afterReload;";
        };
    };
};

class Extended_Take_EventHandlers {
    class CAManBase {
        class nia_core {
            clientInit = "_this call Niarms_fnc_magInit";
        };
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
        class nia_core {
            clientInit = "_this call Niarms_fnc_magInit";
        };
    };
};
