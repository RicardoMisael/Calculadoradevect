#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    float x;
    float y;

    Vector2();
    Vector2(float x, float y);

    void setVector2(float x, float y);
    void Addition(const Vector2& other);
    void Substraction(const Vector2& other);
    void Multiplication(const Vector2& other);
    void Division(const Vector2& other);
    float dotProduct(const Vector2& other);
    float Magnitude();
    void Normalize();
};

#endif // VECTOR2_H
