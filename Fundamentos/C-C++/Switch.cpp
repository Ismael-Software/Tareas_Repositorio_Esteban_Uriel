#include <iostream>
using namespace std;

void areatriangulo();
void areacirculo();
void suma();
void multiplicacion();
int main() {
 int opcion;
 cout << "Menú de opciones:" << endl;
 cout << "1. Area triangulo" << endl;
 cout << "2. Area circulo" << endl;
  cout << "3. Suma" << endl;
   cout << "4. Multiplicacion" << endl;
 cout << "Seleccione una opción: ";
 cin >> opcion;
 
 switch (opcion) {
    case 1:
        areaTriangulo();
        break;
    case 2:
        areaCirculo();
        break;
    case 3:
     suma();
        break;
    case 4:
    multiplicacion()
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
    }

   void areatriangulo(){
        float base, altura, area;
        cout << "\nIngrese la base del triángulo: ";
        cin >> base;
        cout << "Ingrese la altura del triángulo: ";
        cin >> altura;
        area = (base * altura) / 2;
        cout << "El área del triángulo es: " << area << endl;
        return area;
    }   

   void areacirculo(){
        float radio, area;
        const float PI = 3.1416;
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;
        area = PI * radio * radio;
        cout << "El área del círculo es: " << area << endl;
        return area;
    }   

    void suma(){
        float num1, num2, suma;
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        suma = num1 + num2;
        cout << "La suma es: " << suma << endl;
        return suma;
    }

    void multiplicacion(){
        float num1, num2, multiplicacion;
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        multiplicacion = num1 * num2;
        cout << "La multiplicación es: " << multiplicacion << endl;
        return multiplicacion;
    }   

}