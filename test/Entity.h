#include "Vector.h"
#include "SFML\System.hpp"

class Entity
{
	sf::Vector2f thing = sf::Vector2f();
public:
	Entity();
	Entity(Vector position);
	Entity(float x, float y);

	float length();
	float sqrLength();
	Vector normalized();
	void normalize();
	Vector scalarProduct(float s);
	float dotProduct(Vector vec);

	Entity getPosition();
	void setPosition(Entity newPosition);
	void move(float offsetX, float offsetY);
};

