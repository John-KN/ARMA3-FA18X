#include "basicDefines_A3.hpp"

class CfgPatches
{
	class JS_S_FA18X
	{
		author 						= "John_Spartan & Saul";
		name 						= "F/A-18X Black Wasp";
		url 						= "https://www.arma3.com";
		requiredAddons[] =
		{
			A3_Air_F_Jets
		};
		requiredVersion = 0.1;
		units[] =
		{
			"JS_S_FA18X"
		};
		weapons[] =
		{
		};
	};
};


//EXTERNAL CLASS REFERENCES/INHERITANCE 
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;							


//PILOT ANIMATIONS
#include "Cfg_FA18X_PilotAnims.hpp"

//Define Vehicles
class CfgVehicles
{
	//EXTERNAL CLASS REFERENCES/INHERITANCE 
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class Plane_Canopy_Base_F;	
	class Ejection_Seat_Base_F;
	class PlaneWreck;						

	class JS_S_FA18X : Plane_Base_F
	{
		//GENERAL
		displayName 				= "F/A-18X Black Wasp";
		author 						= "John_Spartan & Saul";
		scope						= public;

		vehicleClass				= "Air";
		side						= 1;
		faction						= "BLU_F";
		simulation					= "airplaneX";


		//CREW
		crew						= "B_Fighter_Pilot_F";
		typicalCargo[]				= {"B_Fighter_Pilot_F"};
		crewVulnerable				= true;
		driverAction				= "FA18X_pilot";
		driverLeftHandAnimName 		= "control_throttle";
		driverRightHandAnimName 	= "control_stick";

		precisegetinout				= 1;
		driverCanEject				= 0;
		cargoCanEject				= 0;
		ejectDeadGunner				= false;
		ejectDeadCargo				= false;
		ejectDeadDriver				= false;
		disableInventory			= 1;
		getInAction					= "Pilot_Plane_Fighter_01_Enter";
		getOutAction				= "Pilot_Plane_Fighter_01_Exit";
		getInRadius					= 5.5;


		//MODEL & TEXTURES
		editorPreview				= "\js_s_fa18x\data\ui\FA18X_editorPreview.jpg";
		picture 					= "\js_s_fa18x\data\ui\FA18X_picture.paa";
		icon 						= "\js_s_fa18x\data\ui\FA18X_icon.paa";
		mapSize						= 13.25;
		model						= "\js_s_fa18x\JS_S_FA18X_BLACK_WASP.p3d";
		animated					= 1;
		hiddenSelections[] =
		{
			"camo_hull", 
			"camo_misc_1", 
			"camo_misc_2", 
			"camo_glass_canopy", 
			"camo_glass_canopy_front", 
			"camo_glass_hud", 
			"camo_conformal_fuel_tanks", 
			"camo_EWP_center", 
			"camo_center_fuel_tank", 
			"engine_fire_left", 
			"engine_fire_right", 
			"pylon_3", 
			"pylon_4", 
			"pylon_5", 
			"pylon_6", 
			"pylon_7", 
			"pylon_8", 
			"camo_crew_ladder"
		};
		hiddenSelectionsTextures[] =
		{
			"js_s_fa18x\data\fa18x_hull_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_2_co.paa", 
			"js_s_fa18x\data\fa18x_glass_canopy_ca.paa", 
			"js_s_fa18x\data\fa18x_glass_canopy_ca.paa", 
			"js_s_fa18x\data\fa18x_glass_hud_ca.paa", 
			"js_s_fa18x\data\fa18x_misc_2_co.paa", 
			"js_s_fa18x\data\fa18x_misc_2_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_engine_fire_ca.paa", 
			"js_s_fa18x\data\fa18x_engine_fire_ca.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_misc_1_co.paa", 
			"js_s_fa18x\data\fa18x_ladder_co.paa"
		};



