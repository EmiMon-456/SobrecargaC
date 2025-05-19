// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class animal {
    // atributos públicos de la clase
    public:
    //definir el tipo de variable
    string nombre;
    // constructor de la clase animal
    animal(string _nombre){
        nombre =_nombre;
    }
        //Métodos de la clase padre que da a heredar
        void comer() {
            cout <<"Mi mascota " << nombre << " está comoiendo" << std::endl;
        }
        void mostrar() {
            cout << "Nombre de la mascota: " << nombre << std::endl;
        }
};

//Nueva clase derivada de la clase padre
class perro: public animal { 
    //atributos de la clase derivada
        public: 
        //Contructor derivado de la clase padre
        perro(string nombre) : animal(nombre) {}
        //Método de la clase derivada, único de ella
        void ladrar() {
            cout << nombre <<" dice " << "Guau Guau" << std::endl; 
        } 
    };

    //función utilizada para llamar los métodos
int main() {
    //Definir la nueva variable con una de las clases
    //En este caso clase derivada
    perro miperro("Randy");

    //Llamar a todos los métodos presentes
    miperro.mostrar();
    miperro.comer();
    miperro.ladrar();
    return 0;
}
