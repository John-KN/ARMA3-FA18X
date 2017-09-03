If (!Local Player) ExitWith {};
Private ["_FA18X"];
_FA18X = vehicle player; 
FA18X_dynamic_loadoutscript_MR = [_FA18X, "js_m_fa18x_aim9x_x1", "js_m_fa18x_aim9x_x1","js_m_fa18x_aim120c_x1","js_m_fa18x_aim120c_x1","js_m_fa18x_aim120c_x1","js_m_fa18x_aim120c_x1", "js_m_fa18x_bombrack_x1", "js_m_fa18x_bombrack_x1", "js_m_fa18x_aim120c_x1", "js_m_fa18x_aim120c_x1", "js_m_fa18x_empty", "js_m_fa18x_empty", "js_m_fa18x_empty", "js_m_fa18x_empty", "js_m_fa18x_Maverick_x1", "js_m_fa18x_Maverick_x1", "js_m_fa18x_GBU12_x1", "js_m_fa18x_GBU12_x1", "js_m_fa18x_wing_tank_x1",1] execvm "js_s_fa18x\scripts\LOADOUTS\FA18X_dynamic_loadouts.sqf";
closeDialog 0;