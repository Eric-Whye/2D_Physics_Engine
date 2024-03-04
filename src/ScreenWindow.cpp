#include "ScreenWindow.h"
#include "Constants.h"
#include <iostream>


using namespace sf;


ScreenWindow::ScreenWindow() {
	window.create(VideoMode(constants::SIZE_X, constants::SIZE_Y), constants::WINDOW_TITLE);
	window.setFramerateLimit(constants::FRAMERATE_LIMIT);
}

void ScreenWindow::RenderWindow() {
	std::cout << shapes.size();
	Event event;
	while (window.pollEvent(event)) {
		if (event.type == Event::Closed)
			window.close();

		window.clear(Color::White);

		Draw();

		window.display();
		
	}
}

void ScreenWindow::Draw() {
	for (size_t i = 0; i < shapes.size(); i++) {
		window.draw(*shapes.at(i));
	}
}

//void ScreenWindow::addRectangle(RectangleShape shape) { shapes.push_back(std::make_shared<RectangleShape>(shape)); }
//void ScreenWindow::addCircle(CircleShape shape) { shapes.push_back(std::make_shared<CircleShape>(shape)); }
//void ScreenWindow::addConvex(ConvexShape shape){ shapes.push_back(std::make_shared <ConvexShape>(shape)); }


void ScreenWindow::updateShapesPositions(std::vector<vec::Vector> positions) {
	for (size_t i = 0; i < positions.size(); i++) {
		if (positions.size() != shapes.size())
			throw std::out_of_range("Number of positions unequal to Number of Shapes");

		shapes.at(i)->setPosition(positions.at(i).getX(), positions.at(i).getY());
	}
}

void ScreenWindow::addShape(sf::Shape* shape){
	std::cout << "hey";
	shapes.push_back(shape);
	std::cout << "hi";
}

void ScreenWindow::addRectangle(vec::Vector pos, float length, float width, sf::Color fillColour, sf::Color outlineColour, float outlineThickness){
	RectangleShape rect(Vector2f(pos.getX(), pos.getY()));
	rect.setSize(Vector2f(length, width));
	rect.setFillColor(fillColour);
	rect.setOutlineColor(outlineColour);
	rect.setOutlineThickness(outlineThickness);
	//addRectangle(rect);
}

void ScreenWindow::addCircle(vec::Vector pos, float radius, sf::Color fillColour, sf::Color outlineColour, float outlineThickness){
	CircleShape circle;
	circle.setPosition(Vector2f(pos.getX(), pos.getY()));
	circle.setRadius(radius);
	circle.setFillColor(fillColour);
	circle.setOutlineColor(outlineColour);
	circle.setOutlineThickness(outlineThickness);
	//addCircle(circle);
}

void ScreenWindow::addConvex(vec::Vector pos, size_t pointCount, sf::Color fillColour, sf::Color outlineColour, float outlineThickness){
	ConvexShape convex(pointCount);
	convex.setPosition(Vector2f(pos.getX(), pos.getY()));
	convex.setFillColor(fillColour);
	convex.setOutlineColor(outlineColour);
	convex.setOutlineThickness(outlineThickness);
	//addConvex(convex);
}


void ScreenWindow::clearShapes() { shapes.clear(); }


bool ScreenWindow::isOpen() {return window.isOpen();}
