#include "Vector.h"
#include <cmath>

using namespace std;

Vector::Vector(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector::Vector(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

double Vector::length(){
    return sqrt((x*x) + (y*y));
}

double sqrLength();{
    return (x*x) + (y*y);
}

Vector normalized(){
    double normLength = 1/length();
    return Vector(x*normLength, y*normLength, z*normLength);
}

Vector normalize(){
    double normLength = 1/length();
    x*=normLength;
    y*=normLength;
    z*=normLength;
}

Vector scalarProduct(double s){
    return Vector(x * s, y * s, z * s);
}

Vector crossProduct(Vector vec){
    return Vector(((x * vec.y)-(y * vec.x))-((x * vec.z)-(z * vec.x)) -((y * vec.z)-(z * vec.y)));
}

Vector dotProduct(Vector vec){
    return Vector((x*vec.x) + (y * vec.y) + (z * vec.z));
}




