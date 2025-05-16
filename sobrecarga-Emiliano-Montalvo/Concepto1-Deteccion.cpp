// complejo_bug.cpp
#include <iostream>
using namespace std;

class Complejo {
public:
 double re, im;
 Complejo(double r, double i) : re(r), im(i) {}
 // falta const y el simbolo &
 Complejo operator+(Complejo otro) {
     return Complejo(re + otro.im, im + otro.re);
     //esta mal el complejo  porque debe de estar re con otro.re y im con otro.im
        //return Complejo(re + otro.re, im + otro.im);

 }
};

int main() {
    Complejo c1(1.0, 2.0), c2(3.0, -1.0);
    Complejo resultado = c1 + c2;
    cout << "Resultado: (" << resultado.re << ", " << resultado.im << ")" << endl;
}