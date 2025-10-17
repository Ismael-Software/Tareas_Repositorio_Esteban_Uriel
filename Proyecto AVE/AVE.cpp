#include <iostream>
#include <string>

class Ave{
private:
    std::string color;
    std::string habitat;
    bool vuela;
    float pro;
    
public:
    Ave(std::string c, std::string h, bool v, float p) 
    : color(c), habitat(h), vuela(v), pro(p) {
    std::cout << "Constructor llamado -> Ave: " << color << std::endl;
    }
    ~Ave(){
        std::cout << "Destructor llamado -> Ave: " << color << std::endl;
    }

    void volar(){
        std::cout<<(vuela?"Volando...": "No puede volar")<< std::endl;
    }

    void comer(){
        std::cout<<"Comiendo..."<< std::endl;
    }
};
