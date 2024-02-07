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
};

