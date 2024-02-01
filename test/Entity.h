#include "Vector.h"

class Entity
{
	Vector pos;
	double angle;
public:
	void getPosition();
	void setPosition();
	void rotateBy(double angle);
	void setRotation(double angle);

};

