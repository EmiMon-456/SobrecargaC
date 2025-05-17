#include <iostream>
using namespace std;

class Contador {
private:
    int c;
public:
    Contador(int v) : c(v) {}
    Contador operator++(int) {
        // COMPLETA: guarda copia, incrementa valor y devuelve copia
        Contador temp = *this; // Guarda la copia actual
        c++; // Incrementa el valor
        return temp; // Devuelve la copia guardada
    }
    int get() const { return c; }
};

int main() {
    Contador cnt(7);
    Contador old = cnt++;
    cout << "Old: " << old.get() << ", New: " << cnt.get() << endl;
}