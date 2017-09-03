class FA18X_LOADOUT_EWP_UI 
{
	idd = 3010;
	movingenable = "false";
	onLoad = "uiNamespace setVariable ['myDisplay', (_this select 0)]";
	
	class Controls 
	{
		class FA18_MAIN_BOX_1200 : RscPicture 
		{
			idc = 1200;
			x = safezoneX;
			y = safezoneY;
			w = 0.1 + safezoneW;
			h = 0.1 + safezoneH;
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1205;
			text = "\js_s_fa18x\UI\FA18X_GUI_arming_menu_EWP.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0.052 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.84 * safezoneH;
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1204;
			x = 0.005 * safezoneW + safezoneX;
			y = 0.005 * safezoneH + safezoneY;
			w = 0.99 * safezoneW;
			h = 0.99 * safezoneH;
		};

		class FA18_LOAD_EWP_1_BUTTON_1600: FA18X_RscButtonMenu
		{
			idc = 1600;
			x = 0.213906 * safezoneW + safezoneX;
			y = 0.435585 * safezoneH + safezoneY;
			w = 0.0800552 * safezoneW;
			h = 0.271683 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "2xAIM9X, 2xAIM120, 6xGBU39";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EWP_1; closeDialog 0;";
		};
		
		class FA18_LOAD_EWP_2_BUTTON_1601: FA18X_RscButtonMenu
		{
			idc = 1601;
			x = 0.333328 * safezoneW + safezoneX;
			y = 0.435586 * safezoneH + safezoneY;
			w = 0.0800552 * safezoneW;
			h = 0.271683 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "2xAIM9X, 4xAIM120";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EWP_2; closeDialog 0;";
		};

		class FA18_LOAD_EWP_3_BUTTON_1602: FA18X_RscButtonMenu
		{
			idc = 1602;
			x = 0.455379 * safezoneW + safezoneX;
			y = 0.435585 * safezoneH + safezoneY;
			w = 0.0800552 * safezoneW;
			h = 0.271683 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "2xAIM9X, 2xAIM120, 4xGBU39";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EWP_3; closeDialog 0;";
		};

		class FA18_LOAD_EWP_4_BUTTON_1603: FA18X_RscButtonMenu
		{
			idc = 1603;
			x = 0.578742 * safezoneW + safezoneX;
			y = 0.435586 * safezoneH + safezoneY;
			w = 0.0800552 * safezoneW;
			h = 0.271683 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "2xAIM9X, 2xAIM120, 2xGBU38";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EWP_4; closeDialog 0;";
		};

		class FA18_LOAD_EWP_5_BUTTON_1604: FA18X_RscButtonMenu
		{
			idc = 1604;
			x = 0.700793 * safezoneW + safezoneX;
			y = 0.435586 * safezoneH + safezoneY;
			w = 0.0800552 * safezoneW;
			h = 0.271683 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "2xAIM9X, 1xGBU32";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EWP_5; closeDialog 0;";
		};

		class FA18_REARM_BUTTON_1605: FA18X_RscButtonMenu
		{
			idc = 1605;
			x = 0.308394 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Rearm aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REARM";
		};
		class FA18_REPAIR_BUTTON_1606: FA18X_RscButtonMenu
		{
			idc = 1606;
			x = 0.406822 * safezoneW + safezoneX;
			y = 0.738055 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Repair aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REPAIR";
		};
		
		class FA18_REFUEL_BUTTON_1607: FA18X_RscButtonMenu
		{
			idc = 1607;
			x = 0.50525 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Refuel aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REFUEL";
		};
		
		class FA18_EMPTY_LOADOUT_BUTTON_1608: FA18X_RscButtonMenu
		{
			idc = 1608;
			x = 0.604991 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Empty loadout, no weapons";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EMPTY";
		};

		class FA18_RETURN_TO_MAIN_BUTTON_1609: FA18X_RscButtonMenu
		{
			idc = 1609;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_LOADOUT_SELECT";
		};

		class FA18_CLOSE_DIALOG_BUTTON_1610: FA18X_RscButtonMenu
		{
			idc = 1610;
			x = 0.877963 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.094491 * safezoneW;
			h = 0.0255 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Close this menu";
			action = "closeDialog 0";
		};
	
		
	};
};
