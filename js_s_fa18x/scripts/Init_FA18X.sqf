//Script created for the original F/A-18X Black Wasp addon
//by: John_Spartan & Saul
//by EULA of this mod is distribuded with, you have no legal rights to edit/distribute this code
//without permissions from it's original authors.

private ["_FA18X"];
_FA18X = _this select 0;
_FA18X animate ["switch_init",0];
_FA18X animate ["ewp_center_hull_hide",0];
_FA18X animate ["ewp_center_door_left_hide",0];
_FA18X animate ["ewp_center_door_right_hide",0];
_FA18X animate ["camo_conformal_fuel_tanks_hide",0];
_FA18X animate ["camo_center_fuel_tank_hide",1];
_FA18X animate ["pylon_3_hide",1];
_FA18X animate ["pylon_4_hide",1];
_FA18X animate ["pylon_5_hide",1];
_FA18X animate ["pylon_6_hide",1];
_FA18X animate ["pylon_7_hide",1];
_FA18X animate ["pylon_8_hide",1];
_FA18X animate ["switch_RCS",1];
_FA18X animate ["switch_rearming_done",1];
_FA18X animate ["MFD_mode_NAV",0];
_FA18X animate ["MFD_mode_AG",1];
_FA18X animate ["MFD_mode_AA",1];

//INITIATE MFD controls
[_FA18X] spawn JS_S_fnc_FA18X_MFD_control;
[_FA18X] spawn JS_S_fnc_FA18X_RCS_SYS;

//EXTERNAL/AUXILARY FUEL SYSTEM
[_FA18X] execvm "js_s_fa18x\scripts\FUEL_CONTROL\FA18X_fuel_hud_update.sqf";
[_FA18X] execvm "js_s_fa18x\scripts\FUEL_CONTROL\FA18X_fuel_init.sqf";
[_FA18X] execvm "js_s_fa18x\scripts\FUEL_CONTROL\FA18X_fuel_usage.sqf";
_FA18X_fuel_tank_drop = _FA18X addEventHandler ["Fired",{_FA18X_fuel_tank_drop = _this execVM "js_s_fa18x\scripts\FUEL_CONTROL\FA18X_auxilary_fueltank_control.sqf";}];

//FAILSAFE
_FA18X animate ["switch_init",1];

while {true} do 
{

_ewp_AIM120_missile_count = {_x == "js_m_fa18x_aim120c_ewp_x1"} count magazines _FA18X;
_ewp_GBU32_bomb_count = {_x == "js_m_fa18x_GBU32_JDAM_x1"} count magazines _FA18X;
_ewp_GBU38_bomb_count = {_x == "js_m_fa18x_GBU38_JDAM_x1"} count magazines _FA18X;
_ewp_GBU39_bomb_count = {_x == "js_m_fa18x_GBU39_SDB_x1"} count magazines _FA18X;

If 
(((currentWeapon _FA18X == "js_w_fa18x_aim120cLaucher") and (_ewp_AIM120_missile_count > 0)) or ((currentWeapon _FA18X == "js_w_fa18x_GBU32BombLauncher") and  (_ewp_GBU32_bomb_count > 0)) or ((currentWeapon _FA18X == "js_w_fa18x_GBU38BombLauncher") and  (_ewp_GBU38_bomb_count > 0)) or ((currentWeapon _FA18X == "js_w_fa18x_GBU39BombLauncher") and  (_ewp_GBU39_bomb_count > 0))) then 
{
	If (_FA18X animationphase "ewp_center_door_left" < 0.01) then {_FA18X animate ["ewp_center_door_left",1];};
	If (_FA18X animationphase "ewp_center_door_right" < 0.01) then {_FA18X animate ["ewp_center_door_right",1];};

}
else
{
	_FA18X animate ["ewp_center_door_left",0];
	_FA18X animate ["ewp_center_door_right",0];

};


If (_FA18X animationphase "wing_fold_left" >= 0.0001 && isengineon _FA18X && speed _FA18X > 40) Then {_FA18X animate ["wing_fold_left",0];};
If (_FA18X animationphase "wing_fold_right" >= 0.0001 && isengineon _FA18X && speed _FA18X > 40) Then {_FA18X animate ["wing_fold_right",0];};
If ((damage _FA18X > 0.85) and (player != driver _FA18X)) then {[_FA18X] spawn JS_S_fnc_FA18X_EJECTION;};
If !(alive _FA18X) ExitWith {};
sleep 1.0; 
};
 





