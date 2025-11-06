#include <iostream>
using namespace std;

int main()
{
    int matrizA[4][3];
    int matrizB[3][2];
    int matrizC[4][2];
    int i,j,f,c,ii,ff,jj,cc;

    f = 4;
    c = 3;
    ff = 3;
    cc = 2;

    for (i=0; i<=f; i++){
        for (j=0; j<=c; j++){
            cout<<"Ingrese el valor para la posicion ";
            cin>>matrizA[i][j];
        }
    }   
    for (ii=0; ii<=ff; ii++){
        for (jj=0; jj<=cc; jj++){
            cout<<"Ingrese el valor para la posicion ";
            cin>>matrizB[ii][jj];
        }
    }
cout<<"¿se puede multiplicar estas matricez?"<<endl;
cout<<"-----------------------------------"<<endl;
if(c==ff){
    cout<<"si se puede multiplicar"<<endl;}

else{
    cout<<"no se puede multiplicar"<<endl;}
    return 1;

cout<<"¿De que tamaño sera la matriz resultado?"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"la matriz resultado sera de tamaño "<<f<<"x"<<cc<<endl;}

   for(i=0;i<=f;i++)
    for(j=0;j<=cc;j++){
        matrizC[i][j] = 0;
            for (int k = 0; k < c; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
    }

       cout<<"La matriz resultado es: "<<endl;
    for (i = 0; i < f; i++) {
        for (j = 0; j < cc; j++) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
