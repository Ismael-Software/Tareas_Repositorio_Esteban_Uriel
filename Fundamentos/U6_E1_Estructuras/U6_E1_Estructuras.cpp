//ESTRUCTURAS STRUCT

//¿QUE ES UNA ESTRUCTURA? R=Las estructuras (también llamadas structs) son una forma de agrupar varias variables relacionadas en un solo lugar.
//Cada variable de la estructura se conoce como miembro de la estructura.
//A diferencia de una matriz , una estructura puede contener muchos tipos de datos diferentes: int, string, bool, etc.

//¿En que casos es conveniente usarlas? R=Cuando se desea agrupar datos relacionados que no requieren la funcionalidad completa de una clase.
//Por ejemplo, para representar un punto en un espacio 2D con coordenadas X e Y.

//Sintaxis para definir una estructura (struct): 

          //struct {             
          //  int myNum;         
          //  string myString;   
          //} myStructure;       


//Ejemplo completo:
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
//Crea una estructura llamada myStructure con dos miembros: miNumero (entero) y miString (cadena de texto)
struct {
  int miNumero;
  string miString;
} miestructura;

//Asigna valores a los miembros de la estructura
miestructura.miNumero = 1;
miestructura.miString = "Hola Mundo!";

//Imprime los valores de los miembros de la estructura
cout << miestructura.miNumero << "\n";
cout << miestructura.miString << "\n";
return 0;
}