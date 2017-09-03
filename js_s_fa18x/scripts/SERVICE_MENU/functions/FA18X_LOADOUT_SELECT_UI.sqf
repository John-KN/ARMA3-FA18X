If (!Local Player) ExitWith {};  
Private "_FA18X";
_FA18X = vehicle player;

closeDialog 0;
sleep 0.01;

CreateDialog "FA18X_LOADOUT_SELECT_UI";
WaitUntil {!Dialog};
_FA18X animate ["switch_service_menu",0];