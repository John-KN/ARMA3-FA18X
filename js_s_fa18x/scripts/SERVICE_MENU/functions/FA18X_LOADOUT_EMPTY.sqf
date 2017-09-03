If (!Local Player) ExitWith {};
Private ["_FA18X"];
_FA18X = vehicle player; 

FA18X_dynamic_loadoutscript = _FA18X execvm "js_s_fa18x\scripts\LOADOUTS\FA18X_empty_loadout.sqf";
closeDialog 0;