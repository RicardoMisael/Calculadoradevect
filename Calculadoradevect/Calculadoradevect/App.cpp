#include "App.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include <iostream>
#include <cmath>

App::App() : opc(0), result(0.0f) {}

App::~App() {}

void App::menu()
{
    while (true)
    {
        std::cout << "Hola, bienvenido a la calculadora de vectores." << std::endl;
        std::cout << "Ingrese una opción para el vector que desea usar:" << std::endl;
        std::cout << "1. Vector2" << std::endl;
        std::cout << "2. Vector3" << std::endl;
        std::cout << "3. Vector4" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cin >> opc;

        switch (opc)
        {
        case 1:
            Vector2Options();
            break;
        case 2:
            Vector3Options();
            break;
        case 3:
            Vector4Options();
            break;
        case 0:
            return; // Salir del programa
        default:
            std::cout << "Esa no es una opción válida." << std::endl;
            break;
        }
    }
}

void App::Vector2Options()
{
    // Operaciones para Vector2
    Vector2 vector2, vector2nd;
    int opti = 0;

    // Ingresar los valores de los vectores 2D
    std::cout << "Ingrese el valor de X del primer vector 2D: ";
    std::cin >> vector2.x;
    std::cout << "Ingrese el valor de Y del primer vector 2D: ";
    std::cin >> vector2.y;

    std::cout << "Ingrese el valor de X del segundo vector 2D: ";
    std::cin >> vector2nd.x;
    std::cout << "Ingrese el valor de Y del segundo vector 2D: ";
    std::cin >> vector2nd.y;

    do {
        std::cout << "Seleccione una operación para Vector2:" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Producto Punto" << std::endl;
        std::cout << "4. Magnitud" << std::endl;
        std::cout << "5. Normalización" << std::endl;
        std::cout << "0. Volver al menú principal" << std::endl;
        std::cin >> opti;

        switch (opti) {
        case 1:
            vector2.Addition(vector2nd);
            printVector2(vector2);
            break;
        case 2:
            vector2.Substraction(vector2nd);
            printVector2(vector2);
            break;
        case 3:
            result = vector2.dotProduct(vector2nd);
            std::cout << "Producto Punto de Vector2: " << result << std::endl;
            break;
        case 4:
            result = vector2.Magnitude();
            std::cout << "Magnitud de Vector2: " << result << std::endl;
            break;
        case 5:
            vector2.Normalize();
            printVector2(vector2);
            break;
        case 0:
            return;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
        }
    } while (opti != 0);
}

void App::Vector3Options()
{
    // Operaciones para Vector3
    Vector3 vector3, vector3rd;
    int opti = 0;

    // Ingresar los valores de los vectores 3D
    std::cout << "Ingrese el valor de X del primer vector 3D: ";
    std::cin >> vector3.x;
    std::cout << "Ingrese el valor de Y del primer vector 3D: ";
    std::cin >> vector3.y;
    std::cout << "Ingrese el valor de Z del primer vector 3D: ";
    std::cin >> vector3.z;

    std::cout << "Ingrese el valor de X del segundo vector 3D: ";
    std::cin >> vector3rd.x;
    std::cout << "Ingrese el valor de Y del segundo vector 3D: ";
    std::cin >> vector3rd.y;
    std::cout << "Ingrese el valor de Z del segundo vector 3D: ";
    std::cin >> vector3rd.z;

    do {
        std::cout << "Seleccione una operación para Vector3:" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Producto Punto" << std::endl;
        std::cout << "4. Magnitud" << std::endl;
        std::cout << "5. Normalización" << std::endl;
        std::cout << "0. Volver al menú principal" << std::endl;
        std::cin >> opti;

        switch (opti) {
        case 1:
            vector3.Addition(vector3rd);
            printVector3(vector3);
            break;
        case 2:
            vector3.Substraction(vector3rd);
            printVector3(vector3);
            break;
        case 3:
            result = vector3.dotProduct(vector3rd);
            std::cout << "Producto Punto de Vector3: " << result << std::endl;
            break;
        case 4:
            result = vector3.Magnitude();
            std::cout << "Magnitud de Vector3: " << result << std::endl;
            break;
        case 5:
            vector3.Normalize();
            printVector3(vector3);
            break;
        case 0:
            return;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
        }
    } while (opti != 0);
}

void App::Vector4Options()
{
    // Operaciones para Vector4
    Vector4 vector4, vector4th;
    int opti = 0;

    // Ingresar los valores de los vectores 4D
    std::cout << "Ingrese el valor de X del primer vector 4D: ";
    std::cin >> vector4.x;
    std::cout << "Ingrese el valor de Y del primer vector 4D: ";
    std::cin >> vector4.y;
    std::cout << "Ingrese el valor de Z del primer vector 4D: ";
    std::cin >> vector4.z;
    std::cout << "Ingrese el valor de W del primer vector 4D: ";
    std::cin >> vector4.w;

    std::cout << "Ingrese el valor de X del segundo vector 4D: ";
    std::cin >> vector4th.x;
    std::cout << "Ingrese el valor de Y del segundo vector 4D: ";
    std::cin >> vector4th.y;
    std::cout << "Ingrese el valor de Z del segundo vector 4D: ";
    std::cin >> vector4th.z;
    std::cout << "Ingrese el valor de W del segundo vector 4D: ";
    std::cin >> vector4th.w;

    do {
        std::cout << "Seleccione una operación para Vector4:" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Producto Punto" << std::endl;
        std::cout << "4. Magnitud" << std::endl;
        std::cout << "5. Normalización" << std::endl;
        std::cout << "0. Volver al menú principal" << std::endl;
        std::cin >> opti;

        switch (opti) {
        case 1:
            vector4.Addition(vector4th);
            printVector4(vector4);
            break;
        case 2:
            vector4.Substraction(vector4th);
            printVector4(vector4);
            break;
        case 3:
            result = vector4.dotProduct(vector4th);
            std::cout << "Producto Punto de Vector4: " << result << std::endl;
            break;
        case 4:
            result = vector4.Magnitude();
            std::cout << "Magnitud de Vector4: " << result << std::endl;
            break;
        case 5:
            vector4.Normalize();
            printVector4(vector4);
            break;
        case 0:
            return;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
        }
    } while (opti != 0);
}

void App::printVector2(const Vector2& vec)
{
    std::cout << "Vector2: (" << vec.x << ", " << vec.y << ")" << std::endl;
}

void App::printVector3(const Vector3& vec)
{
    std::cout << "Vector3: (" << vec.x << ", " << vec.y << ", " << vec.z << ")" << std::endl;
}

void App::printVector4(const Vector4& vec)
{
    std::cout << "Vector4: (" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << ")" << std::endl;
}

