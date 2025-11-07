#include <iostream>
#include <cmath>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

int main() {
    cout << "========================================\n";
    cout << "Funciones que devuelven parámetros\n";
    cout << "20 de octubre del 2025\n";
    cout << "========================================\n";

    float a, b;

    cout << "Ingresa a y b separadas por espacios: ";
    cin >> a >> b;
    
    cout << "\nNumeros: " << a << " y " << b << endl;
    cout << "Suma: " << suma(a, b) << endl;
    cout << "Resta: " << resta(a, b) << endl;
    cout << "Multiplicacion: " << mult(a, b) << endl;

    return 0;
}
