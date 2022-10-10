/*
	Author: Toadie
    Logic based on code by Robalo
	Description:
        "Adds Integrated Laser Function as accessory rail item,
        when slot is free, removes if it detects the optic no longer attached ClosedInventory EH";

    Usage:
        Init EH
*/
#include "\x\cba\addons\main\script_macros_common.hpp"
#define DEBUG_MODE_FULL
#define COMPONENT core
#define __GRIPSWITCHFLAGNAME "NIA_GripWeapon"
if (!niarms_gripSwitch) exitWith {}; // Exit if disabled

params ["_unit"];
//params [["_unit",(call nia_fnc_findPlayer)]];
//if (!isPlayer _unit) exitWith {}; // just bail out for non players
#define DEBUG_MODE_FULL
private _primarywep = primaryWeapon _unit; //Player primaryWeapon
private _primarygrip = (primaryWeaponItems _unit) select 3; //Player
private _basewep = (toLower(getText (configFile >> "cfgWeapons" >> _primarywep >> "baseWeapon")));
private _griptype = (toLower(getText (configFile >> "cfgWeapons" >> _primarygrip >> "NIA_grip_type")));
//private _primarygripflag = (getText (configFile >> "cfgWeapons" >> _primarywep >> __GRIPSWITCHFLAGNAME)); //YALL I FUCKING SOLVED IT. NEED A FLAG IN THE GRIP WEAPONS. 
//============================
// VALID GRIP TYPES
//----------------------------
// "VFG"
// "AFG"
// "VFG2" - FOR USE Cases where an Aternative VFG posture is needed
// "GRIP" - Extra Variable in case on later need
//  === CAN BE EXTENDED IF NEEDED (CURRENTLY NOT NEEDED) ===
//============================
/*
// Old Logic. Done by a Fool
private _rhsgriptype = (getText (configFile >> "cfgWeapons" >> _primarygrip >> "RHS_grip_type"));
if !(_primarywep == "") then {
    if(_primarygrip == "") exitwith {systemChat "No Underslot, Exiting"};
    // If the grip type has been delcared
    if !(_griptype == "") then {
        // If the grip has not type declared under the RHS Grip system, We can execute
        if (_rhsgriptype == "") then {
            systemChat format ["Enter Switch Logic:%1 with %2",_primarywep,_primarygrip];
            [_unit,_primarywep,_basewep,_primarygrip,_griptype] call Niarms_fnc_gripSwitch;
        } 
        else { 
            exitwith {systemChat "Grip define under RHS,Exiting" };
        };  
    }    
    else { 
        exitwith {systemChat "Underslot not Grip,Exiting" };
    };

};*/
// Reworked Logic by Bismarck, Absolute Chad. 
// Then worked further again by me, a fool, once again.
#define __GRIPSWITCHCLASSNAME "nia_gripSwitch"

private _rhsgriptype = (toLower(getText (configFile >> "cfgWeapons" >> _primarygrip >> "RHS_grip_type")));
private _basewepgriptype = (toLower(getText (configFile >> "cfgWeapons" >> _basewep >> __GRIPSWITCHCLASSNAME>>_griptype)));
private _griptypedefault =(toLower(getText(configFile >> "cfgWeapons" >> _basewep >> __GRIPSWITCHCLASSNAME>> "Default")));

scopeName "firmly_grasp_it";
//if the player's weapon is the base weapon
if (_primarywep == _basewep) then {
    /*systemchat "PW is BW";*/
    //If playerweapon is basweapon and there is not grip, we out. 
    if (_primarygrip == "") then {/*systemChat "No Grip";*/breakOut "firmly_grasp_it";}
    else { /*systemChat "Has grip"; */
        if (_griptype == "") then { /*systemChat "No Griptype in underslot, Exiting";*/ breakOut "firmly_grasp_it";};
        if (_basewepgriptype == "") then { /*systemChat "No Griptype in baseweapon, Exiting";*/ breakOut "firmly_grasp_it";};
        // If the grip has not type declared under the RHS Grip system, We can execute
        if (_rhsgriptype == "") then {
            /*systemChat format [/*"Enter Grip-Switch Logic:%1 with %2",_primarywep,_primarygrip]*/;
            [_unit,_primarywep,_basewep,_primarygrip,_griptype] call Niarms_fnc_gripSwitch;
        } else { 
            /*systemChat "Grip define under RHS,Exiting";*/
            breakOut "firmly_grasp_it";
        };
        };
} else { 
    /*systemchat "PW is not BW";
    systemchat str(_griptypedefault);*/
    if (_griptypedefault == "") then {
            /*systemChat "No Griptype in baseweapon, Exiting";*/
            breakOut "firmly_grasp_it";} 
            else {
                if (_primarygrip == "") then {/*systemChat format ["Enter Grip-Switch Logic:%1 with %2",_primarywep,_primarygrip];*/
            [_unit,_primarywep,_basewep,"","default"] call Niarms_fnc_gripSwitch;} else 
                {
                    /*systemChat "Grip still attached,Exiting";*/
                    breakOut "firmly_grasp_it";
                };
            };
};


