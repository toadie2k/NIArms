/*
	Author: Robalo

	Description:
        Generates Niarms specific __WEAPONHOLDER macro lines from existing configured weapons into the clipboard

    Usage:
        dlc call Niarms_fnc_genWeaponHolders

    Parameters:
        String dlc

	Returns:
        Nothing
        Config generated put into the clipboard

    Example:
        "Niarms_AUG" call Niarms_fnc_genWeaponHolders
*/

params ["_dlc"];
private _br = toString [13,10];//(carriage return & line feed)
private _ar = [];
{
    private _weapon = configName _x;
	private _mag = ((getarray (_x>>'magazines')) select {getnumber (configfile>>'cfgmagazines'>>_x>>'scope') == 2}) select 0;
    private _displayname = gettext (_x>>'displayname');
    _ar pushback format ["    __WEAPONHOLDER(%1,%2,%3,%4,Toadie,AssaultRifles);",_weapon,_mag,_displayname,_dlc];
} forEach (("isclass _x && {getNumber (_x>>'scope') == 2} && {getText (_x>>'dlc') == _dlc}") configclasses (configfile>>'cfgweapons'));

private _string = _ar joinString _br;
copyToClipboard (_string + _br);
