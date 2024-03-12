#pragma once
#include "ScreenWindow.h"
#include "SFML\Graphics.hpp"
#include "Body.h"

struct Pair {
	Body* bodyA;
	Body* bodyB;
};


class World{
	ScreenWindow* window;
	std::vector<Body> bodies;

	void checkCollisions();
	void moveAllBodies();


public:
	World(ScreenWindow* window);

	void UpdatePhysics(float timeStep);

	void addBody(Body body);
};

