#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    int f, c;
    
    cout << "Ingrese el numero de filas: ";
    cin >> f;
    cout << "Ingrese el numero de columnas: ";
    cin >> c;
    
    int M[f][c]; 
    int i, j;
    int contador = 1;
    
    for(i = 0; i < f; i++)
    {
        for(j = 0; j < c; j++)
        {
            M[i][j] = contador; 
            contador++; 
    }
    
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