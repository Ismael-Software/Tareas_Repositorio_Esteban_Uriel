#include <iostream>
using namespace std;


int main()
{
    int n=5;
    int i=1;
    int vec[5];
    int*p;
    p=vec;
    while (i<=n)
    {
        cout<<"Insertar un numero: ";
        cin>>*p;
        p++;
        i++;
    }
    p=vec;
    i=1;
    while (i<=n)
    {
        cout<<*p<<" -> ";
        p++;
        i++;
    }
        return 0;
}