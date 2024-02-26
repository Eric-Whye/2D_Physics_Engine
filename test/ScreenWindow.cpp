#include "ScreenWindow.h"
#include "Constants.h"
#include <iostream>


using namespace sf;


ScreenWindow::ScreenWindow() {
	window.create(VideoMode(constants::SIZE_X, constants::SIZE_Y), constants::WINDOW_TITLE);
	window.setFramerateLimit(constants::FRAMERATE_LIMIT);
}

void ScreenWindow::UpdateWindow() {
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();

			Draw();


			window.clear(Color::White);
			window.display();
		}
	}
}

void ScreenWindow::Draw() {
	for (RectangleShape shape : rectangleShapes) {
		window.draw(shape);
	}
	for (CircleShape shape : circleShapes) {
		window.draw(shape);
	}
	for (ConvexShape shape : convexShapes) {
		window.draw(shape);
	}
}

void ScreenWindow::updateShapesPositions(std::vector<Vector> positions) {
	for (int i = 0; i < positions.size(); i++) {
		shapes.at(i).setPosition(positions.at(i).getX(), positions.at(i).getY());
	}
}

void ScreenWindow::addRectangle(RectangleShape shape) { rectangleShapes.push_back(shape); }
void ScreenWindow::addCircle(CircleShape shape) { circleShapes.push_back(shape); }
void ScreenWindow::addConvex(ConvexShape shape) { convexShapes.push_back(shape); }
void ScreenWindow::clearShapes() {
	rectangleShapes.clear();
	circleShapes.clear();
	convexShapes.clear();
}


