#include "Body.h"
Body::Body() {
	sh::RectangleShape rect;
	shape = &rect;
}

Body::Body(vec::Vector position){
	sh::RectangleShape rect(position, vec::Vector(1, 1));
	shape = &rect;
}

void Body::setShapeAsRectangle(vec::Vector size){
	sh::RectangleShape rect(transform.position, size);
	shape = &rect;
}

void Body::setShapeAsCircle(float radius){
	sh::CircleShape circle(transform.position, radius);
	shape = &circle;
}

vec::Vector Body::getPosition(){
	return transform.position;
}

void Body::setPosition(vec::Vector position){
	transform.position = position;
	shape->setPosition(position);
}
