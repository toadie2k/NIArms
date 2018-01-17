/*
	Author: Robalo

	Description:
        Replaces weapon model on initialization (internal use)

    Usage:
        Init EH
*/

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit"];
waitUntil {isNull objectParent _unit}; //can't get current muzzle when unit is in vehicle, so wait until it gets out

private _currentMuzzle = currentMuzzle _unit;
[_unit, currentWeapon _unit, _currentMuzzle, [currentMagazine _unit, _unit ammo _currentMuzzle]] call Niarms_fnc_magSwitch;
