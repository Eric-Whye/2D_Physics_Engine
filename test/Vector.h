#include <SFML/System.hpp>

class Vector : public sf::Vector2f{
public:
    float length();
    float sqrLength();
    sf::Vector2f normalized();
    void normalize();
    sf::Vector2f scalarProduct(float s);
    float dotProduct(sf::Vector2f vec);
};

