/*
	Author: Kerc

	Description:
        Fired when player presses reload button, handles playing different animations depending on amount of ammunition left in current magazine.

  Parameters:
        Doesn't need any, can be run from Reload EH but is broken, don't use it.
	Returns:
        Nothing


    Example:
        [] call NIArms_altReloads_fnc_onReload;
*/
params [["_unit",(player)], ["_weapon",(currentWeapon player)], ["_muzzle",(currentMuzzle player)], "_newMagazine", ["_oldMagazine",(currentMagazine player)]];
private ["_oldAmmo","_oldMag"];
if (NIArms_altReloads_isReloading) exitwith {};
if (_oldMagazine isEqualType []) then
{
  _oldMag = _oldMagazine select 0;
  _oldAmmo = _oldMagazine select 1;
}
else
{
  _oldAmmo = _unit ammo _weapon;
  _oldMag  = _oldMagazine;
};
private _conditionAmmo = _oldAmmo;
if (!isNil "_newMagazine" &&  {_newMagazine isEqualType []}) then
{
  if ((getText (configFile >> "CfgMagazines" >> _oldMag >> "ammo")) != (getText (configFile >> "CfgMagazines" >> (_newMagazine select 0) >> "ammo"))) exitwith {_conditionAmmo = (getNumber (configFile >> "CfgMagazines" >> _oldMag >> "count"));};
}; //Switching ammo type, do full reload, might want to change this depending on magazine type/weapon

private _fakeWeapon = _weapon;
if !(isClass (configFile >> "CfgWeapons" >> _weapon >> "NIArms_Alt_Reloads")) exitwith {};



{
	private _condition = call compile format [(getText (_x >> "condition")),_conditionAmmo];
	if (_condition) exitwith {_fakeWeapon = (configName _x);};
} foreach ("true" configClasses (configFile >> "CfgWeapons" >> _weapon >> "NIArms_Alt_Reloads"));

if (_fakeWeapon == _weapon) exitwith {};

NIArms_altReloads_isReloading = true;
private _magazinesOfWeaponType = getArray(configFile >> "CfgWeapons" >> _weapon >> "magazines");


private _attachments 	= [_unit,_weapon] call NIArms_altReloads_fnc_getAttachments;

private _fireMode = currentWeaponMode _unit;
_unit setVariable ["NIArms_altReloads_lastfireMode",_fireMode];

private _allMagazinesUnit = magazinesAmmoFull _unit;
_allMagazinesUnit sort false;

//We have to do this the old shitty way instead of 'add*weapon*item' as it seems to trigger the animation breaking, while having it autoload a magazine upon 'addweapon' does not
_unit removeWeapon _weapon;
{
  _unit removeMagazines _x
} forEach _magazinesOfWeaponType;
_unit addmagazine [_oldMag,_oldammo];
_unit addWeapon _fakeWeapon;





[_unit,_fakeWeapon,_attachments] call NIArms_altReloads_fnc_setAttachments;
_unit selectWeapon _fakeWeapon;
_unit setWeaponReloadingTime [_unit, _fakeWeapon, 0];

//Hacky work around inbound, brace for impact
private ["_newMag","_newAmmo"];
if (!isNil "_newMagazine" &&  {_newMagazine isEqualType []}) then
{
  _newMag  = _newMagazine select 0;
  _newAmmo = _newMagazine select 1;
}
else
{
  {
    	_x params ["_magazineClass","_magazineAmmoCount","_isMagazineLoaded"];
      if (_magazineClass in _magazinesOfWeaponType && !_isMagazineLoaded) exitwith
      {
        _newMag  = _magazineClass;
        _newAmmo = _magazineAmmoCount;
        _allMagazinesUnit deleteat _foreachIndex;
      };
  } foreach _allMagazinesUnit
};
_unit addMagazine [_newMag,_newAmmo];
private _indexNum = 0;
{
  if (_x isequalTo [_newMag,_newAmmo]) exitwith {_indexNum = _forEachIndex;};
} foreach magazinesammo _unit;
private _magazinesDetail = magazinesdetail _unit;
private _string = (_magazinesDetail select _indexNum) splitString "[:/]";
private _id = parseNumber(_string select 4);
private _creator = parseNumber(_string select 5);
_unit action ["loadmagazine",_unit, _unit, _creator, _id ,_fakeWeapon, _fakeWeapon];

NIArms_altReloads_tempReloadWeapon = _fakeWeapon;
NIArms_altReloads_previousWeapon = _weapon;


private "_container";
{
	_x params ["_magazineClass","_magazineAmmoCount","_isMagazineLoaded","","_magazineContainer"];

  if (!(_isMagazineLoaded)) then
	{
		//is magazine from old weapon, replace magazine
		if (({_x == _magazineClass} count _magazinesOfWeaponType) > 0) then
		{
			_container = switch (_magazineContainer) do
			{
				case "Uniform":		{uniformContainer _unit};
				case "Vest":		{vestContainer _unit};
				case "Backpack":	{backpackContainer _unit};
				default			{objNull};
			};

			if (!(isNull _container)) then
			{
				_container addMagazineAmmoCargo [_magazineClass,1,_magazineAmmoCount];
			};
		};
	};
} forEach _allMagazinesUnit;
