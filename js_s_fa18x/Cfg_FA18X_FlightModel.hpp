		////////////////////////////////////////////////////////////////////////////////////////////////////////
		/// CREATED by Bravo Zero One
		/// for use on F/A-181 Black Wasp II
		/// FLIGHT MODEL [or FM]
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		airBrake = 1;								/// does aircraft has airbrake 0/1 [no/yes]
		airBrakeFrictionCoef = 2.4;
		flaps = 1;									/// does aircraft uses flaps 0/1 [no/yes]
		flapsFrictionCoef = 0.36;					/// sets the effectivity of using flaps to increase drag/lift
		gearsUpFrictionCoef = 0.8;
		brakeDistance = 250;						/// braking distance
		wheelSteeringSensitivity = 4;				/// wheel stearing sensativity on ground
		maxSpeed = 1200;							/// max speed kmh
		altFullForce = 5000;						/// CRUISE ALTITUDE
		altNoForce = 15000;							/// SERVICE CEILING
		rudderInfluence = 0.7660;					/// Basic angle (cos angle) of the rudder extent

		aileronSensitivity = 1.2;					/// coefficient of ailerons affecting roll of the plane
		elevatorSensitivity = 1.4;					/// coefficient of elevators affecting changing of plane horizontal heading

		elevatorControlsSensitivityCoef = 4.0;		/// elevator coefficient of player's controller sensitivity (does not affect AI)
		aileronControlsSensitivityCoef = 3.5;		/// aileron coefficient of player's controller sensitivity (does not affect AI)
		rudderControlsSensitivityCoef = 4.0;		/// rudder coefficient of player's controller sensitivity (does not affect AI)

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		/// this setting is linked to geometry LOD in the model, and usees the weight data from GEO LOD
		envelope[] =
		{
			0,		// 	0
			0.11,	// 	100
			0.43,	// 	200
			1.05,	// 	300
			1.72,	// 	400
			2.69,	// 	500
			3.87,	// 	600
			5.27,	// 	700
			6.89,	// 	800
			8.72,	// 	900
			9.7,	// 	1000
			9.6,	// 	1100
			9.2,	// 	1200
			8.5,	// 	1300
			8.2,	// 	1400
			8.0		// 	1500
		};

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		/// effectiveness according to current speed and maxSpeed ratio
		/// last value goes for 150% of max speed
		thrustCoef[] =
		{
			1.76,	// 	0
			1.69,	// 	120
			1.80,	// 	240
			1.95,	// 	360
			2.54,	// 	480
			2.81,	// 	600
			3.89,	// 	720
			3.95,	// 	840
			4.95,	// 	960
			5.95,	// 	1080
			2.50,	// 	1200
			1.50,	// 	1320
			0.00,	// 	1440
			0.00,	// 	1560
			0.00,	// 	1680
			0.00	// 	1800
		};											/// default value is 1
		elevatorCoef[] =
		{
			0.3,	// 	0
			0.50,	// 	120
			0.66,	// 	240
			0.52,	// 	360
			0.49,	// 	480
			0.46,	// 	600
			0.43,	// 	720
			0.40,	// 	840
			0.35,	// 	960
			0.30,	// 	1080
			0.25,	// 	1200
			0.18,	// 	1320
			0.17,	// 	1440
			0.16,	// 	1560
			0.15,	// 	1680
			0.15	// 	1800
		}; 											/// default value is 1
		aileronCoef[] =
		{
			0.4,	// 	0
			0.5,	// 	120
			0.8,	// 	240
			0.95,	// 	360
			1.02,	// 	480
			1.04,	// 	600
			1.03,	// 	720
			1.01,	// 	840
			1.0,	// 	960
			0.7,	// 	1080
			0.6,	// 	1200
			0.55,	// 	1320
			0.5,	// 	1440
			0.45,	// 	1560
			0.4,	// 	1680
			0.35	// 	1800
		};   										/// default value is 1
		rudderCoef[] =
		{
			0.5,	// 	0
			1.8,	// 	120
			2.6,	// 	240
			2.75,	// 	360
			2.8,	// 	480
			2.85,	// 	600
			2.9,	// 	720
			2.95,	// 	840
			2.98,	// 	960
			3.01, 	// 	1080
			2.7,	// 	1200
			1.1,	// 	1320
			0.9,	// 	1440
			0.7,	// 	1560
			0.5,	// 	1680
			0.3		// 	1800
		};    										/// default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));


		angleOfIndicence = -1.0*3.1415/180;			// angle of incidence - difference between forward and airfold chord line - def. val is 3*PI/180 (meaning three degrees), be carefull with this value, will affect how much the nose of aircraft drops down during a level flight
		draconicForceXCoef = 7.0; 					// yaw axis
		draconicForceYCoef = 1.1;					// pitch axis
		draconicForceZCoef = 1.0;					// ???
		draconicTorqueXCoef[] =
		{
/* 		    4.6,  	// 0
		    5.5,    // 180
		    6.2,    // 360
		    7.0,    // 540
		    7.7,    // 720
		    8.3,    // 900
		    9.0,    // 1080
		    9.1,    // 1260
		    9.2,    // 1440
		    9.2,    // 1620
		    9.2     // 1800  */
			
			2.3,  	// 0
		    2.25,   // 180
		    3.1,    // 360
		    3.5,    // 540
		    3.85,   // 720
		    4.14,   // 900
		    4.5,    // 1080
		    4.55,   // 1260
		    4.6,    // 1440
		    4.6,    // 1620
		    4.6     // 1800 
			
		};
		draconicTorqueYCoef[] =
		{
			6.8,	// 	0
			5.5,	// 	75
			4.0,	// 	150
			1.6,	// 	225
			0.1,	// 	300
			0.0,	// 	375
			0.0,	// 	450
			0.0,	// 	525
			0.0,	// 	600
			0.0,	// 	675
			0.0,	// 	750
			0.0,	// 	825
			0.0,	// 	900
			0.0,	// 	975
			0.0,	// 	1050
			0.0,	// 	1125
			0.0,	// 	1200
			0.0,	// 	1275
			0.0,	// 	1350
			0.0,	// 	1425
			0.0,	// 	1500
			0.0,	// 	1575
			0.0,	// 	1650
			0.0,	// 	1725
			0.0		// 	1800
		};

		airFrictionCoefs0[] = { 0.0, 0.0, 0.0 };
		airFrictionCoefs1[] = { 0.1, 0.5, 0.0075 };
		airFrictionCoefs2[] = { 0.001, 0.005, 0.000067};

		gunAimDown = 0.0;							/// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0;							/// adjusts the view of pilot to have crosshair centred
													/// FM imformation for AI
		landingSpeed = 265; 						/// used for AI to approach the runawy, the plane should be stable at this speed
		stallSpeed = 220;
		stallWarningTreshold = 0.12;
		acceleration = 200;							/// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		landingAoa = 5*3.1415/180;					/// what AoA is going the IA use to land the plane

		////////////////////////////////////////////////////////////////////////////////////////////////////////
		/// END OF FLIGHT MODEL CONFIG
		////////////////////////////////////////////////////////////////////////////////////////////////////////
