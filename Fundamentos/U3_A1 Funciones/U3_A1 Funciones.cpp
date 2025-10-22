#include <iostream>
#include <math.h>
using namespace std;

void multiplicacion_funcion();
void raiz_cuadrada();
void promedioponderado_funcion();

int main() {
multiplicacion_funcion();
raiz_cuadrada();
promedioponderado_funcion();}

//Multiplicacion
void multiplicacion_funcion() {
    int num1=12, num2=23;
    int Multi=num1*num2;
    cout<<"Resultado: " <<Multi<<endl;}

//Raiz cuadrada
void raiz_cuadrada() {
    double numero=16;
    double resultado=sqrt(numero);
    cout<<"Raiz cuadrada: " <<resultado<<endl;}

//Promedio ponderado
void promedioponderado_funcion() {
    double nota1=85, nota2=90, nota3=78;
    double peso1=0.3, peso2=0.4, peso3=0.3;
    double promedio=(nota1*peso1)+(nota2*peso2)+(nota3*peso3);
    cout<<"Promedio ponderado: " <<promedio<<endl;}