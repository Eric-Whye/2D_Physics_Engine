
#include "Vector.h"
#include <SFML/System.hpp>
#include <cmath>

using namespace std;

namespace vec {
    Vector::Vector() {
        x = 0, y = 0;
    }
    Vector::Vector(float x, float y) {
        this->x = x;
        this->y = y;
    }

    float Vector::getX() { return x; }
    float Vector::getY() { return y; }

    float Vector::length() {
        return sqrt((x * x) + (y * y));
    }

    float Vector::sqrLength() {
        return (x * x) + (y * y);
    }

    Vector Vector::normalized() {
        float normLength = 1 / length();
        return Vector(x * normLength, y * normLength);
    }

    void Vector::normalize() {
        float normLength = 1 / length();
        x *= normLength;
        y *= normLength;
    }

    Vector Vector::scalarProduct(float s) {
        return Vector(x * s, y * s);
    }

    float Vector::dotProduct(Vector vec) {
        return ((x * vec.x) + (y * vec.y));
    }

    Vector Vector::normal() { return Vector(-y, x); }

    Vector Vector::normal(Vector origin) {
        float dx = origin.x - x;
        float dy = origin.y - y;
        return Vector(-dy, dx); 
    }


    

    bool Vector::operator==(const Vector& v) const{
        return false;
        //return x == v.getX() && y == v.getY();
    }
}