#include "Vector2.h"
#include <cmath>

Vector2::Vector2() : x(0.0f), y(0.0f) {}

Vector2::Vector2(float x, float y) : x(x), y(y) {}

void Vector2::setVector2(float x, float y) {
    this->x = x;
    this->y = y;
}

void Vector2::Addition(const Vector2& other) {
    x += other.x;
    y += other.y;
}

void Vector2::Substraction(const Vector2& other) {
    x -= other.x;
    y -= other.y;
}

void Vector2::Multiplication(const Vector2& other) {
    x *= other.x;
    y *= other.y;
}

void Vector2::Division(const Vector2& other) {
    if (other.x != 0 && other.y != 0) {
        x /= other.x;
        y /= other.y;
    }
}

float Vector2::dotProduct(const Vector2& other) {
    return x * other.x + y * other.y;
}

float Vector2::Magnitude() {
    return sqrt(x * x + y * y);
}

void Vector2::Normalize() {
    float magnitude = Magnitude();
    if (magnitude != 0) {
        x /= magnitude;
        y /= magnitude;
    }
}
