Private ["_FA18X"];
_FA18X = vehicle player;
If (!Local _FA18X) ExitWith {};


CreateDialog "FA18X_MAIN_UI";

WaitUntil {!Dialog};
 
_FA18X animate ["switch_service_menu",0];