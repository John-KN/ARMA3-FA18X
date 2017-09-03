/*
	Author: John_Spartan & Saul

	Description:
	EWP loadout function for FA18X Black Wasp

	Exucution:
	[_FA18X,1] execVM "\js_s_fa18x\scripts\LOADOUTS\FA18X_LOADOUT_EWP_instant.sqf";
	via unit init line in editor or via instance of mission script [INIT.sqf for example]
	
	Parameter(s):
		_this select 0: mode (Scalar)

		0: plane/object
		1: EWP loadout type 1/2/3/4/5

	Returns: nothing
	Result: aircrfat will be equiped with predefined set of weapons/magazines
	Notes: needs to be rewritten to be more dynamic, due of lack of time it's simplified

*/



//BASIC DEFINITIONS

Private ["_FA18X","_Loadout_Type"];	//basic definitions
_FA18X = _this select 0; 		//capturing the plane as unit
_Loadout_Type = _this select 1;		//loadout type to be applied [only numbers 1-5 will work]



//WEAPON CLASSNAME DEFINITIONS
//LIST OF ALL POSSIBLE WEAPONS USED WITH THIS PLANE
//IN CASE WE NEED TO ADAPT THIS TO SOME OTHER MOD
_SAFE_weapon = "js_w_fa18x_master_arms_safe"; 
_AIM9X_weapon = "js_w_fa18x_aim9xLaucher"; 
_AIM120_weapon = "js_w_fa18x_aim120cLaucher"; 
_GBU12_weapon = "js_w_fa18x_GBU12LGBLaucher";
_MK82_weapon = "js_w_fa18x_Mk82BombLauncher";  
_AGM65_weapon = "js_w_fa18x_MaverickLauncher"; 
_FUEL_TANK_weapon = "js_w_fa18x_fueltank_holder"; 
_AGM84_weapon = "js_w_fa18x_HarpoonLauncher";
_GBU31_weapon = "js_w_fa18x_GBU31BombLauncher";
_GBU32_weapon = "js_w_fa18x_GBU32BombLauncher";
_GBU38_weapon = "js_w_fa18x_GBU38BombLauncher";
_GBU39_weapon = "js_w_fa18x_GBU39BombLauncher";
_LASER_weapon = "Laserdesignator_mounted";



//MAGAZINE CLASSNAME DEFINITIONS
//LIST OF ALL POSSIBLE MAGAZINES USED WITH THIS PLANE
//IN CASE WE NEED TO ADAPT THIS TO SOME OTHER MOD
_AIM9X_magazine = "js_m_fa18x_aim9x_x1";
_AIM120_magazine = "js_m_fa18x_aim120c_x1"; 
_AIM120_EWP_magazine = "js_m_fa18x_aim120c_ewp_x1";
_DUAL_RAIL_magazine = "js_m_fa18x_bombrack_x1";
_GBU12_magazine = "js_m_fa18x_GBU12_x1";
_MK82_magazine = "js_m_fa18x_MK82_x1";
_GBU39_magazine = "js_m_fa18x_GBU39_SDB_x1";
_GBU38_magazine = "js_m_fa18x_GBU38_JDAM_x1";
_GBU32_magazine = "js_m_fa18x_GBU32_JDAM_x1"; 
_GBU31_magazine = "js_m_fa18x_GBU31_JDAM_x1";
_AGM65_magazine = "js_m_fa18x_Maverick_x1";   
_AGM84_magazine = "js_m_fa18x_Harpoon_x1";
_FUEL_TANK_magazine = "js_m_fa18x_wing_tank_x1";
_TGT_POD_magazine = "js_m_fa18x_atflir_pod_x1";  
_EMPTY_magazine = "js_m_fa18x_empty"; 
_EMPTY_FAKE_magazine = "js_m_fa18x_fake_empty";
_BUDDY_POD_magazine = "js_m_fa18x_buddypod_x1";
_BATTERIES_magazine = "Laserbatteries";



//SWITCH PILOTS WEAPON TO SAFE
_FA18X selectWeapon _SAFE_weapon;
_FA18X animate ["switch_rearming_done",0];



//ROMEVE ALL POSSIBLE DEFAULT WEAPONS
_FA18X removeWeapon _AIM9X_weapon; 
_FA18X removeWeapon _AIM120_weapon; 
_FA18X removeWeapon _GBU12_weapon;
_FA18X removeWeapon _MK82_weapon;  
_FA18X removeWeapon _AGM65_weapon; 
_FA18X removeWeapon _FUEL_TANK_weapon; 
_FA18X removeWeapon _AGM84_weapon;
_FA18X removeWeapon _GBU31_weapon;
_FA18X removeWeapon _GBU32_weapon;
_FA18X removeWeapon _GBU38_weapon;
_FA18X removeWeapon _GBU39_weapon;
_FA18X removeWeapon _LASER_weapon;



