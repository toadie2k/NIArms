/*
	Author: Robalo

	Description:
        Replaces weapon model (internal use)

    Usage:
        Reloaded EH

    Parameters:
        https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded

	Returns:
        Nothing
*/


/* notes

must keep ammo count (no cheating)
must keep attachments

*/
//#define DEBUG_MODE_FULL
#define COMPONENT core
#include "\hlc_core\script_mod.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#define __MAGSWITCHCLASSNAME "nia_magSwitch"
#define __cfgWeapons configfile >> "CfgWeapons"

if (!niarms_magSwitch) exitWith {}; // Exit if disabled

params ["_unit", "_weapon", "_muzzle", "_newmag", ["_oldmag", ["","","",""]]];

if (!isPlayer _unit) exitWith {}; //don't care about this on the AI for now

TRACE_1("PARAMS",_this);

if !(_weapon isEqualTo _muzzle) exitWith {}; //no support for extra muzzles yet
if (!local _unit || _weapon isEqualTo "") exitWith {}; //should not happen but just in case

_newmag params ["_newmagtype", "_newmagcapacity"];
_oldmag params ["_oldmagtype"];

if (_newmagtype isEqualTo _oldmagtype) exitWith {
    LOG("loaded mag of same kind, no change");
};

//get weapon type and it's attachments
private "_weaponItems";
private _currWeaponType = call {
    if (_weapon isEqualTo primaryWeapon _unit) exitWith {_weaponItems = primaryWeaponItems _unit; 1};
    if (_weapon isEqualTo handgunWeapon _unit) exitWith {_weaponItems = handgunItems _unit; 2};
    if (_weapon isEqualTo secondaryWeapon _unit) exitWith {_weaponItems = secondaryWeaponItems _unit; 4};
    _weaponItems = "";
    -1
};
if (_currWeaponType < 0) exitWith {
    LOG("reloaded a grenade or something else, not a weapon");
};

//get weapon class corresponding with loaded magazine
private _newWeapon = (__cfgWeapons >> _weapon >> __MAGSWITCHCLASSNAME >> _newmagtype) call bis_fnc_getcfgdata;
if (isNil "_newWeapon") then {
    _newWeapon = [(__cfgWeapons >> _weapon >> __MAGSWITCHCLASSNAME), "default", _weapon] call BIS_fnc_returnConfigEntry;
};

TRACE_2("",_weapon,_newWeapon);

if (_newWeapon isEqualTo _weapon) exitWith {
    LOG("same weapon, no change");
};

//save current state
private _cwm = currentWeaponMode _unit;
private _isFLOn = _unit isFlashlightOn _weapon;
private _isIROn = _unit isIRLaserOn _weapon;

//swap weapon then re-add magazine and attachments
_unit removeWeapon _weapon;
_unit addWeapon _newWeapon;
_unit addWeaponItem [_newWeapon, [_newmagtype, _newmagcapacity]];
{ if (_x != "") then {_unit addWeaponItem [_newWeapon, _x]} } forEach _weaponItems;

if (isNull objectParent _unit) then { 
    [_unit, _newWeapon, _cwm] spawn CBA_fnc_selectWeapon; //this function wouldn't work for units reloading while inside vehicles
};
call {
    if (_isFLOn) exitWith {_unit action ["GunLightOn", _unit]};
    if (_isIROn) exitWith {_unit action ["IRLaserOn", _unit]};
}
LOG("DONE");
