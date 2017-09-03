_FA18X = vehicle player;
_FA18X_pilot = driver _FA18X;
_default_sleep_time = 3;
_i = 0;
_sleep_time = 3;		
_FA18X_stop_speed = 1;
If (!Local Player) ExitWith {};

closeDialog 0;

while {alive _FA18X} do 
{
	_i=_i +1;
	if ((_i>=19)) exitWith {_FA18X setVehicleAmmo 1; if (player == _FA18X_pilot) then {titleText ["Rearming complete...", "PLAIN DOWN",0.3];};};
	if (speed _FA18X > _FA18X_stop_speed) exitWith {if (player == _FA18X_pilot) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
	sleep _sleep_time;
	if (player == _FA18X_pilot) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};
		
};