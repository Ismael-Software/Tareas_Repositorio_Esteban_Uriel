#include <iostream>
using namespace std;

int main() {
    int n;
    char opcion;
    
    do {
        cout << "Cuantos valores desea agregar? ";
        cin >> n;
        
        float x[n], w[n], y = 0;
        
        for(int i = 0; i < n; i++) {
            cout << "Ingrese x[" << i << "]: ";
            cin >> x[i];
            cout << "Ingrese w[" << i << "]: ";
            cin >> w[i];
            y += x[i] * w[i];
        }
        
        if(y < 25) {
            float m, promedio;
            cout << "Ingrese el valor de m: ";
            cin >> m;
            promedio = (y + m) / 2;
            cout << "El promedio es: " << promedio << endl;
        }
        else if(y == 25) {
            float z = 0, valor;
            cout << "Ingrese 5 valores:" << endl;
            for(int i = 0; i < 5; i++) {
                cin >> valor;
                z += valor;
            }
            cout << "El acumulado z es: " << z << endl;
        }
        else {
            cout << "Desea realizar el calculo nuevamente? (S/N): ";
            cin >> opcion;
        }
    } while(opcion == 'S' || opcion == 's');
}