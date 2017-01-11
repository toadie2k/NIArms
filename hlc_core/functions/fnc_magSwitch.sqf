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
#define DEBUG_MODE_FULL
#define COMPONENT core
#include "\hlc_core\script_mod.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#define __MAGSWITCHCLASSNAME "nia_magSwitch"
#define __cfgWeapons configfile >> "CfgWeapons"

params ["_unit", "_weapon", "_muzzle", "_newmag", ["_oldmag", ["","","",""]]];

if (!isPlayer _unit) exitWith {}; //don't care about this on the AI for now

TRACE_1("PARAMS",_this);

if (!local _unit || _weapon == "") exitWith {}; //should not happen but just in case

_newmag params ["_newmagtype", "_newmagcapacity"];
_oldmag params ["_oldmagtype"];

if (_newmagtype == _oldmagtype) exitWith {
    LOG("loaded mag of same kind, no change");
};

//get weapon type and it's attachments
private "_weaponItems";
private _currWeaponType = call {
    if (_weapon == primaryWeapon _unit) exitWith {_weaponItems = primaryWeaponItems _unit; 1};
    if (_weapon == handgunWeapon _unit) exitWith {_weaponItems = handgunItems _unit; 2};
    if (_weapon == secondaryWeapon _unit) exitWith {_weaponItems = secondaryWeaponItems _unit; 4};
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

if (_newWeapon == _weapon) exitWith {
    LOG("same weapon, no change");
};

//save current mode
private _cwm = currentWeaponMode _unit; 

//save current mag loadout
private _magLoadout = magazinesAmmoFull _unit;
/*
Magazine format:
0: Magazine class name
1: Magazine current ammo count
2: Magazine state (true - loaded, false - not loaded)
3: Magazine type (-1 - n/a, 0 - grenade, 1 - primary weapon mag, 2 - handgun mag, 4 - secondary weapon mag, 65536 - vehicle mag)
4: Magazine location ("Vest", "Uniform", "Backpack", "") or corresponding currentMuzzle

[
	["30Rnd_65x39_caseless_mag",30,false,-1,"Uniform"],
	["30Rnd_65x39_caseless_mag",30,false,-1,"Vest"],
	["16Rnd_9x21_Mag",16,false,-1,"Vest"],
	["SmokeShellGreen",1,true,0,"SmokeShellGreenMuzzle"],
	["Chemlight_green",1,true,0,"ChemlightGreenMuzzle"],
	["HandGrenade",1,true,0,"HandGrenadeMuzzle"],
	["30Rnd_65x39_caseless_mag",30,true,1,"arifle_MX_ACO_pointer_F"],
	["16Rnd_9x21_Mag",16,true,2,"hgun_P07_F"]
]
*/

//get compatible mags; what about the mags in other muzzles ?
private "_mags";
if (_muzzle == _weapon) then {
	_mags = getArray(configFile >> "CfgWeapons" >> _weapon >> "magazines");
} else {
	_mags = getArray(configFile >> "CfgWeapons" >> _weapon >> _muzzle >> "magazines");
};
//temporarily remove all mags for this weapon; this is to ensure exactly the same mag will be loaded into the new weapon on switch
{_unit removeMagazines _x} forEach _mags;

//re-add mag that was loaded, new weapon and attachments
_unit addMagazine [_newmagtype, _newmagcapacity];
_unit removeWeapon _weapon;
_unit addWeapon _newWeapon;
[_unit, _newWeapon, _cwm] spawn CBA_fnc_selectWeapon;

switch (_currWeaponType) do {
    case 1: {
        { if (_x != "") then {_unit addPrimaryWeaponItem _x} } forEach _weaponItems;
    };
    case 2: {
        { if (_x != "") then {_unit addHandgunItem _x} } forEach _weaponItems;
    };
    case 4: {
        { if (_x != "") then {_unit addSecondaryWeaponItem _x} } forEach _weaponItems;
    };
};

//re-add the other mags into the same pockets as before
private "_container";
{
    _x params ["_magClass","_ammoCnt","_magLoaded","_magType","_magLoc"];
    if (!_magLoaded && {_magClass in _mags}) then {
        _container = switch (_magLoc) do {
            case "Uniform": {uniformContainer _unit};
            case "Vest": {vestContainer _unit};
            case "Backpack" : {backpackContainer _unit};
            default {objNull};
        };
        if (!isNull _container) then {_container addMagazineAmmoCargo [_magClass, 1, _ammoCnt]};
    };
} forEach _magLoadout;

LOG("DONE");
