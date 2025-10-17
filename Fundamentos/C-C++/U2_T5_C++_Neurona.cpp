#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int funcion(double net) {
    if (net >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    double w0 = 1.5;
    double w1 = 2.5;
    double w2 = 1.5;

    vector<tuple<int, int, int>> Tabla_bernoulli = {
        {0, 0, 0},
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int error_total = 1;
    int iteraciones = 0;
    int max_iteraciones = 100;
    while (error_total > 0 && iteraciones < max_iteraciones) {
        error_total = 0;
        
        for (auto patron : Tabla_bernoulli) {
            int x1 = get<0>(patron);
            int x2 = get<1>(patron);
            int d = get<2>(patron);
            
            int x0 = 1;
            double net = (w0 * x0) + (w1 * x1) + (w2 * x2);
            int salida = funcion(net);
            int error = d - salida;
            
            if (error != 0) {
                w0 = w0 + error * x0;
                w1 = w1 + error * x1;
                w2 = w2 + error * x2;
                error_total++;
            }
        }
        iteraciones++;
    }

    cout << "Resultado final:" << endl;
    cout << "Numero de etapas: " << iteraciones << endl;
    cout << "Pesos finales: w0=" << w0 << ", w1=" << w1 << ", w2=" << w2 << endl;
    
    cout << "\nVerificacion de patrones:" << endl;
    for (auto patron : Tabla_bernoulli) {
        int x1 = get<0>(patron);
        int x2 = get<1>(patron);
        int d = get<2>(patron);
        
        int x0 = 1;
        double net = (w0 * x0) + (w1 * x1) + (w2 * x2);
        int salida = funcion(net);
        string estado = (salida == d) ? "✓" : "✗";
        
        cout << "Entrada: (" << x1 << ", " << x2 << ") - ";
        cout << "Deseada: " << d << " - Obtenida: " << salida << " " << estado << endl;
    }

    return 0;
}