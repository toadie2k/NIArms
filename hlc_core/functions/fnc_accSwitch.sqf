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


#define COMPONENT core
#include "\hlc_core\script_mod.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

#define __ACCSWITCHCLASSNAME "nia_accSwitch"
#define __cfgWeapons configfile >> "CfgWeapons"
if (!nia_accSwitch) exitWith {systemChat "GripSwitch Disengaged";}; // Exit if disabled

if (!isPlayer _unit) exitWith {}; //don't care about this on the AI for now
params ["_unit", "_weapon", "_acc"];

if (!local _unit || _weapon isEqualTo "") exitWith {systemChat "Not local unit";}; //should not happen but just in case

private _griptype = (getText (configFile >> "cfgWeapons" >> _acc >> "rhs_grip_type")); //using RHS' namespace and config layout because... that way I don't need to duplicate my work. 
private _NewWeapon = (getText (configFile >> "cfgWeapons" >> _weapon >> _griptype));

if (_NewWeapon isEqualTo _weapon) exitWith {
    systemChat "No Switch neccessary";
};

//save current state
private _cwm = currentWeaponMode _unit;
private _isFLOn = _unit isFlashlightOn _weapon;
private _isIROn = _unit isIRLaserOn _weapon;

//swap weapon in loadout
private _primary_loadout = _loadout select 0;
_primary_loadout set [0, _NewWeapon];
_loadout set [0, _primary_loadout];

//apply modified loadout
_unit setUnitLoadout _loadout;
// restore mode, light state

if (isNull objectParent _unit) then { 
    [_unit, _NewWeapon, _cwm] spawn CBA_fnc_selectWeapon; //this function wouldn't work for units reloading while inside vehicles
};
call {
    if (_isFLOn) exitWith {_unit action ["GunLightOn", _unit];};
    if (_isIROn) exitWith {_unit action ["IRLaserOn", _unit];};
}

