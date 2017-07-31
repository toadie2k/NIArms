/*
	Author: Robalo

	Description:
        Replaces weapon model on initialization (internal use)

    Usage:
        Init EH
*/

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit"];
private _weaponMuzzle = currentMuzzle _unit;
[_unit, currentWeapon _unit, _weaponMuzzle, [currentMagazine _unit, _unit ammo _weaponMuzzle]] call Niarms_fnc_magSwitch;
