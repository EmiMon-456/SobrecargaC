#include <iostream>
using namespace std;

class Empleado {
public:
    string nombre;
    int id;
    Empleado(string n, int i) : nombre(n), id(i) {}
    //falta el operador & despues del primer ostream
    friend ostream& operator<<(ostream& os, const Empleado& e) {
        os << "ID=" << e.id << ", Nombre=" << e.nombre;
        return os;
    }
};