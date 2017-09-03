_soldier = _this select 0;

//___________________________________
//ROMEVE ALL CURRENT GEAR FROM UNIT
//___________________________________
RemoveAllItems _soldier; 
removeAllWeapons _soldier; 
removeVest _soldier;
removeallcontainers _soldier;
removeAllAssignedItems _soldier;
removeUniform _soldier; 
removeHeadgear _soldier;
removeGoggles _soldier;

//____________________________________
//ADDING TACTICAL VEST AND ITS CONTENT
//____________________________________
_soldier addvest "V_Rangemaster_belt";

//____________________________________
//ADDING UNIFORM AND ITS CONTENT
//____________________________________
_soldier addUniform "U_B_CombatUniform_mcam_tshirt";
_soldier addItem "FirstAidKit";

//____________________________________
//ADDING ITEMS/GADGETS
//____________________________________
_soldier addItem "ItemGPS";
_soldier assignItem "ItemGPS";
_soldier addItem "ItemMap";
_soldier assignItem "ItemMap";
_soldier addItem "ItemCompass";
_soldier assignItem "ItemCompass";
_soldier addItem "ItemWatch";
_soldier assignItem "ItemWatch";
_soldier addItem "ItemRadio";
_soldier assignItem "ItemRadio";
_soldier addWeapon "Binocular";
_soldier addGoggles "G_Aviator";

//____________________________________
//ADDING ANIMATION TO AI CHARACTER
//____________________________________
[_soldier, "REPAIR_VEH_STAND", "ASIS"] call BIS_fnc_ambientAnim;

Exit;
