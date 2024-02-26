namespace {
    class Vector {
        float x, y;

    protected:
        Vector();
        Vector(float x, float y);
    public:
        float getX();
        float getY();
        float length();
        float sqrLength();
        Vector normalized();
        void normalize();
        Vector scalarProduct(float s);
        float dotProduct(Vector vec);
    };
}

