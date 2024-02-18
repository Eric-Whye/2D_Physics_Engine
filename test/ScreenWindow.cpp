#include "ScreenWindow.h"
#include "Constants.h"

using namespace sf;

ScreenWindow::ScreenWindow() {
	window.create(VideoMode(SIZE_X, SIZE_Y), WINDOW_TITLE);
	window.setFramerateLimit(FRAMERATE_LIMIT);
}

void ScreenWindow::UpdateWindow() {
	Event event;
	while (window.pollEvent(event)){
		if (event.type == sf::Event::Closed)
			window.close();


		Draw();


		window.clear(Color::White);
	}
}

void ScreenWindow::Draw() {
	for (int i = 0; i < shapes.size(); i++) {
		window.draw(shapes.at(i));
	}
	window.display();
}


