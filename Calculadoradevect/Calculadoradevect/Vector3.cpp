#include "Vector3.h"
#include <cmath>

Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

void Vector3::setVector3(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector3::Addition(const Vector3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
}

void Vector3::Substraction(const Vector3& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

void Vector3::Multiplication(const Vector3& other) {
    x *= other.x;
    y *= other.y;
    z *= other.z;
}

void Vector3::Division(const Vector3& other) {
    if (other.x != 0 && other.y != 0 && other.z != 0) {
        x /= other.x;
        y /= other.y;
        z /= other.z;
    }
}

float Vector3::dotProduct(const Vector3& other) {
    return x * other.x + y * other.y + z * other.z;
}

void Vector3::crossProduct(const Vector3& other) {
    // Implementa el cálculo del producto cruz aquí
}

float Vector3::Magnitude() {
    return sqrt(x * x + y * y + z * z);
}

void Vector3::Normalize() {
    float magnitude = Magnitude();
    if (magnitude != 0) {
        x /= magnitude;
        y /= magnitude;
        z /= magnitude;
    }
}
