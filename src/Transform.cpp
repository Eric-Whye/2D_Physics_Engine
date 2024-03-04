#include "Transform.h"

namespace t {
	Transform::Transform() {
		position = vec::Vector(0, 0);
		rotation = 0;
	}

	Transform::Transform(vec::Vector position, float rotation) {
		this->position = position;
		this->rotation = rotation;
	}
}