// 
// Ejercicio1H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

class Persona{
    protected:
    string nombre;
    int edad;
};

class Empleado : protected Persona {
    public:
        void mostrarDatos(){

        }
};

int main() {
    Empleado emp;
    emp.mostrarDatos();
    return 0;
}