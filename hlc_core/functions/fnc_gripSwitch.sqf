/* ----------------------------------------------------------------------------
	Author: Toadie (Basic structure borrowed from Robalo)

	Description:
        Replaces weapon class based on attachment in Underslot

    Parameters:
    _unit   - Unit that has the gripped weapon 
    _weapon - The weapon with the grip 
    _acc    - The grip that needs a class switch 
	Returns:
    Nothing
    Examples:

---------------------------------------------------------------------------- */

//#define DEBUG_MODE_FULL
#define COMPONENT core
#include "\hlc_core\script_mod.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#define __GRIPSWITCHCLASSNAME "nia_gripSwitch"
#define __cfgWeapons configfile >> "CfgWeapons"

if (!nia_gripSwitch) exitWith {}; // Exit if disabled

params ["_unit", "_weapon", "_baseWeapon", "_grip","_gripType" ];

if (!isPlayer _unit) exitWith {}; // Exit if disabled

TRACE_1("PARAMS",_this);

if (!local _unit || _weapon isEqualTo "") exitWith {}; //should not happen but just in case


//get weapon class corresponding with loaded magazine
private _weaponGripFlag = ( __cfgWeapons >> _weapon >> "NIA_GripWeapon") call bis_fnc_getcfgdata;
private _newWeapon = (__cfgWeapons >> _baseWeapon >> __GRIPSWITCHCLASSNAME >> _gripType) call bis_fnc_getcfgdata;
/*systemchat str(__cfgWeapons >> _baseWeapon >> __GRIPSWITCHCLASSNAME >> _gripType);*/
TRACE_2("Target", _newWeapon);
//all this shits quoted out because I want to reowrk it. 
//if (_newWeapon isEqualTo _weapon&&_grip isEqualTo "") exitWith {/*systemChat "Weappon already matches grip type.Exiting"*/};
//if (!(_weapon isEqualto _baseWeapon)&&_grip isEqualTo ""&&_weapon isEqualTo _newWeapon) ) then { _newWeapon = _baseWeapon; };
// New clause, just in case we're being passed a weapon with no grip but need to switch still - 
/*systemchat str(_weapon);*/
/*systemchat str(_weaponGripFlag);*/
if ( !(_weaponGripFlag isEqualTo "")&&!(_weapon isEqualto _baseWeapon)&&_grip isEqualTo "") then { _newWeapon = _baseWeapon; };// else { };
//if (_newWeapon isEqualTo ""||_newWeapon isEqualTo any) exitWith {systemChat "No weapon defined to Griptype.Exiting"};
//if (_gripType isEqualTo "") exitWith {systemChat "No Griptype Found.Exiting"};


//TRACE_2("PARAMS",_this);
//systemChat format ["Detected,Switching.Current Weapon - %1 Base weapon - %2 Target - %3", _weapon,_baseWeapon,_newweapon];
//systemChat format ["Current Grip - %1 GripType - %2", _grip,_gripType];

//save current state
private _cwm = currentWeaponMode _unit;
private _isFLOn = _unit isFlashlightOn _weapon;
private _isIROn = _unit isIRLaserOn _weapon;

//save unit loadout
private _loadout = getUnitLoadout _unit;

//swap weapon in loadout
private _primary_loadout = _loadout select 0;
_primary_loadout set [0, _newWeapon];
_loadout set [0, _primary_loadout];
TRACE_3("PARAMS",_this);
//apply modified loadout
_unit setUnitLoadout _loadout;

// restore mode, light state
if (isNull objectParent _unit) then { 
    [_unit, _newWeapon, _cwm] spawn CBA_fnc_selectWeapon; //this function wouldn't work for units reloading while inside vehicles
};
call {
    if (_isFLOn) exitWith {_unit action ["GunLightOn", _unit];};
    if (_isIROn) exitWith {_unit action ["IRLaserOn", _unit];};
};
TRACE_4("PARAMS",_this);
LOG("DONE");