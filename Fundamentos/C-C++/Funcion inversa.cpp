#include <iostream>
#include <math.h>
using namespace std;

void promedio(int C);
void multiplicacion_funcion(int Multi);
void raiz_cuadrada(double resultado);
void promedioponderado_funcion(double promedio);

main() {
int num1, num2, C;
cout<<"Valor 1: ";cin>>num1;
cout<<"Valor 2: ";cin>>num2;
C=((num1+num2)/2);
promedio(C);

//Multiplicacion
int n1=12, n2=23;
int Multi=n1*n2;
multiplicacion_funcion(Multi);

//Raiz cuadrada
double numero=16;
double resultado=sqrt(numero);
raiz_cuadrada(resultado);

//|Promedio ponderado
double nota1=85, nota2=90, nota3=78;
double peso1=0.3, peso2=0.4, peso3=0.3;
double promedio=(nota1*peso1)+(nota2*peso2)+(nota3*peso3);
promedioponderado_funcion(promedio);
}

//Promedio
void promedio(int C) {
    cout<<"El promedio es: " <<C<<endl;}
//Multiplicacion
void multiplicacion_funcion(int Multi) {
    cout<<"Resultado: " <<Multi<<endl;}
//Raiz cuadrada
void raiz_cuadrada(double resultado) {
    cout<<"Raiz cuadrada: " <<resultado<<endl;} 
//Promedio ponderado
void promedioponderado_funcion(double promedio) {
    cout<<"Promedio ponderado: " <<promedio<<endl;}