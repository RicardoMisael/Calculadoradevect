#include "Vector4.h"
#include <cmath>

Vector4::Vector4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

Vector4::Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

void Vector4::setVector4(float x, float y, float z, float w) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->w = w;
}

void Vector4::Addition(const Vector4& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    w += other.w;
}

void Vector4::Substraction(const Vector4& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    w -= other.w;
}

void Vector4::Multiplication(const Vector4& other) {
    x *= other.x;
    y *= other.y;
    z *= other.z;
    w *= other.w;
}

void Vector4::Division(const Vector4& other) {
    if (other.x != 0 && other.y != 0 && other.z != 0 && other.w != 0) {
        x /= other.x;
        y /= other.y;
        z /= other.z;
        w /= other.w;
    }
}

float Vector4::dotProduct(const Vector4& other) {
    return x * other.x + y * other.y + z * other.z + w * other.w;
}

// Implementa el cálculo del producto cruz aquí

float Vector4::Magnitude() {
    return sqrt(x * x + y * y + z * z + w * w);
}

void Vector4::Normalize() {
    float magnitude = Magnitude();
    if (magnitude != 0) {
        x /= magnitude;
        y /= magnitude;
        z /= magnitude;
        w /= magnitude;
    }
}
