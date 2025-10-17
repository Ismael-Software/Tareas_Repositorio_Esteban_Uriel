#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return 5*x + 3;
}

int main() {
    double X1, X2;
    
    cout << "Valor de x1 (debe ser el menor): ";
    cin >> X1;
    cout << "Valor de x2 (debe ser el mayor): ";
    cin >> X2;
    
    if (f(X1) * f(X2) < 0) {
        cout << "Procediendo con el metodo..." << endl;
        double R = 0;
        double W = 100;
        double X3, Raiz;
        
        while (R < W) {
            X3 = (X1 + X2) / 2;
            
            if (f(X1) * f(X3) < 0) {
                X2 = X3;
            } else {
                X1 = X3;
            }
            R++;
            if (abs(f(X3)) < 0.0001) {
                break;
            }
        }
        
        Raiz = (X1 + X2) / 2;
        cout << "Raiz aproximada: " << Raiz << endl;
        cout << "Valor de f(raiz): " << f(Raiz) << endl;
        cout << "Iteraciones realizadas: " << R << endl;
        cout << "Intervalo final: " << X1 << " " << X2 << endl;
        
    } else {
        cout << "Los limites tienen el mismo signo. Ampliando automaticamente el intervalo..." << endl;
        
        double Aumento = 2;
        double M_Intento = 20;
        double Intentos = 0;
        double X1_original = X1;
        double X2_original = X2;
        bool encontrado = false;
        
        while (f(X1) * f(X2) >= 0 && Intentos < M_Intento) {
            double rango = abs(X1 - X2);
            X1 = X1 - rango * Aumento;
            X2 = X2 + rango * Aumento;
            Intentos++;
            
            cout << "Intento " << Intentos << " Valor de X1 " << X1 << " Valor de X2 " << X2 << endl;
            
            if (f(X1) * f(X2) < 0) {
                cout << "Nuevos intervalos X1: " << X1 << " X2: " << X2 << endl;
                cout << "Procediendo con el metodo..." << endl;
                
                double R = 0;
                double W = 100;
                double X3, Raiz;
                
                while (R < W) {
                    X3 = (X1 + X2) / 2;
                    
                    if (f(X1) * f(X3) < 0) {
                        X2 = X3;
                    } else {
                        X1 = X3;
                    }
                    R++;
                    if (abs(f(X3)) < 0.0001) {
                        break;
                    }
                }
                
                Raiz = (X1 + X2) / 2;
                cout << "Raiz aproximada: " << Raiz << endl;
                cout << "Valor de f(raiz): " << f(Raiz) << endl;
                cout << "Iteraciones realizadas: " << R << endl;
                cout << "Intervalo final: " << X1 << " " << X2 << endl;
                
                encontrado = true;
                break;
            }
        }
        
        if (!encontrado) {
            cout << "No se pudo encontrar un intervalo con signos opuestos después de " << Intentos << " intentos." << endl;
        }
    }
    
    return 0;
}