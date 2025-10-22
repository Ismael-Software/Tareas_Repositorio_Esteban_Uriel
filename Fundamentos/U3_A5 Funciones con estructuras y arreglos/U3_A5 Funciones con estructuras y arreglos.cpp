#include <iostream>
using namespace std;

// Declaración de funciones
void trabajoArreglos();
void usoDoWhile();
void condicionalIf();

int main() {
    int opcion;
    
    do {
        cout << "\n*** MENU PRINCIPAL ***\n";
        cout << "1. Trabajo con arreglos\n";
        cout << "2. Uso de ciclo do-while\n";
        cout << "3. Trabajo con condicional if\n";
        cout << "4. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                trabajoArreglos();
                break;
            case 2:
                usoDoWhile();
                break;
            case 3:
                condicionalIf();
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while(opcion != 4);

    return 0;
}

// Función 1: Trabajo con arreglos
void trabajoArreglos() {
    cout << "\n--- TRABAJO CON ARREGLOS ---\n";
    int numeros[5];
    
    cout << "Ingrese 5 numeros enteros:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
    }
    
    cout << "Los elementos del arreglo son: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

// Función 2: Uso de ciclo do-while
void usoDoWhile() {
    cout << "\n--- USO DE CICLO DO-WHILE ---\n";
    int numero;
    
    do {
        cout << "Ingrese un numero entre 1 y 10: ";
        cin >> numero;
    } while(numero < 1 || numero > 10);
    
    cout << "Numero valido ingresado: " << numero << endl;
}

// Función 3: Trabajo con condicional if
void condicionalIf() {
    cout << "\n--- TRABAJO CON CONDICIONAL IF ---\n";
    int edad;
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    if(edad < 0) {
        cout << "Error: La edad no puede ser negativa.\n";
    } else if(edad < 18) {
        cout << "Eres menor de edad.\n";
    } else if(edad < 65) {
        cout << "Eres un adulto.\n";
    } else {
        cout << "Eres un adulto mayor.\n";
    }
}