#include <Windows.h>
#include <iostream>

namespace VALUES {
	namespace SAFE_VALUES {
		namespace MOVEMENT {
			const int fly_speed_min = 10;
			const int fly_speed_max = 25;

			const int speed_boost_min = 5;
			const int speed_boost_max = 15;

			const int dive_speed_min = 15;
			const int dive_speed_max = 50;

			const int gravity_scale_min = 0;
			const int gravity_scale_max = 5;
		};

		namespace CARRY {
			const int grabCooldowwn_min = 0;
			const int grabCooldowwn_max = 1;

			const int carryPickupDuration_min = 0;
			const int carryPickupDuration_max = 1;

			const int carryDropForce_min = 0;
			const int carryDropForce_max = 1;

			const int carryDiveDropForce_min = 0;
			const int carryDiveDropForce_max = 1;
		};
	};

	namespace DEFAULT_VALUES {
		// MOVEMENT
		const float default_max_speed = 9.500000f;
		const float default_carryMaxSpeed = 8.000000f;
		const float default_grabbingMaxSpeed = 5.000000f;
		const float default_diveForce = 16.500000f;
		const float default_airDiveForce = 7.000000f;
		const float default_gravityScale = 1.500000f;

		// COLLISIONS
		const float default_anyCollisionStunForce = 28.000000f;
		const float default_dynamicCollisionStunForce = 10.000000f;
		const float default_CollisionThreshold = 14.000000f;

		// CARRY
		const float default_carryPickupDuration = 0.100000f;
	};
};