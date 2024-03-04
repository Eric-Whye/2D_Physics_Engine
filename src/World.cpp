#include "World.h"

void World::checkCollisions(){
}

void World::moveAllBodies()
{
}



World::World(ScreenWindow* window){
	this->window = window;
}

void World::UpdatePhysics(float timeStep){
	checkCollisions();
	moveAllBodies();
}


void World::addBody(Body body){
	bodies.push_back(body);
	window->addShape(body.shape->getSFMLShape());
}
