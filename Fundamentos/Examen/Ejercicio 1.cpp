#include <iostream>
using namespace std;
int main() {
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i <= 5; i++) {
        c = a + b;
        cout << a << " + " << b << " = " << c << endl;
        a = b;
        b = c;
    }
}