class Extended_PreInit_EventHandlers {
    class nia_core {
        init = "call compile preprocessFileLineNumbers 'XEH_preInit.sqf'";
    };
};

class Extended_Reloaded_EventHandlers {
    class CAManBase {
        class nia_core {
            clientReloaded = "_this call Niarms_fnc_magSwitch";
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
