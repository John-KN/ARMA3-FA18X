/*
	Author: John_Spartan

	Description:
	Dynamic loadout selection/rearming function for FA18X Black Wasp

	Exucution:
	FA18X_dynamic_loadoutscript = [_FA18X,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12,_station_13,_station_14,_station_15,_station_16,_station_17,_station_18,_station_19,_station_20] execvm "js_s_fa18x\scripts\LOADOUTS\FA18X_dynamic_loadouts.sqf";
	via unit init line in editor or via instance of mission script [INIT.sqf for example]
	
	Parameter(s):
		_this select 0: mode (Scalar)

		0: plane/object
		1: magazine classname to be equipped on station 1 ["my_magazine_classname"]
		2: magazine classname to be equipped on station 2 ["my_magazine_classname"]
		3: magazine classname to be equipped on station 3 ["my_magazine_classname"]
		4: magazine classname to be equipped on station 4 ["my_magazine_classname"]
		5: magazine classname to be equipped on station 5 ["my_magazine_classname"]
		6: magazine classname to be equipped on station 6 ["my_magazine_classname"]
		7: magazine classname to be equipped on station 7 ["my_magazine_classname"]
		8: magazine classname to be equipped on station 8 ["my_magazine_classname"]
		9: magazine classname to be equipped on station 9 ["my_magazine_classname"]
		10: magazine classname to be equipped on station 10 ["my_magazine_classname"]
		11: magazine classname to be equipped on station 11 ["my_magazine_classname"]
		12: magazine classname to be equipped on station 12 ["my_magazine_classname"]
		13: magazine classname to be equipped on station 13 ["my_magazine_classname"]
		14: magazine classname to be equipped on station 14 ["my_magazine_classname"]
		15: magazine classname to be equipped on station 15 ["my_magazine_classname"]
		16: magazine classname to be equipped on station 16 ["my_magazine_classname"]
		17: magazine classname to be equipped on station 17 ["my_magazine_classname"]
		18: magazine classname to be equipped on station 18 ["my_magazine_classname"]
		19: magazine classname to be equipped on station 19 ["my_magazine_classname"]
		20: 0 or 1 to remove/add CFT's


	Returns: nothing
	Result: aircrfat rearmed with desiered loadout

*/



//BASIC DEFINITIONS
_FA18X = _this select 0;		//name of the unit we are playing with
_FA18X_pilot = driver _FA18X;		//pilot
_default_sleep_time = 3;		//actual time to wait/delay before loading every next magazine
_sleep_time = 3;			//time to wait/delay before loading every next magazine
_FA18X_stop_speed = 1;			//maximum speed of vehicle during the rearming 
_x = 1;					//first magazine index in array passed to this function
_w = 30;				//total number of weapon proxies on model


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
_TGT_POD_magazine = "js_m_fa18x_altflir_pod_x1";  
_EMPTY_magazine = "js_m_fa18x_empty"; 
_EMPTY_FAKE_magazine = "js_m_fa18x_fake_empty";
_BUDDY_POD_magazine = "js_m_fa18x_buddypod_x1";
_BATTERIES_magazine = "Laserbatteries";



//REARMING SWITCH, CAN BE SUBSTITUDED BY VARIABLE, USED TO PREVENT
//MULTIPLE INSTANCES OF SAME FUNCTION AT ONCE
WaitUntil {(_FA18X animationPhase "switch_rearming_done") == 1};



//SWITCH PILOTS WEAPON TO SAFE
_FA18X selectWeapon _SAFE_weapon;
_FA18X animate ["switch_rearming_done",0];



//CHECK FOR PLANE SPEED, IF IN MOTION WE CANCEL REARMING WITH PENALTY
if (speed _FA18X > _FA18X_stop_speed) exitWith {FA18X_cancel_rearm_penalty = _FA18X execVM "\js_s_fa18x\scripts\LOADOUTS\FA18X_empty_loadout.sqf";if (player == _FA18X_pilot) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if (player == _FA18X_pilot) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};



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



