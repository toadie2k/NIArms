/*
	Author: Robalo

	Description:
        Replaces weapon model on initialization (internal use)

    Usage:
        Init EH
*/

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit"];

private _magCount = 0;
private _weaponMuzzle = currentMuzzle _unit;
{
	if (_weaponMuzzle isEqualTo (_x select 4)) exitWith {
		_magCount = _x select 1;
	};
} forEach (magazinesAmmoFull _unit);
[_unit, currentWeapon _unit, _weaponMuzzle, [currentMagazine _unit,_magCount]] call Niarms_fnc_magSwitch;
