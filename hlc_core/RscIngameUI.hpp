class RscInGameUI
{
  class RscUnitInfoSoldier;
  class RscWeaponZeroing;

  class Niarms_Rsc_AltReload_Zeroing: RscWeaponZeroing
  {
    idd = 9640;
    onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call Niarms_altReloads_fnc_postInit;";
  };
  class NIArms_Rsc_Grip : RscWeaponZeroing
  {
      idd = 4570;
      onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');[(call Niarms_fnc_findPlayer)] call Niarms_fnc_gripInit";
  };
};
