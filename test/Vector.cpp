#include "Vector.h"
#include <SFML/System.hpp>
#include <cmath>

using namespace std;

float Vector::length() {
    return sqrt((x * x) + (y * y));
}

float Vector::sqrLength() {
    return (x * x) + (y * y);
}

sf::Vector2f Vector::normalized() {
    float normLength = 1 / length();
    return sf::Vector2f(x * normLength, y * normLength);
}

void Vector::normalize() {
    float normLength = 1 / length();
    x *= normLength;
    y *= normLength;
}

sf::Vector2f Vector::scalarProduct(float s) {
    return sf::Vector2f(x * s, y * s);
}

float Vector::dotProduct(sf::Vector2f vec) {
    return ((x * vec.x) + (y * vec.y));
}