		//WEAPONS
		//define here only the weapons that are not dynamicly interchangable (guns, laser, counter-measures)
		//dynamic loadout is defined in Class Components > Class TransportPylonsComponent
		weapons[] =
		{
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher_Singles"
		};

		magazines[] =
		{
			"magazine_Fighter01_Gun20mm_AA_x450",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};



		//MISC
		driveOnComponent[]			= {};
		cabinOpening				= true;
		gearRetracting				= true;
		geardowntime				= 3;
		gearuptime					= 4.5;
		lightOnGear					= 1;
		damperSize					= 0.01;
		damperForce					= 0.01;
		damperDamping				= 0;
		canFloat					= false;
		formationX					= 30;
		formationZ					= 30;
		fuelCapacity				= 1550;
		availableForSupportTypes[]	= {"CAS_Bombing"};

		//DAMAGE & DESTRUCTION EFFECTS
		armor						= 60;
		armorStructural				= 2;
		armorLights					= 1;
		damageResistance			= 0.004;
		destrType					= "DestructWreck";
		epeImpulseDamageCoef		= 120;

		class HitPoints: HitPoints
		{
			class HitHull: HitHull				{armor = 3.5;	explosionShielding = 3;		name = "HitHull";		passThrough = 1;	visual = "Hit_Hull";			radius = 0.45;	minimalHit = 0.05;	depends = "0";	material = -1;};
			class HitEngine: HitHull			{armor = 3;		explosionShielding = 4.5;	name = "HitEngine";		passThrough = 0.8;	visual = "Hit_Engine";			radius = 0.6;	minimalHit = 0.05;	};
			class HitEngine2: HitEngine			{armor = 3;		explosionShielding = 4.5;	name = "HitEngine2";	passThrough = 0.8;	visual = "Hit_Engine2";			radius = 0.6;	minimalHit = 0.05;	};
			class HitAvionics: HitHull			{armor = 1.5;	explosionShielding = 4;		name = "HitAvionics";	passThrough = 0.4;	visual = "";					radius = 0.3;	minimalHit = 0.05;	};
			class HitFuel: HitHull				{armor = 4;		explosionShielding = 5;		name = "HitFuel";		passThrough = 0.6;	visual = "Hit_Fuel";			radius = 0.3;	minimalHit = 0.05;	};
			class HitFuel2: HitFuel				{armor = 4;		explosionShielding = 5;		name = "HitFuel2";		passThrough = 0.6;	visual = "Hit_Fuel2";			radius = 0.3;	minimalHit = 0.05;	};
			class HitGlass1: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitGlass1";		passThrough = 0;	visual = "Hit_Glass1"; 			radius = 0.2;	minimalHit = 0.1;	};
			class HitLAileron: HitHull			{armor = 1.8;	explosionShielding = 3.5;	name = "HitLAileron";	passThrough = 0.3;	visual = "Hit_AileronL"; 		radius = 0.35;	minimalHit = 0.05;	};
			class HitRAileron: HitLAileron		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRAileron";	passThrough = 0.3;	visual = "Hit_AileronR"; 		radius = 0.35;	minimalHit = 0.05;	};
			class HitLCRudder: HitHull			{armor = 1.8;	explosionShielding = 3.5;	name = "HitLCRudder";	passThrough = 0.3;	visual = "Hit_RudderL"; 		radius = 0.35;	minimalHit = 0.05;	};
			class HitRRudder: HitLCRudder		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRRudder";	passThrough = 0.3;	visual = "Hit_RudderR"; 		radius = 0.35;	minimalHit = 0.05;	};
			class HitLCElevator: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitLCElevator";	passThrough = 0.3;	visual = "Hit_ElevatorL"; 		radius = 0.35;	minimalHit = 0.05;	};
			class HitRElevator: HitLCElevator	{armor = 1.8;	explosionShielding = 3.5;	name = "HitRElevator";	passThrough = 0.3;	visual = "Hit_ElevatorR"; 		radius = 0.35;	minimalHit = 0.05;	};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {};
		};

