// 
// Ejercicio12H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

// Crear una clase base llamada Dispositivo
class Dispositivo{
    // Atributos públicos de la clase
    public:
    // Definir el tipo de variable
        string marca;
    //Constructor de la clase Dispositivo
    // Lleva un apuntador dentro para evitar generar errores
        Dispositivo(const string& _marca = ""):marca(_marca){
            marca = _marca;
    }
};

// Crear una clase derivada llamada TV que herede de Dispositivo
class TV: virtual public Dispositivo{
    //atributos públicos de la clase
    public:
    //establecer un constructor
    TV(){};    
};

// Crear una clase derivada llamada DVD que herede de Dispositivo
class DVD: virtual public Dispositivo{
    //atributos públicos de la clase
    public:
    //establecer un constructor
    DVD(){};
};

// Crear una clase derivada que herede de las derivadas TV y DVD
// Esta clase se llamará ControRemoto

class ControlRemoto: public TV, public DVD{
    //atributos públicos de la clase
    public:
    //establecer un constructor
    ControlRemoto(){};
};

int main(){
    // crear un objeto de la clase ControlRemoto
    ControlRemoto control;
    // establecer la marca del control remoto
    control.marca = "Samsung";
    // mostrar la marca del control remoto 
    cout << "Marca del control remoto: " << control.marca << std::endl;
};