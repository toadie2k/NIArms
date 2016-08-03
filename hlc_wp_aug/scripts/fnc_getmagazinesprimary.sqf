/*
	Author: Kerc
	
	Description:
	Gathers the current magazines and their ammo count + location into an array
	
	Parameters:
		_this select 0: OBJECT - Unit in question


	Example:
		[player] call bg_fnc_getmagazinesprimary
	
	Returns:
	Array of all the primary weapons magazines, first magazine is the currently loaded one
*/

_unit = _this select 0;

//if (!isplayer _unit) exitwith {false};

//Gather equipment
_primaryweapon = primaryweapon _unit;


_magazine_types_array = getArray (configFile >> "CfgWeapons" >> _primaryweapon >> "magazines"); // Find the magazines we care about - no need to go removing and readding mags that we don't need to mess with.

//Gotta do this shitty workaround to get their currently loaded magazines
_allmags = magazinesAmmoFull _unit;
private ["_primmag","_loadedprimmag_Array"];
_primmag = [];
{
	if ((_x select 4) == _primaryweapon) then //We want the first magazine in the array to be the one currently loaded in the rifle so we dont give the player a free reload.
	{
		_primmag = [[(_x select 0),(_x select 1),false]] + _primmag;
	}
	else
	{
		if ((_x select 3) == 1 || (_x select 3) == -1) then 
		{
			if ((_x select 4) == "Backpack") then //Stuff in the backpack goes back in the backpack, can't do it for vests etc until BIS actually add commands that allow you to set the ammo count of magazines in vests/uniform
			{
				_primmag pushback [(_x select 0),(_x select 1),true];
			}
			else
			{
				_primmag pushback [(_x select 0),(_x select 1),false];
			};
		};
	};
} foreach _allmags;


_primmag