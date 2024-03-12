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
	switch (body.shape->getShapeType()) {
	case sh::Rectangle:
		sf::RectangleShape* rect = new sf::RectangleShape();
		rect->setSize(sf::Vector2f(10, 20));
		rect->setFillColor(sf::Color::Blue);
		rect->setOutlineColor(sf::Color::Yellow);
		rect->setOutlineThickness(2);
		window->addShape(rect);
	}
}
