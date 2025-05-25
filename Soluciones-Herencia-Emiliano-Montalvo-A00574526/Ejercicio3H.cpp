// 
// Ejercicio3H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class Vehiculo {
public:
    //Establecer el constructor de la clase
    Vehiculo(){};
    //Método público de la clase
    void encender() {
        cout << "Vehículo encendido" << std::endl;
    }
};

//class Coche : private Vehiculo {};
// esta parte era del código anterior la cual marcaba un error
class Coche : public Vehiculo {
    public:
    Coche(){};
};

int main() {
    Coche miCoche;
    miCoche.encender(); // ¿Por qué falla?
    //Existía el error porque no accedia a la herencia
    //de manera pública si no que era privada
    return 0;
}