//ROMEVE ALL POSSIBLE DEFAULT MAGAZINES
_FA18X removeMagazines _AIM9X_magazine;
_FA18X removeMagazines _AIM120_magazine; 
_FA18X removeMagazines _AIM120_EWP_magazine; 
_FA18X removeMagazines _DUAL_RAIL_magazine;
_FA18X removeMagazines _GBU12_magazine;
_FA18X removeMagazines _MK82_magazine;
_FA18X removeMagazines _GBU31_magazine;
_FA18X removeMagazines _GBU32_magazine;
_FA18X removeMagazines _GBU38_magazine; 
_FA18X removeMagazines _GBU39_magazine;
_FA18X removeMagazines _AGM65_magazine;   
_FA18X removeMagazines _AGM84_magazine;
_FA18X removeMagazines _FUEL_TANK_magazine;
_FA18X removeMagazines _TGT_POD_magazine;  
_FA18X removeMagazines _EMPTY_magazine; 
_FA18X removeMagazines _EMPTY_FAKE_magazine;
_FA18X removeMagazines _BUDDY_POD_magazine;
_FA18X removeMagazines _BATTERIES_magazine;



//ANIMATE ALL HIDDEN SELECTIONS TO SUPPORT NEW LOADOUT ACTION
_FA18X animate ["ewp_center_hull_hide",1];
_FA18X animate ["ewp_center_door_left_hide",1];
_FA18X animate ["ewp_center_door_right_hide",1];
_FA18X animate ["camo_conformal_fuel_tanks_hide",1];
_FA18X animate ["camo_center_fuel_tank_hide",1];
_FA18X animate ["pylon_3_hide",1];
_FA18X animate ["pylon_4_hide",1];
_FA18X animate ["pylon_5_hide",1];
_FA18X animate ["pylon_6_hide",1];
_FA18X animate ["pylon_7_hide",1];
_FA18X animate ["pylon_8_hide",1];
_FA18X animate ["switch_RCS",0];



//DEFINE DEFAULT LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _EMPTY_magazine;
_station_21 = _EMPTY_magazine;
_station_22 = _AIM120_EWP_magazine; 
_station_23 = _AIM120_EWP_magazine; 
_station_24 = _GBU39_magazine;
_station_25 = _GBU39_magazine;
_station_26 = _GBU39_magazine;
_station_27 = _GBU39_magazine;
_station_28 = _GBU39_magazine;
_station_29 = _GBU39_magazine;
_station_30 = _EMPTY_magazine;



if (_Loadout_Type == 1) then 
{
//DEFINE NEW LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _EMPTY_magazine;
_station_21 = _EMPTY_magazine;
_station_22 = _AIM120_EWP_magazine; 
_station_23 = _AIM120_EWP_magazine; 
_station_24 = _GBU39_magazine;
_station_25 = _GBU39_magazine;
_station_26 = _GBU39_magazine;
_station_27 = _GBU39_magazine;
_station_28 = _GBU39_magazine;
_station_29 = _GBU39_magazine;
_station_30 = _EMPTY_magazine;


}; 



if (_Loadout_Type == 2) then 
{
//DEFINE NEW LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _AIM120_EWP_magazine;
_station_21 = _AIM120_EWP_magazine;
_station_22 = _AIM120_EWP_magazine; 
_station_23 = _AIM120_EWP_magazine; 
_station_24 = _EMPTY_magazine;
_station_25 = _EMPTY_magazine;
_station_26 = _EMPTY_magazine;
_station_27 = _EMPTY_magazine;
_station_28 = _EMPTY_magazine;
_station_29 = _EMPTY_magazine;
_station_30 = _EMPTY_magazine;
}; 



if (_Loadout_Type == 3) then 
{
//DEFINE NEW LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _EMPTY_magazine;
_station_21 = _EMPTY_magazine;
_station_22 = _AIM120_EWP_magazine; 
_station_23 = _AIM120_EWP_magazine; 
_station_24 = _GBU39_magazine;
_station_25 = _GBU39_magazine;
_station_26 = _GBU39_magazine;
_station_27 = _GBU39_magazine;
_station_28 = _EMPTY_magazine;
_station_29 = _EMPTY_magazine;
_station_30 = _EMPTY_magazine;


}; 



if (_Loadout_Type == 4) then 
{
//DEFINE NEW LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _GBU38_magazine;
_station_21 = _GBU38_magazine;
_station_22 = _AIM120_EWP_magazine; 
_station_23 = _AIM120_EWP_magazine; 
_station_24 = _EMPTY_magazine;
_station_25 = _EMPTY_magazine;
_station_26 = _EMPTY_magazine;
_station_27 = _EMPTY_magazine;
_station_28 = _EMPTY_magazine;
_station_29 = _EMPTY_magazine;
_station_30 = _EMPTY_magazine;
}; 



