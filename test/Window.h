#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include <iostream>

using namespace sf;
class Window{
	RenderWindow window;
	std::vector<Shape> shapes;
public:
	Window();
};

