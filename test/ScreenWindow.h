#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include "Constants.h"
#include "Vector.h"

class ScreenWindow{
	sf::RenderWindow window;
	std::vector<sf::Shape> shapes;
	std::vector<sf::RectangleShape> rectangleShapes;
	std::vector<sf::CircleShape> circleShapes;
	std::vector<sf::ConvexShape> convexShapes;

public:
	ScreenWindow();
	void UpdateWindow();
	void Draw();

	void updateShapesPositions(std::vector<Vector> positions);
	void addRectangle(sf::RectangleShape shape);
	void addCircle(sf::CircleShape shape);
	void addConvex(sf::ConvexShape shape);
	void clearShapes();
};

