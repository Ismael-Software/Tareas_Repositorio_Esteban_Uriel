#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    
    cout << "Cuantos pares e impares desea generar? ";
    cin >> cantidad;
    
    vector<int> pares;
    vector<int> impares;
    
    for(int i = 1; i <= cantidad * 2; i++) {
        if(i % 2 == 0) {
            pares.push_back(i);
        } else {
            impares.push_back(i);
        }
    }
    cout << "\nNumeros pares generados: ";
    for(int i = 0; i < cantidad; i++) {
        cout << pares[i] << " ";
    }
    
    cout << "\nNumeros impares generados: ";
    for(int i = 0; i < cantidad; i++) {
        cout << impares[i] << " ";
    }
}