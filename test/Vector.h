#include <cmath>
#include <SFML/System.hpp>
class Vector : sf::Vector2f{
public:
    float length();
    float sqrLength();
    Vector normalized();
    void normalize();
    Vector scalarProduct(float s);
    float dotProduct(Vector vec);
};

