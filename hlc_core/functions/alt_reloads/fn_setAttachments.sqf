/*
	Author: Kerc, original by Laxemann

	Description:
        Sets appropriate attachments for weapon

  Parameters:
        unit, weapon, attachments (array)

	Returns:
        Nothing


    Example:
        [_unit,_fakeWeapon,_attachments] call NIArms_altReloads_fnc_setAttachments;
*/
params [
	"_unit",
	"_weapon",
	"_attachments" // Array!
];


if (_weapon == primaryWeapon _unit) then {
	private _dummyArray = _attachments select {
		_unit addPrimaryWeaponItem _x;
		false;
	};
} else {
	if (_weapon == handgunWeapon player) then {
		_unit addHandgunItem _x;
		false;
	};
};
