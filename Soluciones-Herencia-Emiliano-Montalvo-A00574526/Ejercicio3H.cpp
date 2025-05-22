// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class vehiculo{
    public:
    void encender(){
        cout << "Vehículo encendido" << std::endl;
    }
};

class coche : private vehiculo {

};

int main(){
    coche miCoche;
    miCoche.encender(); //¿Por qué falla?
    return 0
}