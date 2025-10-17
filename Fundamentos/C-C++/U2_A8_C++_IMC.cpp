#include <iostream>
#include <string>

using namespace std;

int main() {
    double peso = 100;
    int edad = 23;
    double altura = 1.80;
    string nombre = "Esteban";

    double IMC = peso / (altura * altura);
    
    cout << nombre << " tiene un IMC de " << IMC << endl;
    
    return 0;
}