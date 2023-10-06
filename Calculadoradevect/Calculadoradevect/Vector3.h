#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3 {
public:
    float x;
    float y;
    float z;

    Vector3();
    Vector3(float x, float y, float z);

    void setVector3(float x, float y, float z);
    void Addition(const Vector3& other);
    void Substraction(const Vector3& other);
    void Multiplication(const Vector3& other);
    void Division(const Vector3& other);
    float dotProduct(const Vector3& other);
    void crossProduct(const Vector3& other);
    float Magnitude();
    void Normalize();
};

#endif // VECTOR3_H
