#ifndef VECTOR_H
#define VECTOR_H


class Vector {
    public:
        double x;
        double y;
        double z;
        Vector();
        Vector(double x, double y, double z);
        double length();
        double sqrLength();
        Vector normalized();
        Vector scalarProduct(double s);
        Vector crossProduct(Vector vec);
        Vector dotProduct(Vector vec);
};

#endif // VECTOR_H
