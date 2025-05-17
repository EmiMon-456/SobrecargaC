//
//aplicación.cpp
//Ejercicio 3
// Jesús Emiliano Hernández Montalvo
// Created by Emiliano Hernández Montalvo on 2025/05/15
//
#include <iostream>
using namespace std;

class Empleado {
public:
    string nombre;
    int id;
    Empleado(string n, int i) : nombre(n), id(i) {}
    friend ostream& operator<<(ostream& os, const Empleado& e) {
        os << "Empleado[" << e.id << "]: " << e.nombre;
        return os;
    }
};

int main() {
    Empleado e("Emiliano Montalvo", 303);
    cout << e << endl;
    return 0;
}