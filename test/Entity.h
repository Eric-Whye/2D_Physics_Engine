#pragma once
#include "Constants.h"
#include "Vector.h"
#include "SFML\Graphics.hpp"

class Entity{
	Vector position;

protected:
	Entity();
	Entity(Vector position);
	Entity(constants::ShapeType shapeType);
	Entity(Vector position, constants::ShapeType shapeType);

public:
	const constants::ShapeType shapeType;
	Vector getVector();
	void setVector(Vector vec);
};

