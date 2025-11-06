#include <stdio.h>
#include <iostream>
#include <io.h>
#include <math.h>
using namespace std;

int A[100], B[100], C[100],D[100],E[100], n, i, opcion;

void suma_vector();
void resta_vector();
void division_vector();

int main(){
cout<<"1. Suma de vectores\n";
cout<<"2. Resta de vectores\n";
cout<<"3. Division de vectores\n";
cout<<"Seleccione una opcion: ";
cin>>opcion;
switch(opcion){
case 1: 
    suma_vector();
    break;
case 2: 
    resta_vector();
    break;    
case 3: 
    division_vector();
    break;
default:
    cout<<"Opcion no valida"<<endl;
    break;
}
};


void suma_vector()
{
    for(i=0;i<n;i++)
    {
        C[i]=A[i]+B[i];
    }
    printf("El resultado de la suma es:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",C[i]);
    }
}

void resta_vector()
{
    for(i=0;i<n;i++)
    {
        D[i]=A[i]-B[i];
    }
    printf("El resultado de la resta es:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",D[i]);
    }
}

void division_vector()
{
    for(i=0;i<n;i++)
    {
        if(B[i]!=0)
        {
            E[i]=A[i]/B[i];
        }
        else
        {
            printf("Error: Division por cero en el elemento %d\n", i);
            E[i]=0; // Asignar un valor predeterminado en caso de división por cero
        }
    }
    printf("El resultado de la division es:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",E[i]);
    }
};