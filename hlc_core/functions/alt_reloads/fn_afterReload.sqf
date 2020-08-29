/*
	Author: Kerc
	Description:
        Reloaded EH, switches the weapon back to the original after the reload has been completed.
  Parameters:
		entity: Object - unit or vehicle to which EH is assigned
		weapon: String - weapon that got reloaded
		muzzle: String - weapons muzzle that got reloaded
		newMagazine: Array - new magazine info in format [magazineClass, ammoCount, magazineID, magazineCreator], where:
		magazineClass: String - class name of the magazine
		ammoCount: Number - amount of ammo in magazine
		magazineID: Number - global magazine id
		magazineCreator: Number - owner of the magazine creator
		(oldMagazine): Array - old magazine that was in the muzzle before. Could be Nothing if muzzle was empty prior to reload event. Format is the same as for the newMagazine.
	Returns:
        Nothing
    Example:
        _this call NIArms_altReloads_fnc_afterReload;
*/
params [
	"_unit",
	"_weapon",
	"",
	"_newMagazine",
	"_oldMagazine"
];
if (_unit getvariable ["NIArms_altReloads_disabled",false]) exitwith {};
private _tempReloadWeapon = _unit getvariable ["NIArms_altReloads_tempReloadWeapon",nil];
private _previousWeapon = _unit getvariable ["NIArms_altReloads_previousWeapon",nil];


if (!isNil "_tempReloadWeapon" &&  {((_weapon) == _tempReloadWeapon)}) then
{
	_oldMagazine params ["_oldmag","_oldammo"];
	_newMagazine params ["_mag","_ammo"];
	private _attachments = [_unit,_tempReloadWeapon] call NIArms_altReloads_fnc_getAttachments;
	_unit setvariable ["NIArms_altReloads_tempReloadWeapon",nil];
	_unit setvariable ["NIArms_altReloads_previousWeapon",nil];
	_unit addmagazine [_oldMag,_oldammo];
	_unit removeWeapon _weapon;
	private ["_tempMag","_tempAmmo"];
	_unit addWeapon _previousWeapon;
	switch (_previousWeapon) do
	{
		case (primaryWeapon _unit):
		{
			_tempMag = (primaryweaponMagazine _unit select 0);
 			_tempAmmo = _unit ammo _previousWeapon;
			_unit removePrimaryWeaponItem (currentMagazine _unit);
			_unit addprimaryweaponitem _mag;
		};
		case (secondaryWeapon _unit):
		{
			_tempMag = (secondaryWeaponMagazine _unit select 0);
			_tempAmmo = _unit ammo _previousWeapon;
			_unit removesecondaryWeaponItem (currentMagazine _unit);
			_unit addsecondaryweaponitem _mag;
		};
		case (handgunweapon _unit):
		{
			_tempMag = (handgunMagazine _unit select 0);
			_tempAmmo = _unit ammo _previousWeapon;
			_unit removeHandgunItem (currentMagazine _unit);
			_unit addhandgunitem _mag;
		};
	};




	[_unit,_previousWeapon,_attachments] call NIArms_altReloads_fnc_setAttachments;
	_unit setWeaponReloadingTime [_unit, _previousWeapon, 0];
	_unit selectWeapon _previousWeapon;
	_unit setammo [_previousWeapon,_ammo];
	_unit addmagazine [_tempMag,_tempAmmo];
	[_unit, _previousWeapon, (_unit getVariable ["NIArms_altReloads_lastfireMode",""])] call CBA_fnc_selectWeapon;
	_unit setvariable ["NIArms_altReloads_isReloading",false];

};
_unit setvariable ["NIArms_altReloads_isReloading",false];