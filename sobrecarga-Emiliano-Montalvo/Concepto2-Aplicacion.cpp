//
//aplicación.cpp
//Ejercicio 2
// Jesús Emiliano Hernández Montalvo
// Created by Emiliano Hernández Montalvo on 2025/05/15
//
#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;
    Punto(int _x, int _y) : x(_x), y(_y) {}
    bool operator==(const Punto& p) {
        return x == p.x && y == p.y;
    }
};

int main() {
    Punto a(1,2), b(1,2), c(2,2);
    cout << std::boolalpha;
    cout << (a == b) << endl;
    cout << (a == c) << endl; 
}