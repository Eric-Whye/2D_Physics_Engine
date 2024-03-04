#pragma once
#include "Shapes.h"
#include "Transform.h"
#include "Mass.h"
#include "Vector.h"

struct Body {
	sh::Shape* shape;
	t::Transform transform;
	//Mass mass;
	//Material
	//vec::Vector velocity;
	//vec::Vector force;
	//graivty scale

public:
	Body();
	Body(vec::Vector position);
	void setShapeAsRectangle(vec::Vector size);
	void setShapeAsCircle(float radius);

	vec::Vector getPosition();
	void setPosition(vec::Vector position);
};