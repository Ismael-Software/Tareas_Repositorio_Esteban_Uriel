#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    int f, c; // Variables para filas y columnas
    
    // Pedir al usuario las dimensiones de la matriz
    cout << "Ingrese el numero de filas: ";
    cin >> f;
    cout << "Ingrese el numero de columnas: ";
    cin >> c;
    
    int M[f][c]; // Declarar matriz con las dimensiones ingresadas
    int i, j;
    int contador = 1; // Iniciar contador en 1
    
    // Llenar la matriz con valores consecutivos
    for(i = 0; i < f; i++)
    {
        for(j = 0; j < c; j++)
        {
            M[i][j] = contador; // Asignar el valor del contador
            contador++; // Incrementar el contador para la siguiente celda
        }
    }
    
    // Mostrar la matriz
    cout << "\nLa matriz con valores consecutivos es:" << endl;
    for(i = 0; i < f; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    
    getch();
    return 0;
}