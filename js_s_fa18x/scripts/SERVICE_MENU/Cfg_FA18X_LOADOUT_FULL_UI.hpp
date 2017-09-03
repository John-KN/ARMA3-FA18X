class FA18X_LOADOUT_FULL_UI 
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
			text = "\js_s_fa18x\UI\FA18X_GUI_arming_menu_FULL.paa";
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
		class FA18_LOAD_CUSTOM_BUTTON_1600: FA18X_RscButtonMenu
		{
			idc = 1600;
			x = 0.423884 * safezoneW + safezoneX;
			y = 0.63723 * safezoneH + safezoneY;
			w = 0.148286 * safezoneW;
			h = 0.0868192 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Apply custom loadout";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_APPLY";
		};
		class FA18_STATION_1_COMBO_3101: RscCombo
		{
			idc = 3101;
			x = 0.190281 * safezoneW + safezoneX;
			y = 0.312357 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 1";
			colorBackground[] = {0, 0, 0, 0.6};
			colorSelectBackground[] = {1, 1, 1, 0.7};
		};
		class FA18_STATION_2_COMBO_3102: FA18_STATION_1_COMBO_3101
		{
			idc = 3102;
			x = 0.711291 * safezoneW + safezoneX;
			y = 0.312357 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 2";
		};
		class FA18_STATION_3_COMBO_3103: FA18_STATION_1_COMBO_3101
		{
			idc = 3103;
			x = 0.234902 * safezoneW + safezoneX;
			y = 0.362768 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 3";
		};
		class FA18_STATION_4_COMBO_3104: FA18_STATION_1_COMBO_3101
		{
			idc = 3104;
			x = 0.66536 * safezoneW + safezoneX;
			y = 0.36277 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 4";
		};
		class FA18_STATION_5_COMBO_3105: FA18_STATION_1_COMBO_3101
		{
			idc = 3105;
			x = 0.261149 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 5";
		};
		class FA18_STATION_6_COMBO_3106: FA18_STATION_1_COMBO_3101
		{
			idc = 3106;
			x = 0.645673 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 6";
		};
		class FA18_STATION_7_COMBO_3107: FA18_STATION_1_COMBO_3101
		{
			idc = 3107;
			x = 0.354327 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 7";
		};
		class FA18_STATION_8_COMBO_3108: FA18_STATION_1_COMBO_3101
		{
			idc = 3108;
			x = 0.551183 * safezoneW + safezoneX;
			y = 0.418782 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 8";
		};
		class FA18_STATION_9_COMBO_3109: FA18_STATION_1_COMBO_3101
		{
			idc = 3109;
			x = 0.452755 * safezoneW + safezoneX;
			y = 0.491597 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 9";
		};
		class FA18_STATION_10_COMBO_3110: FA18_STATION_1_COMBO_3101
		{
			idc = 3110;
			x = 0.452753 * safezoneW + safezoneX;
			y = 0.539208 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 10";
		};
		class FA18_STATION_11_COMBO_3111: FA18_STATION_1_COMBO_3101
		{
			idc = 3111;
			x = 0.261149 * safezoneW + safezoneX;
			y = 0.474795 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 11";
		};
		class FA18_STATION_12_COMBO_3112: FA18_STATION_1_COMBO_3101
		{
			idc = 3112;
			x = 0.644361 * safezoneW + safezoneX;
			y = 0.471994 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 12";
		};
		class FA18_STATION_13_COMBO_3113: FA18_STATION_1_COMBO_3101
		{
			idc = 3113;
			x = 0.261148 * safezoneW + safezoneX;
			y = 0.525203 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 13";
		};
		class FA18_STATION_14_COMBO_3114: FA18_STATION_1_COMBO_3101
		{
			idc = 3114;
			x = 0.644363 * safezoneW + safezoneX;
			y = 0.525205 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 14";
		};
		class FA18_STATION_15_COMBO_3115: FA18_STATION_1_COMBO_3101
		{
			idc = 3115;
			x = 0.354326 * safezoneW + safezoneX;
			y = 0.474793 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 15";
		};
		class FA18_STATION_16_COMBO_3116: FA18_STATION_1_COMBO_3101
		{
			idc = 3116;
			x = 0.551181 * safezoneW + safezoneX;
			y = 0.474795 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 16";
		};
		class FA18_STATION_17_COMBO_3117: FA18_STATION_1_COMBO_3101
		{
			idc = 3117;
			x = 0.354327 * safezoneW + safezoneX;
			y = 0.525203 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 17";
		};
		class FA18_STATION_18_COMBO_3118: FA18_STATION_1_COMBO_3101
		{
			idc = 3118;
			x = 0.551183 * safezoneW + safezoneX;
			y = 0.525205 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 18";
		};
		class FA18_STATION_19_COMBO_3119: FA18_STATION_1_COMBO_3101
		{
			idc = 3119;
			x = 0.452755 * safezoneW + safezoneX;
			y = 0.59242 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Weapon station 19";
		};
		class FA18_STATION_20_COMBO_3120: FA18_STATION_1_COMBO_3101
		{
			idc = 3120;
			x = 0.452753 * safezoneW + safezoneX;
			y = 0.121914 * safezoneH + safezoneY;
			w = 0.0866172 * safezoneW;
			h = 0.0280066 * safezoneH;
			tooltip = "Conformal fuel tanks";
		};

		class FA18_REARM_BUTTON_1601: FA18X_RscButtonMenu
		{
			idc = 1601;
			x = 0.162722 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Rearm aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REARM";
		};
		class FA18_REPAIR_BUTTON_1602: FA18X_RscButtonMenu
		{
			idc = 1602;
			x = 0.261149 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Repair aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REPAIR";
		};
		
		class FA18_REFUEL_BUTTON_1603: FA18X_RscButtonMenu
		{
			idc = 1603;
			x = 0.359575 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Refuel aircraft";
			action = "[]Spawn JS_S_fnc_FA18X_REFUEL";
		};
		
		class FA18_MR_LOADOUT_BUTTON_1604: FA18X_RscButtonMenu
		{
			idc = 1604;
			x = 0.556433 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Multirole loadout";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_MULTIROLE";
		};

		class FA18_CAP_LOADOUT_BUTTON_1605: FA18X_RscButtonMenu
		{
			idc = 1605;
			x = 0.653547 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Combat Air Patrol loadout";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_CAP";
		};

		class FA18_CAS_LOADOUT_BUTTON_1606: FA18X_RscButtonMenu
		{
			idc = 1606;
			x = 0.458003 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Combat Air Support loadout";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_CAS";
		};
		
		class FA18_EMPTY_LOADOUT_BUTTON_1607: FA18X_RscButtonMenu
		{
			idc = 1607;
			x = 0.750664 * safezoneW + safezoneX;
			y = 0.738053 * safezoneH + safezoneY;
			w = 0.0813676 * safezoneW;
			h = 0.137235 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Empty loadout, no weapons";
			action = "[]Spawn JS_S_fnc_FA18X_LOADOUT_EMPTY";
		};

		class FA18_RETURN_TO_MAIN_BUTTON_1608: FA18X_RscButtonMenu
		{
			idc = 1608;
			x = 0.787409 * safezoneW + safezoneX;
			y = 0.110712 * safezoneH + safezoneY;
			w = 0.0918668 * safezoneW;
			h = 0.0280066 * safezoneH;
			text = "";
			size = 0.023;
			tooltip = "Return to main menu";
			action = "[]Spawn JS_S_fnc_FA18X_RETURN_LOADOUT_SELECT";
		};

		class FA18_CLOSE_DIALOG_BUTTON_1609: FA18X_RscButtonMenu
		{
			idc = 1609;
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
