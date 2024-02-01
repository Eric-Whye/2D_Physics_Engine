#include <cmath>

class Vector {
    double x;
    double y;
public:
    Vector();
    Vector(double x, double y);
    double length();
    double sqrLength();
    Vector normalized();
    Vector normalize();
    Vector scalarProduct(double s);
    double dotProduct(Vector vec);
};

