/*
	Author: Kerc, original by Laxemann

	Description:
        Gets currently fitted attachments for weapon

  Parameters:
        unit, weapon class

	Returns:
        Nothing


    Example:
        [_unit,_fakeWeapon] call NIArms_altReloads_fnc_getAttachments;
*/
params [
	"_unit",
	"_weapon"
];
private _attachments = [];

if (_weapon == primaryWeapon _unit) then {
	(primaryWeaponItems _unit) params [
		"_silencer",
		"_rail",
		"_optics",
		"_bipod"
	];
	_attachments = [_silencer,_rail,_optics,_bipod];
} else {
	if (_weapon == handgunWeapon _unit) then {
		(handgunItems _unit) params [
			"_silencer",
			"_rail",
			"_optics",
			"_bipod"
		];
		_attachments = [_silencer,_rail,_optics,_bipod];
	};
};

// Return
_attachments
