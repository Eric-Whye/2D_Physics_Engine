#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants{
	enum ShapeType {
		Rectangle,
		Circle,
		Convex
	};

	static const char WINDOW_TITLE[] = "2D Physics Engine";
	static const int SIZE_X = 640;
	static const int SIZE_Y = 480;

	static const int FRAMERATE_LIMIT = 60;
}

#endif