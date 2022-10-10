class CfgFunctions {
    class Niarms {
        class Misc {
            //Niarms_fnc_genWeaponHolders
            class genWeaponHolders {
                description = "Generates Niarms specific __WEAPONHOLDER macro lines from existing configured weapons into the clipboard";
                file = "\hlc_core\functions\fnc_genWeaponHolders.sqf";
            };
            //Niarms_fnc_magSwitch
            class magSwitch {
                description = "Replaces weapon model when available to match currently loaded magazine type; Reloaded EH";
                file = "\hlc_core\functions\fnc_magSwitch.sqf";
            };
            //Niarms_fnc_magInit
            class magInit {
                description = "Replaces weapon model when available to match currently loaded magazine type; Init EH";
                file = "\hlc_core\functions\fnc_magInit.sqf";
            };
            //Niarms_fnc_gripswitch
            class gripSwitch {
                description = "Replaces weapon model when available to match currently attached Underslot accessory; Init EH";
                file = "\hlc_core\functions\fnc_gripSwitch.sqf";
            };
            //Niarms_fnc_gripInit
            class gripInit {
                description = "Replaces weapon model when available to match currently attached Underslot accessory; Init EH";
                file = "\hlc_core\functions\fnc_gripInit.sqf";
            };//Niarms_fnc_findPlayer
            class findPlayer {
                description = "Find player controled unit";
                file = "\hlc_core\functions\fnc_findPlayer.sqf";
            };
        };
    };
    class NIArms_altReloads {
      class functions {
        file = "\hlc_core\functions\alt_reloads";
        class afterReload {};
        class getAttachments {};
        class onReload {};
        class perFrame {};
        class postInit {};
        class setAttachments {};
      };
    };
};
