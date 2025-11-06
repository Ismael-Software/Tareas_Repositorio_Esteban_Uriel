#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float  estatura;
};

int main(){
    Persona p1; //Declaracion de una variable de tipo persona

    //Asignacion de valores
    p1.nombre="Ana";
    p1.edad=25;
    p1.estatura=1.68;

    //Mostrar datos
    cout<<"Nombre: "<<p1.nombre<<endl;
    cout<<"Edad: "<<p1.edad<<endl;
    cout<<"Estatura: "<<p1.estatura<<endl;

    return 0;

}