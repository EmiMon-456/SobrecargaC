//
//aplicación.cpp
//Ejercicio 4
// Jesús Emiliano Hernández Montalvo
// Created by Emiliano Hernández Montalvo on 2025/05/15
//
#include <iostream>
using namespace std;

class Contador {
private:
    int c;
public:
    Contador(int v) : c(v) {}
    Contador operator++(int) {
        Contador temp = *this;
        c++;
        return temp; 
    }
    int get() const { return c; }
};

int main() {
    Contador cnt(18);
    Contador old = cnt++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
}