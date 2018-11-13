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
if !(_pw isEqualTo "") then {
    private _pwmags = primaryWeaponMagazine _unit;
    private _oldmag = if (_pwmags isEqualTo []) then {["",0]} else {[_pwmags select 0, _unit ammo _pw]};
    [_unit, _pw, _pw, _oldmag] call Niarms_fnc_magSwitch;
};
