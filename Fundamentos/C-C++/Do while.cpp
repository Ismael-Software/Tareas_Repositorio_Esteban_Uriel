#include <iostream>
using namespace std;

int contadorglobal = 0;

float areaTriangulo();
float areaCirculo();

int main() {
    int n;
    cout << "Cuantas veces debe repetirse? ";
    cin >> n;

    if (n > 5) {
        cout << "Demasiadas repeticiones" << endl;
    }

    float areas[10];
    for (int i = 0; i < n; i++) {
        float areaT = areaTriangulo();
        float areaC = areaCirculo();

        areas[i] = areaT + areaC;

        contadorglobal++;
    }

    cout << "\nResumen de areas (Triangulo + Circulo):\n";
    for (int i = 0; i < n; i++) {
        cout << "Iteracion " << (i + 1) << ": " << areas[i] << endl;
    }
}

float areaTriangulo() {
    float base, altura, area;
    cout << "\nIngrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
}

float areaCirculo() {
    float radio, area;
    const float PI = 3.1416;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    area = PI * radio * radio;
    cout << "El area del circulo es: " << area << endl;
}