//ANIMATE ALL HIDDEN SELECTIONS TO SUPPORT NEW LOADOUT
_FA18X animate ["ewp_center_hull_hide",1];
_FA18X animate ["ewp_center_door_left_hide",1];
_FA18X animate ["ewp_center_door_right_hide",1];
_FA18X animate ["camo_conformal_fuel_tanks_hide",1];
_FA18X animate ["camo_center_fuel_tank_hide",1];
_FA18X animate ["pylon_3_hide",0];
_FA18X animate ["pylon_4_hide",0];
_FA18X animate ["pylon_5_hide",0];
_FA18X animate ["pylon_6_hide",0];
_FA18X animate ["pylon_7_hide",0];
_FA18X animate ["pylon_8_hide",0];
_FA18X animate ["switch_RCS",0];



//ADDING NEW MAGAZINES TO PLANE 
//ONLY STATIONS 1-19 ARE USED FOR CONVENTIONAL LOADOUTS
//WE WILL BLANK OUT REMAINING 11 UNUSED PROXIES
for "_i" from 1 to 19 do 
{
	 
	_FA18X removeMagazines _EMPTY_FAKE_magazine; 
	_new_magazine = _this select _x;
	_FA18X addMagazine _new_magazine;
	for "_y" from 1 to _w do {_FA18X addMagazine _EMPTY_FAKE_magazine;};
	if (_new_magazine == _EMPTY_magazine) then {_sleep_time = 0;} else {_sleep_time = _default_sleep_time;}; 
	if (speed _FA18X > _FA18X_stop_speed) exitWith {FA18X_cancel_rearm_penalty = _FA18X execVM "\js_s_fa18x\scripts\LOADOUTS\FA18X_empty_loadout.sqf";if (player == _FA18X_pilot) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
	if (player == _FA18X_pilot) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};
	_x= _x +1;
	_w= _w -1;
	sleep _sleep_time;
	//hintsilent format["Station Number: %1\nNew magazine: %2\nMax proxies: %3\nSleep time: %4\n",_station_number,_FA18X_new_magazine_station,_max_proxies,_sleep_time];

};



//BLANKING OUT REMAINING 11 EWP LOADOUT COMPATIBLE PROXIES
for "_z" from 1 to 11 do {_FA18X addMagazine _EMPTY_magazine;};



//ADD NEW WEAPONS FOR PRELOADED MAGAZINES
_loadout = magazines _FA18x;
sleep 0.5;
if ((_AIM9X_magazine in _loadout)) then {_FA18X addWeapon _AIM9X_weapon;};
if ((_AIM120_magazine in _loadout)) then {_FA18X addWeapon _AIM120_weapon;};
if ((_GBU12_magazine in _loadout)) then {_FA18X addWeapon _GBU12_weapon;};
if ((_MK82_magazine in _loadout)) then {_FA18X addWeapon _MK82_weapon;};
if ((_GBU31_magazine in _loadout)) then {_FA18X addWeapon _GBU31_weapon;};
if ((_GBU32_magazine in _loadout)) then {_FA18X addWeapon _GBU32_weapon;};
if ((_GBU38_magazine in _loadout)) then {_FA18X addWeapon _GBU38_weapon;};
if ((_GBU39_magazine in _loadout)) then {_FA18X addWeapon _GBU39_weapon;};
if ((_AGM65_magazine in _loadout)) then {_FA18X addWeapon _AGM65_weapon;};
if ((_AGM84_magazine in _loadout)) then {_FA18X addWeapon _AGM84_weapon;};
if ((_FUEL_TANK_magazine in _loadout)) then {_FA18X addWeapon _FUEL_TANK_weapon;};
if ((_TGT_POD_magazine in _loadout)) then {_FA18X addWeapon _LASER_weapon; _FA18 addMagazine _BATTERIES_magazine;};




//CHECK FOR PLANE SPEED, IF IN MOTION WE CANCEL REARMING WITH PENALTY
if (speed _FA18X > _FA18X_stop_speed) exitWith {FA18X_cancel_rearm_penalty = _FA18X execVM "\js_s_fa18x\scripts\LOADOUTS\FA18X_empty_loadout.sqf";if (player == _FA18X_pilot) then {titleText ["Rearming canceled...", "PLAIN DOWN",0.3];};};
if (player == _FA18X_pilot) then {titleText ["Rearming...", "PLAIN DOWN",0.3];};



//FINALIZING LOADOUT 
_FA18x setVehicleAmmo 1;
_FA18X selectWeapon _SAFE_weapon;
_FA18X animate ["switch_rearming_done",1];
if (player == _FA18X_pilot) then {titleText ["Rearming complete...", "PLAIN DOWN",0.6];};
