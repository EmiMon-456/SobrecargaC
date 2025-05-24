// 
// Ejercicio11H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

//Crear una clase base llamada Dispositivo
class Dispositivo { 
    //atributos públicos de la clase
    public: 
    //Establecer el tipo de variable
    string marca; 
    //Establecer el constructor de la clase
    //lleva un apuntador dentro para evitar generar errores
    Dispositivo(const string& dip = "") : marca(dip) {
        marca = dip;
        //asignación de la variable
    };
};

//Crear una clase derivada llamada Tablet que hereda de Dispositivo
//El virtual es necesario para evitar la ambigüedad
//y para poder sobreescribir el método
class Tablet : virtual public Dispositivo {
    //atributos públicos de la clase
    public:
    //Establecer el constructor de la clase Tablet
    Tablet(){};
};
//Crear una clase derivada llamada Telefono que hereda de Dispositivo
//El virtual es necesario para evitar la ambigüedad
//y para poder sobreescribir el método
class Telefono : virtual public Dispositivo {
    //atributos públicos de la clase
    public:
    //Establecer el constructor de la clase Telefono
    Telefono(){};
};

//Crear una clase derivada llamada Smartphone que hereda de Tablet y Telefono
class Smartphone : public Tablet, public Telefono {
    //atributos públicos de la clase
    public:
    //Establecer el constructor de la clase Smartphone
    Smartphone(){};
};

int main() {
    //Crear un objeto de la clase Smartphone
    Smartphone s;
    //Asignar un valor a la variable marca
    s.marca = "LEGO Star Wars";
    cout << s.marca << std::endl;
    return 0;
}