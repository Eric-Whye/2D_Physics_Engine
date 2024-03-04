#pragma once
#include "Vector.h"

namespace t {
	struct Transform {
	public:
		vec::Vector position;
		float rotation;

		Transform();
		Transform(vec::Vector position, float rotation);
	};
}