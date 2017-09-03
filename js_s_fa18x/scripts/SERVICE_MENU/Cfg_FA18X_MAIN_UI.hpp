class FA18X_MAIN_UI 
{
	idd = 3000;
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
			text = "\js_S_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_main_menu.paa";
			x = 0 * safezoneW + safezoneX;
			y = 0.052 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.84 * safezoneH;
		};
		class FA18_MAIN_FRAME: RscFrame
		{
			idc = 1205;
			x = 0.005 * safezoneW + safezoneX;
			y = 0.005 * safezoneH + safezoneY;
			w = 0.99 * safezoneW;
			h = 0.99 * safezoneH;
		};
		class FA18_LOADOUTS_BUTTON_1610: FA18X_RscButtonMenu
		{
			idc = 1610;
			x = 0.456693 * safezoneW + safezoneX;
			y = 0.23114 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.13723 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Loadout selection menu";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_SELECT_UI";
		};
		
		class FA18_SKINS_BUTTON_1611: FA18X_RscButtonMenu
		{
			idc = 1611;
			x = 0.312332 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.13723 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Paint schemes library menu";
			action = "[]Spawn JS_S_fnc_FA18X_SKINS_UI";
		};
		
		class FA18_OPTIONS_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.59974 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.13723 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Options";
			action = "[]Spawn JS_S_fnc_FA18X_SETTINGS_UI";
		};

		class FA18_MANUAL_BUTTON_1613: FA18X_RscButtonMenu
		{
			idc = 1613;
			x = 0.455379 * safezoneW + safezoneX;
			y = 0.634429 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.13723 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Pilots manual";
			action = "[]Spawn JS_S_fnc_FA18x_MANUAL_UI";
		};

		class FA18_CREDITS_EULA_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Credits & EULA";
			action = "[]Spawn JS_S_fnc_FA18X_CREDITS_EULA_UI";
		};


		class FA18_CLOSE_DIALOG_BUTTON_1614: FA18X_RscButtonMenu
		{
			idc = 1614;
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






