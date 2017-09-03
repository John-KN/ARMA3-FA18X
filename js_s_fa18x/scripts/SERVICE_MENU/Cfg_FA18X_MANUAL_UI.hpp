class FA18X_MANUAL_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_main_manual.paa";
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
		
		class FA18_MANUAL_0_BUTTON_1610: FA18X_RscButtonMenu
		{
			idc = 1610;
			x = 0.456691 * safezoneW + safezoneX;
			y = 0.166726 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "About F/A-18X Black Wasp";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_1_UI";
		};

		class FA18_MANUAL_1_BUTTON_1611: FA18X_RscButtonMenu
		{
			idc = 1611;
			x = 0.33333 * safezoneW + safezoneX;
			y = 0.233939 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Controls";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_2_UI";
		};

		class FA18_MANUAL_2_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.292647 * safezoneW + safezoneX;
			y = 0.41878 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Pre-flight setup";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_3_UI";
		};

		class FA18_MANUAL_3_BUTTON_1613: FA18X_RscButtonMenu
		{
			idc = 1613;
			x = 0.333332 * safezoneW + safezoneX;
			y = 0.595223 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Take off and landing";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_4_UI";
		};

		class FA18_MANUAL_4_BUTTON_1614: FA18X_RscButtonMenu
		{
			idc = 1614;
			x = 0.456695 * safezoneW + safezoneX;
			y = 0.687643 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "In-flight procedures";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_5_UI";
		};

		class FA18_MANUAL_5_BUTTON_1615: FA18X_RscButtonMenu
		{
			idc = 1615;
			x = 0.58268 * safezoneW + safezoneX;
			y = 0.595221 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Weapon systems";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_6_UI";
		};

		class FA18_MANUAL_6_BUTTON_1616: FA18X_RscButtonMenu
		{
			idc = 1616;
			x = 0.624675 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0826794 * safezoneW;
			h = 0.137232 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Navigation";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_7_UI";
		};

		class FA18_MANUAL_7_BUTTON_1617: FA18X_RscButtonMenu
		{
			idc = 1617;
			x = 0.58268 * safezoneW + safezoneX;
			y = 0.23674 * safezoneH + safezoneY;
			w = 0.08268 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Editor";
			action = "[]Spawn JS_S_fnc_FA18X_MANUAL_8_UI";
		};

		class FA18_RETURN_TO_MAIN_BUTTON_1618: FA18X_RscButtonMenu
		{
			idc = 1618;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MAIN";
		};

		class FA18_CLOSE_DIALOG_BUTTON_1619: FA18X_RscButtonMenu
		{
			idc = 1619;
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


class FA18X_MANUAL_1_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_1.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
		};

		class FA18_CLOSE_DIALOG_BUTTON_1615: FA18X_RscButtonMenu
		{
			idc = 1615;
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

class FA18X_MANUAL_2_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_2.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_3_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_3.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_4_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_4.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_5_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_5.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_6_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_6.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_7_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_7.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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

class FA18X_MANUAL_8_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_background.paa";
		};
		class FA18_MAIN_PIC_LOADOUTS: RscPicture 
		{
			idc = 1204;
			text = "\js_s_fa18x\UI\FA18X_GUI_manual_8.paa";
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
		
		class FA18_RETURN_TO_MAIN_BUTTON_1612: FA18X_RscButtonMenu
		{
			idc = 1612;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Back to previous menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_MANUAL_MAIN";
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