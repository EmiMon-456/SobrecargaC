// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class instrumento {
public: 
// si el objeto fuera clase instrumento mandaría este método
    instrumento(){};
    // El virtual es fundamental para poder sobreescribirlo
    virtual void tocar() {
        // este método es el que se hereda a guitarra y puede sobreescribir
        //Sobrecargando Guitarra
        cout<<"prueba"<<std::endl;
    }
};

class guitarra: public instrumento {
    public:

    //este método tocar es llamado en la función main
    //sobre escribe el método de la clase padre instrumento

    //El override es necesario para poder sobreescribir el método anterior
    void tocar() override {
        //este es el nuevo mensaje que muestra sobre el otro
        cout<<"Cielito lindo"<<std::endl;
    }
};

void probar(instrumento* inst) {
    inst->tocar();
}

int main(){
    //crear un objeto guitarra
    guitarra g;
    //Manda el objeto creado al método 
    //probar de la clase guitarra
    probar(&g);
    return 0;
}