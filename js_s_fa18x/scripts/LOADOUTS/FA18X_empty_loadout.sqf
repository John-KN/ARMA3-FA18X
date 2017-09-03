/*
	Author: John_Spartan & Saul

	Description:
	Empty loadout function for FA18X Black Wasp

	Exucution:
	_FA18X execVM "\js_s_fa18x\scripts\LOADOUTS\FA18X_empty_loadout.sqf";
	via unit init line in editor or via instance of mission script [INIT.sqf for example]
	
	Parameter(s):
		NONE


	Returns: nothing
	Result: aircrfat stripped of all weapons/magazines

*/



//BASIC DEFINITIONS
_FA18X = _this;				//name of the unit we are playing with



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
_TGT_POD_magazine = "js_m_fa18x_altflir_pod_x1";  
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



//ANIMATE ALL HIDDEN SELECTIONS TO SUPPORT NEW LOADOUT
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



//AUXILARY/EXTERNAL FUEL SYSTEM ADJUSTMENT
_FA18X setfuel 1;
_FA18X animate ["switch_fuel_level",0];



//FINALIZING FUNCTION 
_FA18x setVehicleAmmo 1;
_FA18X selectWeapon _SAFE_weapon;
_FA18X animate ["switch_rearming_done",1];

