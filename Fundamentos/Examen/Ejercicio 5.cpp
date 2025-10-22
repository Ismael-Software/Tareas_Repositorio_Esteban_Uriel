#include <iostream>
using namespace std;

int main() {
    float valores[100]; 
    int n = 10;         
    char continuar;

    cout << "Ingrese 10 valores iniciales:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Valor " << i+1 << ": ";
        cin >> valores[i];
    }

    cout << "\nArray inicial: ";
    for(int i = 0; i < n; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;

    do {
        float suma = 0;
        cout << "\nCalculando promedio de los ultimos 3 valores: ";
        for(int i = n-3; i < n; i++) {
            cout << valores[i];
            if(i < n-1) cout << " + ";
            suma += valores[i];
        }
        
        float promedio = suma / 3;
        cout << " = " << suma << " / 3 = " << promedio << endl;
    
        valores[n] = promedio;
        n++; 
        
        cout << "Array actualizado (" << n << " elementos): ";
        for(int i = 0; i < n; i++) {
            cout << valores[i] << " ";
        }
        cout << endl;
        
        cout << "\nDesea calcular otro promedio movil? (S/N): ";
        cin >> continuar;
        
    } while(continuar == 'S' || continuar == 's');

    cout << "\nArray final con " << n << " elementos:" << endl;
    for(int i = 0; i < n; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;
}