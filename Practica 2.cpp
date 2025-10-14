#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()

{
    int n; 
cout << "¿Cuantos registros desea ingresar? ";cin >> n;
    
    int edad[n], i; /*vector*/
    
    for (i = 0; i < n; i++)
    {
        cout << "Escribe una edad: ";
        cin >> edad[i];
    }
    
    for (i = 0; i < n; i++)
    {
        if(edad[i] >= 18)
        {
            cout << "Edad #" << i + 1 << "  "<<edad[i] << ": MAYOR de edad" << endl;
        }
        else
        {
            cout << "Edad #" << i + 1 <<"  "<<edad[i] << ": MENOR de edad" << endl;
        }
    }
    
    float peso[n], altura[n], imc[n];
    
    for (i = 0; i < n; i++)
    {
        cout << "Escribe el peso (kg): "; cin >> peso[i];
        cout << "Escribe la altura (m): "; cin >> altura[i];
        cout << endl;
    }
    
    for (i = 0; i < n; i++)
    {

        imc[i] = peso[i] / (altura[i] * altura[i]);
        
        cout << "IMC #" << i + 1 << "  "<< imc[i];
    }


    getch(); // Espera a que el usuario presione una tecla
    
    return 0;
}
