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
	""
];

if (!isNil "NIArms_altReloads_tempReloadWeapon" &&  {((_weapon) == NIArms_altReloads_tempReloadWeapon)}) then
{
	_newMagazine params ["_mag","_ammo"];
	private _attachments = [_unit,NIArms_altReloads_tempReloadWeapon] call NIArms_altReloads_fnc_getAttachments;
	_unit removeWeapon _weapon;
	private ["_tempMag","_tempAmmo"];
	_unit addWeapon NIArms_altReloads_previousWeapon;
	switch (NIArms_altReloads_previousWeapon) do
	{
		case (primaryWeapon _unit):
		{
			_tempMag = (primaryweaponMagazine _unit select 0);
 			_tempAmmo = _unit ammo NIArms_altReloads_previousWeapon;
			_unit removePrimaryWeaponItem (currentMagazine _unit);
			_unit addprimaryweaponitem _mag;
		};
		case (secondaryWeapon _unit):
		{
			_tempMag = (secondaryWeaponMagazine _unit select 0);
			_tempAmmo = _unit ammo NIArms_altReloads_previousWeapon;
			_unit removesecondaryWeaponItem (currentMagazine _unit);
			_unit addsecondaryweaponitem _mag;
		};
		case (handgunweapon _unit):
		{
			_tempMag = (handgunMagazine _unit select 0);
			_tempAmmo = _unit ammo NIArms_altReloads_previousWeapon;
			_unit removeHandgunItem (currentMagazine _unit);
			_unit addhandgunitem _mag;
		};
	};




	[_unit,NIArms_altReloads_previousWeapon,_attachments] call NIArms_altReloads_fnc_setAttachments;
	_unit setWeaponReloadingTime [_unit, NIArms_altReloads_previousWeapon, 0];
	_unit selectWeapon NIArms_altReloads_previousWeapon;
	_unit setammo [NIArms_altReloads_previousWeapon,_ammo];
	_unit addmagazine [_tempMag,_tempAmmo];
	NIArms_altReloads_isReloading = false;
	NIArms_altReloads_tempReloadWeapon = nil;
	NIArms_altReloads_previousWeapon = nil;
	[_unit, NIArms_altReloads_previousWeapon, (_unit getVariable ["NIArms_altReloads_lastfireMode",""])] call CBA_fnc_selectWeapon;
};
NIArms_altReloads_isReloading = false;
