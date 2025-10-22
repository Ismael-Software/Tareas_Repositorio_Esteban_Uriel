#include <iostream>
using namespace std;

int main() {
    int n, numero = 2, incremento = 3;

    cout << "Cuantos terminos desea? ";
    cin >> n;

    cout << "It\tNumero\tIncremento\tNuevo numero" << endl;
    
    for(int i = 1; i <= n; i++) {
        int nuevo = numero + incremento;
        cout << i << "\t" << numero << "\t" << incremento << "\t\t" << nuevo << endl;
        numero = nuevo;
        incremento += 2;
    }
}