		//RADAR
		LockDetectionSystem				= CM_Lock_Radar;
		incomingMissileDetectionSystem	= CM_Lock_Radar + CM_Missile;
		enableGPS						= 1;
		radarTarget						= 1;
		visualTarget					= 1;
		radarTargetSize					= 0.8;
		visualTargetSize				= 1.0;
		irTargetSize					= 1.0;
		namesound						= "Plane";

		//COMPONENTS
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=90;
						maxTrackableSpeed=400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.2;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					
				};
				class Bays
				{
					
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			}
		};

		//MEMORY POINTS & SELECTIONS
		memoryPointLDust 				= "pos_dust_left";
		memoryPointRDust 				= "pos_dust_right";
		memoryPointGun 					= "pos_nosegun";
		memoryPointLMissile 			= "l strela";
		memoryPointRMissile 			= "p strela";
		memoryPointLRocket 				= "l raketa";
		memoryPointRRocket 				= "p raketa";
		memoryPointCM[] 				= {"pos_flare_launcher1"};
		memoryPointCMDir[] 				= {"pos_flare_launcher1_dir"};
		memoryPointsGetInDriver 		= "pos_driver";
		memoryPointsGetInDriverDir 		= "pos_driver_dir";
 		memoryPointDriverOptics 		= "pos_atflir_camera";
		memoryPointsGetInDriverPrecise 	= "pos_getin_driver_precise";
		slingLoadCargoMemoryPoints[] 	= {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		selectionClan					= "clan";
		selectionDashboard				= "autobacklit";
		selectionShowDamage				= "poskozeni";

		//CARGO ITEMS
		class TransportItems {};

		//TURRETS
		class Turrets {};

		//TARGETING CAMERA

		unitInfoType			= "RscOptics_CAS_Pilot";
		driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";

		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="(4.8 / 120)";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=25;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};


		//PIP
		class RenderTargets 
		{
			class Center_Pilot_Mirror 
			{
				renderTarget = "rendertarget0";
						
				class CameraView1 
				{
					pointPosition 		= "pos_PIP_mirror_c";
					pointDirection 		= "pos_PIP_mirror_c_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;
				};
			};
			class Left_Pilot_Mirror
			{
				renderTarget = "rendertarget1";
						
				class CameraView1 
				{
					pointPosition 		= "pos_PIP_mirror_l";
					pointDirection 		= "pos_PIP_mirror_l_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;
				};
			};
			class Right_Pilot_Mirror 
			{
				renderTarget = "rendertarget2";
						
				class CameraView1 
				{
					pointPosition 		= "pos_PIP_mirror_r";
					pointDirection 		= "pos_PIP_mirror_r_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;
				};
			};

		};

		//SOUNDS
		attenuationEffectType		= "PlaneAttenuation";
		soundGetIn[]				= {"A3\Sounds_F\vehicles\air\CAS_01\getin_wipeout",1,1,40};
		soundGetOut[]				= {"A3\Sounds_F\air\Plane_Fighter_03\getout",1,1,40};
		cabinOpenSound[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\FX_Plane_Fighter_01_cabine_open_ext",3.16228,1,40};
		cabinCloseSound[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\FX_Plane_Fighter_01_cabine_close_ext",3.16228,1,40};
		cabinOpenSoundInternal[]	= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\FX_Plane_Fighter_01_cabine_open_int",10,1,40};
		cabinCloseSoundInternal[]	= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\FX_Plane_Fighter_01_cabine_close_int",10,1,40};
		soundWaterCollision1[]		= {"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",1.41254,1,500};
		soundWaterCollision2[]		= {"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",1.41254,1,500};
		soundWaterCrashes[]			= {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		buildCrash0[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
		buildCrash1[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
		buildCrash2[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
		buildCrash3[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
		soundBuildingCrash[]		= {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",3.16228,1,900};
		WoodCrash1[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",3.16228,1,900};
		WoodCrash2[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",3.16228,1,900};
		WoodCrash3[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",3.16228,1,900};
		soundWoodCrash[]			= {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
		armorCrash1[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
		armorCrash2[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
		armorCrash3[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
		soundArmorCrash[]			= {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[]					= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
		Crash1[]					= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
		Crash2[]					= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
		Crash3[]					= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
		soundCrashes[]				= {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		soundDammage[]				= {"",0.562341,1};
		soundEngineOnInt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_start_int",1,1};
		soundEngineOnExt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_start_ext",1.75,1,300};
		soundEngineOffInt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_shut_int",1,1};
		soundEngineOffExt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_shut_ext",1.75,1,300};
		soundLocked[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",1,1};
		soundIncommingMissile[]		= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",1,1.5};
		soundGearUp[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",2.25,1,250};
		soundGearDown[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",2.25,1,250};
		soundFlapsUp[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",1.5,1,150};
		soundFlapsDown[]			= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",1.5,1,150};
		soundSetSonicBoom[] 		= {Plane_Fighter_SonicBoom_SoundSet};
		class Sounds
		{
			soundSets[] = {"Plane_Fighter_01_EngineLowExt_SoundSet","Plane_Fighter_01_EngineHighExt_SoundSet","Plane_Fighter_01_ForsageExt_SoundSet","Plane_Fighter_01_WindNoiseExt_SoundSet","Plane_Fighter_01_EngineExt_Dist_Front_SoundSet","Plane_Fighter_01_EngineExt_Middle_SoundSet","Plane_Fighter_01_EngineExt_Dist_Rear_SoundSet","Plane_Fighter_01_EngineLowInt_SoundSet","Plane_Fighter_01_EngineHighInt_SoundSet","Plane_Fighter_01_ForsageInt_SoundSet","Plane_Fighter_01_WindNoiseInt_SoundSet","Plane_Fighter_01_VelocityInt_SoundSet"};
		};
		class RainExt
		{
				sound[]		= {"A3\Sounds_F\vehicles\noises\rain1_ext",1.77828,1,100};
				frequency	= 1;
				volume		= "camPos * rain * (speed factor[50, 0])";
		};
		class RainInt
		{
				sound[]		= {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency	= 1;
				volume		= "(1-camPos) * rain * (speed factor[50, 0])";
		};

		//MFD
		//#include "cfgHUD.hpp"

		//ANIMATION SOURCES
		#include "Cfg_FA18X_AnimationSources.hpp"

		//MARKER LIGHTS & MAIN LIGHTS
		class MarkerLights 
		{
			
			class MarkerLight_wingtip_red 
			{
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				name = "marker_light_wingtip_l";
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = false;
				dayLight = 0;
				useFlare = 0;
				
				class Attenuation 
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			
			class MarkerLight_wing_red : MarkerLight_wingtip_red 
			{
				name = "marker_light_wing_l";
			};

			class MarkerLight_tail_red_r : MarkerLight_wingtip_red 
			{
				name = "marker_light_tail_r";

				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.15, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = false;
				dayLight = 0;
				useFlare = 0;
			};

			class MarkerLight_tail_red_l : MarkerLight_tail_red_r 
			{
				name = "marker_light_tail_l";
			};

			class MarkerLight_hull_red : MarkerLight_wingtip_red 
			{
				name = "marker_light_hull_l";
			};

			class MarkerLight_wingtip_green : MarkerLight_wingtip_red 
			{
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				name = "marker_light_wingtip_r";
			};

			class MarkerLight_wing_green : MarkerLight_wingtip_red 
			{
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				name = "marker_light_wing_r";
			};

			class MarkerLight_hull_green : MarkerLight_wingtip_red 
			{
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				name = "marker_light_hull_r";
			};
			
			class Collision_Light_tail_White : MarkerLight_wingtip_red
			{
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				name = "marker_light_tail_rr";
				blinking = true;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
		};

		class Reflectors 
		{
			class Gear_Front_light_1 
			{
			
				position = "pos_gear_front_light";
				direction = "pos_gear_front_light_dir";
				hitpoint = "gear_front_light_on";
				selection = "gear_front_light_on";

				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100, 0};
				intensity = 50;
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				
				class Attenuation 
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
					hardLimitStart = 150;
					hardLimitEnd = 300;
				};
			};

			class Gear_Front_light_2 
			{
				position = "pos_gear_front_light";
				direction = "pos_gear_front_light_dir";
				hitpoint = "gear_front_light_on";
				selection = "gear_front_light_on";
				
				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100, 0};
				intensity = 50;
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				
				class Attenuation 
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
					hardLimitStart = 150;
					hardLimitEnd = 300;
				};
			};	
		};
		
		
		//FLIGHT MODEL
		#include "Cfg_FA18X_FlightModel.hpp"

		//USER ACTIONS
		class UserActions
	   	{
			class Plane_Fighter_01_Eject
			{
				priority		= 0.05;
				shortcut		= "Eject";
				displayName		= "$STR_A3_action_eject";
				condition		= "player in this && {speed this > 1}";
				statement		= "[this] spawn bis_fnc_planeEjection";
				position		= "pilotcontrol";
				radius			= 10;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
			};
			class Plane_Fighter_01_tailhook_down: Plane_Fighter_01_Eject
			{
				displayName		= "$STR_A3_action_tailhook_down";
				shortcut		= "";
				condition		= "this animationPhase ""tailhook"" > 0.1  and {speed this > 100}";
				statement		= "this animate [""tailhook"",0]; this say ""Plane_Fighter_01_tailhook_down_sound""; this say3D ""Plane_Fighter_01_tailhook_down_sound"";this SetUserMFDvalue [0,1]; [this] spawn BIS_fnc_AircraftTailhook;";
			};
			class Plane_Fighter_01_tailhook_up: Plane_Fighter_01_tailhook_down
			{
				displayName		= "$STR_A3_action_tailhook_up";
				condition		= "this animationPhase ""tailhook"" < 0.1";
				statement		= "this animate [""tailhook"",1]; this say ""Plane_Fighter_01_tailhook_up_sound""; this SetUserMFDvalue [0,0];this say3D ""Plane_Fighter_01_tailhook_up_sound""";
			};
			class Plane_Fighter_01_fold_wings: Plane_Fighter_01_Eject
			{
				displayName		= "$STR_A3_action_wings_fold";
				shortcut		= "";
				radius			= 5;
				condition		= "this animationPhase ""wing_fold_left"" < 0.1 and (speed this) < 40 and player in this";
				statement		= "this animate [""wing_fold_left"",1]; this animate [""wing_fold_right"",1]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
			class Plane_Fighter_01_unfold_wings: Plane_Fighter_01_fold_wings
			{
				displayName		= "$STR_A3_action_wings_unfold";
				condition		= "this animationPhase ""wing_fold_left"" > 0.9 and (speed this) < 40 and player in this";
				statement		= "this animate [""wing_fold_left"",0]; this animate [""wing_fold_right"",0]; this say3D ""Plane_Fighter_01_foldwing_sound""";
			};
			
			class FA18x_Formation_markers_on
			{
				displayName = "Formation lights on";
				condition = "this animationPhase ""Formation_markers"" > 0.1 and player in this";
				statement = "this animate [""Formation_markers"",0]";
				position = "pilotcontrol";
				shortcut = "User13";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		        hideOnUse = 1;
			};
			
			class FA18x_Formation_markers_off
			{
				displayName = "Formation lights off";
				condition = "this animationPhase ""Formation_markers"" < 0.1 and player in this";
				statement = "this animate [""Formation_markers"",1]";
				position = "pilotcontrol";
				shortcut = "User13";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		        hideOnUse = 1;
			};

			class FA18x_refueling_probe_extend
			{
				displayName = "Extend Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				shortcut = "User12";
				showWindow = 0;
		        hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_probe"" < 0.5 and speed this > 100";
				statement = "this animate [""fuel_probe"",1]";
			};
			
			class FA18x_refueling_probe_retract
			{
				displayName = "Retract Refueling Probe";
				position = "pilotcontrol";
				onlyforplayer = 1;
				shortcut = "User12";
				showWindow = 0;
		        hideOnUse = 1;
				radius = 5;
				condition = "player in this and this animationPhase ""fuel_probe"" > 0.5";
				statement = "this animate [""fuel_probe"",0]";
			};
		};

		//3DEN & VIRTUAL GARAGE COMPATABILITY
		class TextureSources
		{
			
		};
		animationList[]	= {};
		textureList[]	= {};

		//PhysX Wheels
		#include "Cfg_FA18X_Physx.hpp"

		//OPTICS & VIEW
		extCameraPosition[] = {0.0, 3.5, -20.0};
		class ViewPilot: ViewPilot
		{
			initFov		= 0.9;
			initAngleX	= 0;
			minAngleX	= -40;
			maxAngleX	= 85;
			initAngleY	= 0;
			minAngleY	= -130;
			maxAngleY	= 130;

			//TRACK IR SUPPORT
			//How far can the head be moved to the sides left and right
			minMoveX	= -0.1;
			maxMoveX	= 0.1;

			//How far can the head be moved up and down
			minMoveY	= -0.025;
			maxMoveY	= 0.05;

			//How far can the head be moved forward and backward
			minMoveZ	= -0.1;
			maxMoveZ	= 0.1;
		};

		//FX
		class Exhausts
		{
			class Exhaust_left
			{
				position	= "pos_Exhausts_start_left";
				direction	= "pos_Exhausts_end_left";
				effect		= "ExhaustsEffectPlaneHP";
				engineIndex	= 0;
			};

			class Exhaust_right
			{
				position	= "pos_Exhausts_start_right";
				direction	= "pos_Exhausts_end_right";
				effect		= "ExhaustsEffectPlaneHP";
				engineIndex	= 1;
			};

		};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName	= "FX_WingVortices_FighterJet";
				position	= "pos_wingtip_vapour_L";
			};

			class WingTipRight
			{
				effectName	= "FX_WingVortices_FighterJet";
				position	= "pos_wingtip_vapour_R";
			};

			class BodyLeft_inner_1
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_L_1";
			};

			class BodyLeft_inner_2
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_L_2";
			};

			class BodyLeft_inner_3
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_L_3";
			};

			class BodyRight_inner_1
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_R_1";
			};

			class BodyRight_inner_2
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_R_2";
			};

			class BodyRight_inner_3
			{
				effectName	= "FX_FuselageVapour_FighterJet";
				position	= "pos_body_vapour_R_3";
			};
		};

		//INFO
		class Library
		{
			libEnable	= 1;
			libTextDesc	= "";
		};

		//B01 Advanced Functionality
		//ADDITIONAL FUNCTIONALITY by Bravo Zero One

		tailHook = true;														// allow to land on carrier
		class CarrierOpsCompatability
		{
			ArrestHookAnimationList[]	= {"tailhook"};							//List of animation played to animate tailhook.
			ArrestHookAnimationStates[]	= {0,0.75,1};							//Tailhook animation states when down, hooked, up.
			ArrestHookMemoryPoint		= "pos_tailhook";						//TailHook memory point
			ArrestMaxAllowedSpeed		= 275;									//Max speed km/h allowed for successful landing
			ArrestSlowDownStep			= 0.8;									//Simulation step for calcualting how smooth plane will be slowed down.
			ArrestVelocityReduction		= -12;									//Speed reduced per simulation step
			LaunchVelocity				= 300;									//Speed required for take off
			LaunchVelocityIncrease		= 10;									//Speed increased per simulation step
			LaunchAccelerationStep		= 0.001;								//Simulation step for calcualting how smooth plane will launched from carrier catapult.
			LaunchBarMemoryPoint		= "pos_gear_f_hook";					//LaunchBar memory point
		};
		class AircraftAutomatedSystems
		{
			wingStateControl		= 1;										//enable automated wing state control to prevent player to take off with folded wings
			wingFoldAnimations[]	= {"wing_fold_left","wing_fold_right"};		//foldable wing animation list
			wingStateFolded			= 1;										//animation state when folded
			wingStateUnFolded		= 0;										//animation state when un-folded
			wingAutoUnFoldSpeed		= 40;										//speed treshold when triger this feature, and unfold wings for player

		};
		class EjectionSystem
		{
			EjectionSeatEnabled		= 1;										//enable advanced ejection system
			EjectionDual			= 0;										//currently only single seat aircraft ejectiion supported (to do for latter)
			EjectionSeatClass		= "JS_S_FA18X_Ejection_Seat";				//class name of ejector seat to use
			CanopyClass				= "JS_S_FA18X_Canopy";						//class name of canopy to use
			EjectionSeatHideAnim	= "ejection_seat_hide";						//name of the hide animation that will hide ejector seat mesh in plane
			EjectionSeatRailAnim	= "ejection_seat_motion";					//name of the animation that will be played to start a smooth ejection motion out of cockpit
			CanopyHideAnim			= "canopy_open_hide";						//name of the hide animation that will hide canopy mesh in plane
			EjectionSeatPos			= "pos_eject_dir";							//position memory point whwre to attach ejector seat
			CanopyPos				= "pos_eject_canopy";						//position memory point where to attach dummy canopy
			EjectionSoundExt		= "Plane_Fighter_01_ejection_ext_sound";	//sound to play when ejection trigered (external)
			EjectionSoundInt		= "Plane_Fighter_01_ejection_in_sound";		//sound to play when ejection trigered (in-ternal)
			EjectionParachute		= "Steerable_Parachute_F";					//class name parachute used in ejection
			EjectionSeatForce		= 50;										//ejection seat blast force
			CanopyForce				= 30;										//canopy bast force
		};


		//END OF ADDITIONAL FUNCTIONALITY by Bravo Zero One

		class Eventhandlers: Eventhandlers
		{
			hit				= "_this call bis_fnc_planeAiEject";
			landing			= "[_this,true] call bis_fnc_aircraftTailhookAi";
			landingcanceled	= "[_this,false] call bis_fnc_aircraftTailhookAi";
			engine			= "_this call bis_fnc_aircraftFoldingWings";
			gear			= "_this call bis_fnc_aircraftFoldingWings";
		};

	};


	class JS_S_FA18X_Canopy : Plane_Canopy_Base_F
	{

		author						= "John_Spartan & Saul";
		scope						= protected;
		displayName					= "$STR_A3_Fighter_01_Canopy_name";
		model						= "\js_s_fa18x\JS_S_FA18X_canopy.p3d";
	};


	class JS_S_FA18X_Ejection_Seat : Ejection_Seat_Base_F
	{
		author						= "$STR_A3_author_B01";
		scope						= protected;
		displayName					= "$STR_A3_Ejection_Seat_01_name";
		side						= 1;
		faction						= "BLU_F";

		//UPDATED TO USE MODEL FROM VANILLA FIGHTER 03 
		model			= "\js_s_fa18x\JS_S_FA18X_EJECTION_SEAT.p3d";

		icon			= "iconParachute";
		picture			= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		crew			= "B_Fighter_Pilot_F";
		driverAction	= "Pilot_Plane_Fighter_Ejection";
		cargoAction[]	= {"Pilot_Plane_Fighter_Ejection"};
	};

};






