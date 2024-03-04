#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include "Constants.h"
#include "Vector.h"


class ScreenWindow{
	sf::RenderWindow window;
	std::vector<sf::Shape*> shapes;

	void Draw();

	//void addRectangle(sf::RectangleShape shape);
	//void addCircle(sf::CircleShape shape);
	//void addConvex(sf::ConvexShape shape);
public:
	ScreenWindow();
	void RenderWindow();

	void updateShapesPositions(std::vector<vec::Vector> positions);
	
	void addShape(sf::Shape* shape);
	void addRectangle(vec::Vector pos, float length, float width, sf::Color fillColour, sf::Color outlineColour, float outlineThickness);
	void addCircle(vec::Vector pos, float radius, sf::Color fillColour, sf::Color outlineColour, float outlineThickness);
	void addConvex(vec::Vector pos, size_t pointCount, sf::Color fillColour, sf::Color outlineColour, float outlineThickness);

	void clearShapes();

	bool isOpen();
};

