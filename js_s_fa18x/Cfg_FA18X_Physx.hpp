		maxOmega = 2000;
		class Wheels
		{
			class Wheel_1
			{
				boneName							= "wheels_front";
				steering							= true;
				side								= "left";
				center								= "pos_wheels_front_center";
				boundary							= "pos_wheels_front_rim";
				width								= 0.3;
				mass								= 150;
				MOI									= 2;
				dampingRate							= 0.25;
				dampingRateDamaged					= 1;
				dampingRateDestroyed				= 1000;
				maxBrakeTorque						= 6000;
				maxHandBrakeTorque					= 0;
				suspTravelDirection[]				= {0, -1, 0};
				suspForceAppPointOffset				= "pos_wheels_front_center";
				tireForceAppPointOffset				= "pos_wheels_front_center";
				maxCompression						= 0.0;
				maxDroop							= 0.15;
				sprungMass							= 2500;
				//springStrength						= 149000;
				springStrength						= 189000;
				springDamperRate					= 37000;
				longitudinalStiffnessPerUnitGravity	= 1200;
				latStiffX							= 3;
				latStiffY							= 20;
				frictionVsSlipGraph[]				= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName							= "wheel_left";
				steering							= false;
				center								= "pos_wheel_left_center";
				boundary							= "pos_wheel_left_rim";
				width								= 0.28;
				maxBrakeTorque						= 18000;
				longitudinalStiffnessPerUnitGravity	= 2200;
				springDamperRate					= 23883;
				sprungMass							= 2134;
				//springStrength						= 95531;
				springStrength						= 1580200;
				suspForceAppPointOffset				= "pos_wheel_left_center";
				tireForceAppPointOffset				= "pos_wheel_left_center";
			};
			class Wheel_3: Wheel_2
			{
				boneName							= "wheel_right";
				side								= "right";
				center								= "pos_wheel_right_center";
				boundary							= "pos_wheel_right_rim";
				suspForceAppPointOffset				= "pos_wheel_right_center";
				tireForceAppPointOffset				= "pos_wheel_right_center";
			};
		};