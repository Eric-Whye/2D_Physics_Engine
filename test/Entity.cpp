#include "Entity.h"

Entity::Entity() {
	position = Vector(0, 0);
}
Entity::Entity(Vector position) {
	this->position = position;
}
Entity::Entity(float x, float y) {
	position.x = x;
	position.y = y;
}