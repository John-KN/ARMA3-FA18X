_FA18X = vehicle player;
_FA18X_pilot = driver _FA18X;
_default_sleep_time = 3;
_sleep_time = 3;		
_FA18X_stop_speed = 1;
_Fuel_FA18X = fuel _FA18X;
If (!Local Player) ExitWith {};

closeDialog 0;

if (speed _FA18X > _FA18X_stop_speed) exitWith {if (player == _FA18X_pilot) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
if (player == _FA18X_pilot) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};

while {alive _FA18X} do 
{
	
	_Fuel_FA18X = fuel _FA18X;
	_FA18X setfuel (_Fuel_FA18X + 0.015);	
	If ((_Fuel_FA18X > 0.98) and (player == _FA18X_pilot)) exitWith {titleText ["Refueling complete...", "PLAIN DOWN",0.6];};
	if (speed _FA18X > _FA18X_stop_speed) exitWith {if (player == _FA18X_pilot) then {titleText ["Refueling canceled...", "PLAIN DOWN",0.3];};};
	if (player == _FA18X_pilot) then {titleText ["Refueling...", "PLAIN DOWN",0.3];};
	sleep _sleep_time;
};
