#include <iostream>
#include "AVE.cpp"
#include <string>
int main(){
    Ave*ave1=new Ave("Rojo","Bosque",true, 1.5);
    Ave*ave2=new Ave("Azul","Montaña",true, 2.3);
    Ave*ave3=new Ave("Verde","Selva",true, 0.8);
    
    ave1->volar();
    ave2->comer();

    delete ave1;
    delete ave2;
    delete ave3;

    return 0;
}