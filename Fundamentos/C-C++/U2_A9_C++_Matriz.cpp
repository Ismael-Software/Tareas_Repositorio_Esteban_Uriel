#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>

using namespace std;

void solicitarDimensiones(int &filas_A, int &columnas_A, int &filas_B, int &columnas_B) {
    cout << "=== CONFIGURACIÓN DE DIMENSIONES ===" << endl;
    cout << "Filas de la matriz A: ";
    cin >> filas_A;
    cout << "Columnas de la matriz A: ";
    cin >> columnas_A;
    cout << "Filas de la matriz B: ";
    cin >> filas_B;
    cout << "Columnas de la matriz B: ";
    cin >> columnas_B;
}

vector<vector<double>> crearMatrizVacia(int filas, int columnas) {
    return vector<vector<double>>(filas, vector<double>(columnas, 0.0));
}

void llenarMatrizDatos(vector<vector<double>> &matriz, const string &nombre) {
    cout << "\n=== INGRESO DE DATOS - MATRIZ " << nombre << " ===" << endl;
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[0].size(); j++) {
            cout << "Elemento [" << i+1 << "," << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

vector<vector<double>> multiplicarMatrices(const vector<vector<double>> &matriz_A, 
                                          const vector<vector<double>> &matriz_B) {
    int filas_A = matriz_A.size();
    int columnas_A = matriz_A[0].size();
    int columnas_B = matriz_B[0].size();
    
    vector<vector<double>> resultado = crearMatrizVacia(filas_A, columnas_B);
    
    for (int fila_actual = 0; fila_actual < filas_A; fila_actual++) {
        for (int columna_actual = 0; columna_actual < columnas_B; columna_actual++) {
            double suma_productos = 0.0;
            for (int indice_comun = 0; indice_comun < columnas_A; indice_comun++) {
                suma_productos += matriz_A[fila_actual][indice_comun] * matriz_B[indice_comun][columna_actual];
            }
            resultado[fila_actual][columna_actual] = suma_productos;
        }
    }
    
    return resultado;
}

void mostrarMatriz(const vector<vector<double>> &matriz, const string &nombre) {
    cout << "\n=== MATRIZ " << nombre << " ===" << endl;
    for (const auto &fila : matriz) {
        cout << "[";
        for (int j = 0; j < fila.size(); j++) {
            cout << fixed << setprecision(2) << setw(8) << fila[j];
            if (j < fila.size() - 1) {
                cout << ", ";
            }
        }
        cout << " ]" << endl;
    }
}

int main() {
    try {
        int filas_A, columnas_A, filas_B, columnas_B;
      
        solicitarDimensiones(filas_A, columnas_A, filas_B, columnas_B);
        
        if (columnas_A != filas_B) {
            cout << "\n❌ ERROR: No se pueden multiplicar las matrices" << endl;
            cout << "   Las columnas de A (" << columnas_A << ") deben ser iguales a las filas de B (" << filas_B << ")" << endl;
            return 1;
        }
        
    
        vector<vector<double>> matriz_A = crearMatrizVacia(filas_A, columnas_A);
        llenarMatrizDatos(matriz_A, "A");
        
        vector<vector<double>> matriz_B = crearMatrizVacia(filas_B, columnas_B);
        llenarMatrizDatos(matriz_B, "B");
        
        vector<vector<double>> matriz_resultado = multiplicarMatrices(matriz_A, matriz_B);
        
        cout << "\n✅ Multiplicación realizada con éxito" << endl;
        mostrarMatriz(matriz_A, "A");
        mostrarMatriz(matriz_B, "B");
        mostrarMatriz(matriz_resultado, "RESULTADO");
        
    } catch (const exception &e) {
        cout << "\n❌ Error: " << e.what() << endl;
        return 1;
    } catch (...) {
        cout << "\n❌ Error inesperado" << endl;
        return 1;
    }
    
    return 0;
}