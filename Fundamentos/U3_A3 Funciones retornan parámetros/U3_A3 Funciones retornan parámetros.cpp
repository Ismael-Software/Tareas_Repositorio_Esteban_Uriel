#include <iostream>
#include <cmath>
using namespace std;

float calcularSuma(float valor1, float valor2) {
    return valor1 + valor2;
}

float calcularDiferencia(float valor1, float valor2) {
    return valor1 - valor2;
}

float calcularProducto(float valor1, float valor2) {
    return valor1 * valor2;
}

int main() {
    cout << "========================================\n";
    cout << "Funciones que devuelven parametros\n";
    cout << "20 de octubre del 2025\n";
    cout << "========================================\n";

    float primerValor, segundoValor;

    cout << "Ingresa a y b separadas por espacios: ";
    cin >> primerValor >> segundoValor;
    
    cout << "\nNumeros: " << primerValor << " y " << segundoValor << endl;
    cout << "Suma: " << calcularSuma(primerValor, segundoValor) << endl;
    cout << "Resta: " << calcularDiferencia(primerValor, segundoValor) << endl;
    cout << "Multiplicacion: " << calcularProducto(primerValor, segundoValor) << endl;

    return 0;
}