//
//main.cpp
//Ejercicio 1
// Jesús Emiliano Hernández Montalvo
// Created by Emiliano Hernández Montalvo on 2025/05/15
//

#include <iostream>
using namespace std;
class Complejo {
public:
    double re, in;
    Complejo(double x, double y) : re(x), in(y) {}
    Complejo operator+(const Complejo& otro) {
        return Complejo(re + otro.re, in + otro.in);
    }
};

int main() {
    Complejo c1(1.0, 2.0), c2(3.0, -1.0);
    Complejo resultado = c1 + c2;
    cout << "Resultado: (" << resultado.re << ", " << resultado.in << ")" << endl;
}