if (_Loadout_Type == 5) then 
{
//DEFINE NEW LOADOUT
_station_1 = _AIM9X_magazine;
_station_2 = _AIM9X_magazine;
_station_3 = _EMPTY_magazine;
_station_4 = _EMPTY_magazine;
_station_5 = _EMPTY_magazine;
_station_6 = _EMPTY_magazine;
_station_7 = _EMPTY_magazine;
_station_8 = _EMPTY_magazine;
_station_9 = _EMPTY_magazine;
_station_10 = _TGT_POD_magazine;
_station_11 = _EMPTY_magazine;
_station_12 = _EMPTY_magazine;
_station_13 = _EMPTY_magazine;
_station_14 = _EMPTY_magazine;
_station_15 = _EMPTY_magazine;
_station_16 = _EMPTY_magazine;
_station_17 = _EMPTY_magazine;
_station_18 = _EMPTY_magazine;
_station_19 = _EMPTY_magazine;
_station_20 = _EMPTY_magazine;
_station_21 = _EMPTY_magazine;
_station_22 = _EMPTY_magazine; 
_station_23 = _EMPTY_magazine; 
_station_24 = _EMPTY_magazine;
_station_25 = _EMPTY_magazine;
_station_26 = _EMPTY_magazine;
_station_27 = _EMPTY_magazine;
_station_28 = _EMPTY_magazine;
_station_29 = _EMPTY_magazine;
_station_30 = _GBU32_magazine;

}; 



//ANIMATE ALL HIDDEN SELECTIONS TO SUPPORT NEW LOADOUT ACTION
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



sleep 0.1;



//APPLY NEW LOADOUT [MAGAZINES FIRST]
_FA18X addMagazine _station_1;
_FA18X addMagazine _station_2;
_FA18X addMagazine _station_3;
_FA18X addMagazine _station_4;
_FA18X addMagazine _station_5;
_FA18X addMagazine _station_6;
_FA18X addMagazine _station_7;
_FA18X addMagazine _station_8;
_FA18X addMagazine _station_9;
_FA18X addMagazine _station_10;
_FA18X addMagazine _station_11;
_FA18X addMagazine _station_12;
_FA18X addMagazine _station_13;
_FA18X addMagazine _station_14;
_FA18X addMagazine _station_15;
_FA18X addMagazine _station_16;
_FA18X addMagazine _station_17;
_FA18X addMagazine _station_18;
_FA18x addMagazine _station_19;
_FA18X addMagazine _station_20;
_FA18X addMagazine _station_21;
_FA18X addMagazine _station_22;
_FA18X addMagazine _station_23;
_FA18X addMagazine _station_24;
_FA18X addMagazine _station_25;
_FA18X addMagazine _station_26;
_FA18X addMagazine _station_27;
_FA18X addMagazine _station_28;
_FA18x addMagazine _station_29;
_FA18x addMagazine _station_30;



//ADD NEW WEAPONS FOR PRELOADED MAGAZINES
sleep 0.1;
_loadout = magazines _FA18x;
sleep 0.5;
if ((_AIM9X_magazine in _loadout)) then {_FA18X addWeapon _AIM9X_weapon;};
if ((_AIM120_magazine in _loadout)) then {_FA18X addWeapon _AIM120_weapon;};
if ((_AIM120_EWP_magazine in _loadout)) then {_FA18X addWeapon _AIM120_weapon;};
if ((_GBU12_magazine in _loadout)) then {_FA18X addWeapon _GBU12_weapon;};
if ((_MK82_magazine in _loadout)) then {_FA18X addWeapon _MK82_weapon;};
if ((_GBU31_magazine in _loadout)) then {_FA18X addWeapon _GBU31_weapon;};
if ((_GBU32_magazine in _loadout)) then {_FA18X addWeapon _GBU32_weapon;};
if ((_GBU38_magazine in _loadout)) then {_FA18X addWeapon _GBU38_weapon;};
if ((_GBU39_magazine in _loadout)) then {_FA18X addWeapon _GBU39_weapon;};
if ((_AGM65_magazine in _loadout)) then {_FA18X addWeapon _AGM65_weapon;};
if ((_AGM84_magazine in _loadout)) then {_FA18X addWeapon _AGM84_weapon;};
if ((_FUEL_TANK_magazine in _loadout)) then {_FA18X addWeapon _FUEL_TANK_weapon;};
//if ((_TGT_POD_magazine in _loadout)) then {_FA18X addWeapon _LASER_weapon; _FA18X addMagazine _BATTERIES_magazine;};



//AUXILARY/EXTERNAL FUEL SYSTEM ADJUSTMENT
_FA18X setfuel 1;
_FA18X animate ["switch_fuel_level",0.5];



//FINALIZING FUNCTION 
_FA18x setVehicleAmmo 1;
_FA18X selectWeapon _SAFE_weapon;
_FA18X animate ["switch_rearming_done",1];
_FA18X animate ["switch_service_menu",0];
