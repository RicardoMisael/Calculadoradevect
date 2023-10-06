// App.h
#ifndef APP_H
#define APP_H

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class App {
public:
    App();
    ~App();

    void menu();
    void Vector2Options();
    void Vector3Options();
    void Vector4Options();
    void printVector2(const Vector2& vec);
    void printVector3(const Vector3& vec);
    void printVector4(const Vector4& vec);

private:
    int opc;
    int opti; // Inicializa opti en el constructor
    float result; // Inicializa result en el constructor
    Vector2 vector2, vector2nd;
    Vector3 vector3, vector3rd;
    Vector4 vector4, vector4th;
};

#endif // APP_H
