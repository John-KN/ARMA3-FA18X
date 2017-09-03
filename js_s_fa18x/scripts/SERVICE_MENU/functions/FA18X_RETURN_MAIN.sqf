If (!Local Player) ExitWith {};  
Private "_FA18X";
_FA18X = vehicle player;

closeDialog 0;

sleep 0.01;
if 
(
((_FA18X distance (nearestObject [_FA18X, "B_Truck_01_ammo_F"]) < 25) and (damage (nearestObject [_FA18X, "B_Truck_01_ammo_F"]) < 1) and (player == driver _FA18X) and (_FA18X animationPhase "switch_service_menu" < 0.5) and (speed _FA18X < 1))
or
((_FA18X distance (nearestObject [_FA18X, "Land_Hangar_F"]) < 55) and (damage (nearestObject [_FA18X, "Land_Hangar_F"]) < 1) and (player == driver _FA18X) and (_FA18X animationPhase "switch_service_menu" < 0.5) and (speed _FA18X < 1))
or
((_FA18X distance (nearestObject [_FA18X, "Land_TentHangar_V1_F"]) < 55) and (damage (nearestObject [_FA18X, "Land_TentHangar_V1_F"]) < 1) and (player == driver _FA18X) and (_FA18X animationPhase "switch_service_menu" < 0.5) and (speed _FA18X < 1))
or
((_FA18X distance (nearestObject [_FA18X, "JDG_carrier_Spawner"]) < 555) and (damage (nearestObject [_FA18X, "JDG_carrier_Spawner"]) < 1) and (player == driver _FA18X) and (_FA18X animationPhase "switch_service_menu" < 0.5) and (speed _FA18X < 1))
) 

then {CreateDialog "FA18X_MAIN_UI";} else {CreateDialog "FA18X_MAIN_RESTRICTED_UI";};

