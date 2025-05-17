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
        // COMPLETA: evita autoasignación, libera y duplica datos
        if (this != &otro) { // Evita autoasignación
            delete[] datos;  // Libera memoria anterior
            n = otro.n;     // Copia el tamaño
            datos = new char[n+1]; // Reserva nueva memoria
            strcpy(datos, otro.datos); // Copia los datos
        }
        return *this;
    }
    void print() const { cout << datos << endl; }
};

int main() {
    Buffer b1("Hola"), b2("Mundo");
    b1 = b2;
    b1.print();  // Mundo
}