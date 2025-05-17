//
//aplicación.cpp
//Ejercicio 5
// Jesús Emiliano Hernández Montalvo
// Created by Emiliano Hernández Montalvo on 2025/05/15
//
#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    char* datos;
    size_t n;
public:
    Buffer(const char* s) {
        n = strlen(s);
        datos = new char[n+1];
        strcpy(datos, s);
    }
    ~Buffer() { delete[] datos; }
    Buffer& operator=(const Buffer& otro) {
        if (this == &otro) return *this;
        delete[] datos;
        n = otro.n;
        datos = new char[n+1];
        strcpy(datos, otro.datos);
        return *this;
    }
    void print() const { cout << datos << endl; }
};

int main() {
    Buffer b1("Día"), b2("Feliz");
    b1 = b2;
    b1.print();
}