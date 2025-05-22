// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class instrumento {
public: 
    instrumento(){};
    virtual void tocar() {
        //Sobrecargando Guitarra
        cout<<"prueba"<<std::endl;
    }
};

class guitarra: public instrumento {
    public:
    void tocar() override {
        cout<<"Cielito lindo"<<std::endl;
    }
};

void probar(instrumento* inst) {
    inst->tocar();
}

int main(){
    //crear un objeto guitarra
    guitarra g;
    probar(&g);
    return 0;
}