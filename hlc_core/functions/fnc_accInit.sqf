/*
	Author: Robalo

	Description:
        Replaces weapon model on initialization (internal use)

    Usage:
        Init EH
*/

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit"];
if (!isPlayer _unit) exitWith {}; // just bail out for non players

private _pw = primaryWeapon _unit;
private _pg = (primaryWeaponItems _p) select 3;
private _t = (getText (configFile >> "cfgWeapons" >> (primaryWeapon _p) >> "baseWeapon"));
if !(_pw isEqualTo "") then {
    if(!(_pg isEqualTo ""))then{
		//systemChat format["exit %1 %2",_g, primaryWeaponItems _p];
		[_unit, _pw, _acc] call Niarms_fnc_accSwitch;
        systemChat "Switching";
	};
    else
    {
        [_unit, _t, _acc] call Niarms_fnc_accSwitch;
        systemChat "Unswitching";
    };
    
};
