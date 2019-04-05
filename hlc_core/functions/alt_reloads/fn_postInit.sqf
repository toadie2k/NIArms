/*
	Author: Kerc

	Description:
        Initiates the per frame check for when the player presses their reload key/input

  Parameters:
        Display, run onLoad in ingameUi

	Returns:
        Nothing


    Example:
        onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call NIArms_altReloads_fnc_postInit;"
*/
NIArms_altReloads_isReloading = false;
if (isDedicated) exitwith {};

uiNameSpace setVariable ["NIArms_altReloads_Ui_Display",_this select 0];

[]
spawn
{
  disableSerialization;
  private _display = uiNamespace getVariable "NIArms_altReloads_Ui_Display";
  private _control = (_display displayCtrl 168);
  if (isNil "NIArms_altReloads_Handler") then
  {
    NIArms_altReloads_Handler = [NIArms_altReloads_fnc_perFrame,0] call CBA_fnc_addPerFrameHandler; //CBA_fnc_addPerFrameHandler
  };
  waituntil {sleep 1; isNull _control};
  [NIArms_altReloads_Handler] call CBA_fnc_RemovePerFrameHandler;
  NIArms_altReloads_Handler = nil;
  uiNameSpace setVariable ["NIArms_altReloads_Ui_Display",nil];
};

/* if !((productVersion select 2) >= 191) then
{
  [{
  	call NIArms_altReloads_fnc_perFrame;
  }, 0] call CBA_fnc_addPerFrameHandler;

}; */
