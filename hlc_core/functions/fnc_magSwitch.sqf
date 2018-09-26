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

if !(_weapon isEqualTo primaryWeapon _unit) exitWith {
    LOG("only support primary weapon for now");
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

//save unit loadout
private _loadout = getUnitLoadout _unit;
/*
[
     [
          "arifle_MX_GL_F","muzzle_snds_H","acc_pointer_IR","optic_Aco",    //Primary weapon, (weapon items) silencer, pointer, optic
          ["30Rnd_65x39_caseless_mag",30],    //Loaded mag in primary muzzle, ammo count
          ["1Rnd_HE_Grenade_shell",1],     //Loaded mag in secondary muzzle, ammo count
          ""     //Bipod
     ],
     [],     //Secondary weapon info (see primary above)
     [     //handGun info (see primary above)
          "hgun_P07_F","","","",
          ["16Rnd_9x21_Mag",16],
          [],
          ""
     ],
     [     //Uniform
          "U_B_CombatUniform_mcam",     //Uniform Type
          [     //Uniform Items
               ["FirstAidKit",1],     //Type, count
               ["30Rnd_65x39_caseless_mag",30,2],     //Magazines are Type, ammo, count - Arma version 1.64> is Type, count, ammo
          ]
     ],
     [     //Vest Info
          "V_PlateCarrierGL_rgr",     //Vest Type
          [     //Vest Items
               ["30Rnd_65x39_caseless_mag",30,3]
          ]
     ],
     [],     //Backpack Info (follows same layout as above for Uniform and Vest
     "H_HelmetSpecB_blk",     //Helmet
     "G_Tactical_Clear",     //Facewear glasses/bandanna etc
     ["Binocular","","","",[],[],""],,     //Weapon Binocular (follows same layout as other weapons above)
     ["ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"]    //AssignedItems ItemGPS can also be a UAV Terminal
]
*/

//swap weapon in loadout
private _primary_loadout = _loadout select 0;
_primary_loadout set [0, _newWeapon];
_loadout set [0, _primary_loadout];

//apply modified loadout
_unit setUnitLoadout _loadout;

// restore mode, light state
if (isNull objectParent _unit) then { 
    [_unit, _newWeapon, _cwm] spawn CBA_fnc_selectWeapon; //this function wouldn't work for units reloading while inside vehicles
};
call {
    if (_isFLOn) exitWith {_unit action ["GunLightOn", _unit];};
    if (_isIROn) exitWith {_unit action ["IRLaserOn", _unit];};
}

LOG("DONE");
