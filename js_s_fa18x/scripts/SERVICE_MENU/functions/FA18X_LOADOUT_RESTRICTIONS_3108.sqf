If (!Local Player) ExitWith {};
Private ["_Station_8_Index","_FA18X"];
_FA18X = vehicle player; 

_Station_8_Index = lbCurSel 3108;

 
	Switch (_Station_8_Index) Do
        {
            	case 0:
            	{

			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
           
            	};
            	case 1:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 2:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
            	case 3:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 4:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 5:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 6:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 7:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 8:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 9:
            	{
			lbClear 3116;
			lbClear 3118;
           		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 0;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 0;
            	};
		case 10:
            	{
			lbClear 3116;
			lbClear 3118;
              		{lbAdd[3116,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"GBU12",
				"GBU38"
            		];
			{lbAdd[3118,_x]} forEach 
			[
              			"EMPTY",
              			"AIM9X",
	      			"AIM120",
				"AGM65",
				"GBU12",
				"GBU38"
            		];
			((uiNamespace getVariable "myDisplay") displayCtrl 3116) lbSetCurSel 3;
			((uiNamespace getVariable "myDisplay") displayCtrl 3118) lbSetCurSel 3;
            	};
            	

      	};
	        