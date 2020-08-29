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
private _t = (getText (configFile >> "cfgWeapons" >> (primaryWeapon _unit) >> "baseWeapon"));
private _pw = primaryWeapon _unit;
if !(_pw isEqualTo "") then {
    [_unit, _pw, _pw, [(primaryWeaponMagazine _unit) select 0, _unit ammo _pw]] call Niarms_fnc_magSwitch;
};
