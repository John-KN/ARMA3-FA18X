If (!Local Player) ExitWith {};
Private ["_Station_5_Index","_FA18X"];
_FA18X = vehicle player; 

_Station_5_Index = lbCurSel 3105;

	Switch (_Station_5_Index) Do
        {

            	case 0:
            	{

			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
           
            	};
            	case 1:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 2:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
            	case 3:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 4:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 5:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 6:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 7:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 8:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 9:
            	{
			lbClear 3111;
			lbClear 3113;
           		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 0;
            	};
		case 10:
            	{
			lbClear 3111;
			lbClear 3113;
              		{lbAdd[3111,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"GBU12",
				"GBU38"
            		];
			{lbAdd[3113,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"GBU12",
				"GBU38"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3111) lbSetCurSel 5;
			((uiNamespace getVariable "myDisplay") displayCtrl 3113) lbSetCurSel 5;
            	};


      	}; 