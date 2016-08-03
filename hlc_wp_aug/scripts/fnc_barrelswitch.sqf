/*
	Author: Kerc
	
	Description:
	Changes the currently held Steyr Augs barrel to another type
	
	Parameters:
		_this select 0: OBJECT - Unit making the change
		_this select 1: STRING - Barrel classname that is being swapped in place


	Example:
		[player,"hlc_rifle_auga1carb"] spawn bg_fnc_barrelswitch; 
	
	Returns:
	Nothing
*/

_unit = _this select 0;
_replaceBarrel = _this select 1;
//if (!isplayer _unit) exitwith {false};
private ["_primaryweapon","_primaryacc","_unitBackpack","_primmag","_loadedmag"];


//Gather equipment
_primaryweapon = primaryweapon _unit;
_primaryacc = _unit weaponaccessories _primaryweapon;
_unitBackpack = unitBackpack _unit;
_weaponclasses = getArray (configFile >> "CfgWeapons" >> _primaryweapon >> "HLC_CompatibleBarrels_Classes");// Check config for compatible classes
_currentbarrel = getText (configFile >> "CfgWeapons" >> _primaryweapon >> "HLC_CurrentBarrel");
_primmag = [_unit] call hlc_fnc_getmagazinesprimary; // get magazines
_unit playActionNow "HLC_GestureSwapBarrelAUG"; //Animation for changing barrel
[_unit, "hlc_barrelswapaug"] call CBA_fnc_globalSay3d;
_unit removeitem _replaceBarrel;
sleep 4.7; 	//Same time for the animation to complete
_unit removeweapon _primaryweapon; //Remove the current weapon
_unit additem _currentbarrel;
{
	_unit removemagazine (_x select 0);
}foreach _primmag;	//Remove all magazines so we can ensure the same magazine that's already loaded will be loaded again
_loadedmag = (_primmag select 0);

_primmag deleteAt 0; //Remove the loaded mag from the array so it doesn't get added a second time
_unit addmagazine [(_loadedmag select 0),(_loadedmag select 1)];
switch (_replaceBarrel) do
{
	case "hlc_barrel_standard": {_unit addweapon (_weaponclasses select 0);};
	case "hlc_barrel_carbine": {_unit addweapon (_weaponclasses select 1);};
	case "hlc_barrel_hbar": {_unit addweapon (_weaponclasses select 2);};
	case "hlc_barrel_9mm": {_unit addweapon (_weaponclasses select 3);};
	default{_unit addweapon _primaryweapon;};
};
{

	if (_x select 2) then
	{
		_unitBackpack addMagazineAmmoCargo [(_x select 0), 1, (_x select 1)];
	}
	else
	{
		_unit addMagazine [(_x select 0), (_x select 1)];
	};

} foreach _primmag;
{
	 if !(_x == "") then
	{
		_unit addPrimaryWeaponItem _x;
	};
} foreach _primaryacc;


_unit selectweapon (primaryweapon _unit); //Need to run this otherwise they'll switch to their handgun 
