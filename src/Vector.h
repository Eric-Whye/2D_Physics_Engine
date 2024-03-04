#pragma once
namespace vec{
    class Vector {
        float x, y;

    protected:
      
    public:
        vec::Vector();
        Vector(float x, float y);
        float getX();
        float getY();
        float length();
        float sqrLength();
        Vector normalized();
        void normalize();
        Vector scalarProduct(float s);
        float dotProduct(Vector vec);
        
        Vector normal();
        Vector normal(Vector origin);

        bool operator==(const Vector& v) const;
        
    };
}

