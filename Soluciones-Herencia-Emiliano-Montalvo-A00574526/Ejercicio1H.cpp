// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class animal {
    public:
    string nombre;
    // constructor
    animal(string _nombre){
        nombre =_nombre;
    }
        void comer() {
            cout <<"Mi mascota " << nombre << " está comoiendo" << std::endl;
        }
        void mostrar() {
            cout << "Nombre de la mascota: " << nombre << std::endl;
        }
};

class perro: public animal { 
        public: 

        perro(string nombre) : animal(nombre) {}

        void ladrar() {
            cout << nombre <<" dice " << "Guau Guau" << std::endl; 
        } 
    };

int main() {
    perro miperro("Randy");
    miperro.mostrar();
    miperro.comer();
    miperro.ladrar();
    return 0;
}
