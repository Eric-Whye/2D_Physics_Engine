#include "Vector.h"
#include <cmath>

using namespace std;

double Vector::length() {
    return sqrt((x * x) + (y * y));
}

double Vector::sqrLength() {
    return (x * x) + (y * y);
}

Vector Vector::normalized() {
    double normLength = 1 / length();
    return Vector(x * normLength, y * normLength);
}

void Vector::normalize() {
    double normLength = 1 / length();
    x *= normLength;
    y *= normLength;
}

Vector Vector::scalarProduct(double s) {
    return Vector(x * s, y * s);
}

double Vector::dotProduct(Vector vec) {
    return ((x * vec.x) + (y * vec.y));
}