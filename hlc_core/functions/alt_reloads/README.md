# NIArms

Alternative reloads allows you to have different model.cfg and hand gesture reload animations for a single weapon.
To achieve this you need to make multiple copies of the weapon depending on how many animation variations you want.
Once this is done you set up class names for them as you would any other weapon (keep them scope 1 obviously).

Inside the 'real' weapon config you need to define some classes, example:
```cpp
weaponInfoType = "Niarms_Rsc_AltReload_Zeroing"; //This needs to be set in the main weapon, it runs the per frame handler and stops it when its not needed.
class NIArms_Alt_Reloads //The main class, without this it won't work
{
  class LIB_LeeEnfield_No4 //A weapon class name, the class name to be used if the condition below is true
  {
    condition = "(%1 == 0 || %1 == 10)"; //Condition, %1 is the ammo in the currently loaded magazine, so in this example if the weapon is empty or full, use the default class, which will skip the system entirely.
  };
  class LIB_LeeEnfield_No4_altReload1 // Each condition is checked in order, and the first one to return true will be used, but it's good practice to keep it so only one is true.
  {
    condition = "(%1 > 6)";
  };
  class LIB_LeeEnfield_No4_altReload2
  {
    condition = "((%1 <= 6) && (%1 > 4))";
  };
};
```
If no conditions return true, it will simply default to engine reloading!

Keep the reload classes simple and identical to their parent class.
Example:
```cpp
class LIB_LeeEnfield_No4_altReload1: LIB_LeeEnfield_No4
{
  scope = 1;
  baseweapon = "LIB_LeeEnfield_No4"; //This ensures stuff like arsenal hides it
  reloadAction = "LIB_GestureReload_Common_sniper";
  model = "\WW2\Assets_m\Weapons\Rifles_m\DD_Enfield_No4_altReload1.p3d";
  reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\Reload_sniper.wss",1,1,10};
};
```
