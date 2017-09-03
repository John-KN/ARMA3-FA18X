class CfgMovesBasic 
{
	class DefaultDie;		// External class reference
	
	class ManActions 
	{
		FA18X_pilot 		= "FA18X_pilot";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic 
{
	class States 
	{
		class Crew;			// External class reference
		
		class FA18X_pilot_dead : DefaultDie 
		{
			actions 		= "DeadActions";
			speed 			= 0.5;
			looped 			= "false";
			terminal 		= true;
			file 			= "\js_s_fa18x\animations\FA18X_pilot_kia.rtm";
			connectTo[] 	= {"DeadState", 0.1};
		};
		
		class FA18X_pilot : Crew 
		{
			file 			= "\js_s_fa18x\animations\FA18X_pilot.rtm";
			interpolateTo[] = {"FA18X_pilot_dead", 1};
		};
		
	};
};











