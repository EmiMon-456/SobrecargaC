#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    char* datos;
    //Hace falta el tamaño de los datos 
    size_t n;
public:
    Buffer(const char* s) {
        // Se agrega el tamaño de los datos
        n = strlen(s);
        datos = new char[strlen(s)+1];
        strcpy(datos, s);
    }
    ~Buffer() { delete[] datos; }
    Buffer& operator=(const Buffer& otro) {
        //Falta la condición de autoasignación
        if (this == &otro) return *this;
        delete[] datos;
        //Falta la copia del tamaño de los datos
        n = otro.n;
        //Falta la reserva de memoria para los datos
        //datos = otro.datos;   // BUG: ¿qué problema surge aquí?
        datos = new char[n+1];
        //Falta la copia de los datos
        strcpy(datos, otro.datos);
        return *this;
    }
    //Hace falta que imprima los datos
    void print() const { cout << datos << endl; } 
};