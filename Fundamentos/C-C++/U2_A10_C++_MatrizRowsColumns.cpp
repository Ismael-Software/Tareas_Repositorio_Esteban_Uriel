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
    
    for(i = 0; i < f; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << "Escribe un valor para [" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
    
    cout << "\nLa matriz ingresada es:" << endl;
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