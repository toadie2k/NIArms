/*
	Author: Robalo

	Description:
        Replaces weapon model on initialization (internal use)

    Usage:
        Init EH
*/

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit"];
[
    {isNull objectParent _this}, //can't get current muzzle when unit is in vehicle, so wait until it gets out
    {private _cm = currentMuzzle _this; [_this, currentWeapon _this, _cm, [currentMagazine _this, _this ammo _cm]] call Niarms_fnc_magSwitch},
    _unit
] call CBA_fnc_waitUntilAndExecute;
