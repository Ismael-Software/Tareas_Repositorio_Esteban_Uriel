#include <iostream>
using namespace std;

float x, y;
int z;

void mult(float x, float y);

int main() {
    int num;
    int f;

    do {
        cout << "Ingresa a y b separados por espacios: ";
        cin >> num >> z;

        if (num != 0) {
            f = num * z;
            cout << "El resultado es: " << f << endl;
        }

     while (num != 0);{

    cout << "Trikitrakatelas" << endl;
}
    
    mult(x, y);

    return 0;
}


void mult(float x, float y) {
    float a;
    cout << "Ingresa x e y separadas por espacios: ";
    cin >> x >> y;
    a = x * y;
    cout << "El resultado es: " << a << endl;
}