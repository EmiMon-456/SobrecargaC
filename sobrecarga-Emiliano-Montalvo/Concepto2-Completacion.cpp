// punto_eq.cpp
#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;
    Punto(int _x, int _y) : x(_x), y(_y) {}
    bool operator==(const Punto& p) {
        // COMPLETA: devuelve true si los dos puntos son iguales
        return x == p.x && y == p.y;  // CORRECTO
    }
};

int main() {
    Punto a(3,4), b(3,4), c(4,4);
    cout << std::boolalpha;
    cout << (a == b) << endl;
    cout << (a == c) << endl;
}