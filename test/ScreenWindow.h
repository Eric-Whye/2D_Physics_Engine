#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include <iostream>

class ScreenWindow{
	sf::RenderWindow window;
	std::vector<sf::Shape> shapes;
public:
	ScreenWindow();
	void UpdateWindow();
	void Draw();

	void addRectangle(sf::RectangleShape shape) { shapes.push_back(shape); }
	void addCircle(sf::CircleShape shape) { shapes.push_back(shape); }
	void addConvex(sf::ConvexShape shape) {shapes.push_back(shape);}
	void clearShapes() { shapes.clear(); }
};

