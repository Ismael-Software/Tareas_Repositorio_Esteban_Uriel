#include <iostream>
using namespace std;

void insertar(float* vec, int n) {
    float* p = vec;
    for (int i = 0; i < n; i++, p++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> *p;
    }
}

void sumar(float* v1, float* v2, float* v3, int n) {
    float* p1 = v1;
    float* p2 = v2;
    float* p3 = v3;

    for (int i = 0; i < n; i++, p1++, p2++, p3++) {
        *p3 = *p1 + *p2;
    }
}

void mostrar(float* vec, int n) {
    float* p = vec;
    cout << "[ ";
    for (int i = 0; i < n; i++, p++) {
        cout << *p << " ";
    }
    cout << "]" << endl;
}

int main() {
    int n;

    cout << "Ingrese el numero de vectores: ";
    cin >> n;

    float* vector1 = new float[n];
    float* vector2 = new float[n];
    float* vectorSuma = new float[n];

    cout << "\n--- Inserte los valores del primer vector ---" << endl;
    insertar(vector1, n);

    cout << "\n--- Inserte los valores del segundo vector ---" << endl;
    insertar(vector2, n);

    sumar(vector1, vector2, vectorSuma, n);

    cout << "\nVector 1: ";
    mostrar(vector1, n);
    cout << "Vector 2: ";
    mostrar(vector2, n);
    cout << "Suma de vectores: ";
    mostrar(vectorSuma, n);

    delete[] vector1;
    delete[] vector2;
    delete[] vectorSuma;

    return 0;
}
