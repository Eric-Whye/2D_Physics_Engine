#include "Constants.h"

namespace constants {
	extern enum ShapeType {
		Rectangle,
		Circle,
		Convex
	};

	extern const char WINDOW_TITLE[] = "2D Physics Engine";
	extern const int SIZE_X = 640;
	extern const int SIZE_Y = 480;

	extern const int FRAMERATE_LIMIT = 60;
}