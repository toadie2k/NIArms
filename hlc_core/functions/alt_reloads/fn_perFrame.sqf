/*
	Author: Kerc, original by Laxemann

	Description:
        Perframe check for input

  Parameters:
        None
	Returns:
        Nothing


    Example:
        NIArms_altReloads_Handler = [NIArms_altReloads_fnc_perFrame,0] call CBA_fnc_addPerFrameHandler;
*/
if !(NIArms_altReloads_isReloading) then {
	if (inputAction "reloadMagazine" > 0) then {
		[] call NIArms_altReloads_fnc_onReload;
	};
};
