#include <iostream>
using namespace std;

class Contador {
    int c;
public:
    Contador(int v) : c(v) {}
    Contador operator++(int) {
        // Hace falta la copia del objeto y devolver la copia
        Contador temp = *this;
        c++;
        return temp;
        // Esta lína esta de más
        //return *this;  // BUG: ¿qué comportamiento falla?
        // se puede sustiruir por:
    }
            int get() const { return c; }
};