#ifndef VECTOR4_H
#define VECTOR4_H

class Vector4 {
public:
    float x;
    float y;
    float z;
    float w;

    Vector4();
    Vector4(float x, float y, float z, float w);

    void setVector4(float x, float y, float z, float w);
    void Addition(const Vector4& other);
    void Substraction(const Vector4& other);
    void Multiplication(const Vector4& other);
    void Division(const Vector4& other);
    float dotProduct(const Vector4& other);
    // Implementa el cálculo del producto cruz aquí
    float Magnitude();
    void Normalize();
};

#endif // VECTOR4_H
