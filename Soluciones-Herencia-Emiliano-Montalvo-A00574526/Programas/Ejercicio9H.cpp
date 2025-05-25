// 
// Ejercicio9H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

// Crear una clase base Sensor
class Sensor {
    // Atributos protegidos de la clase
protected:
    //método protegido de la clase
    void detectarMovimiento() {
        //Mostrar el mensaje de movimiento
        cout << "Movimiento detectado" << std::endl;
    }
    public:
    // Constructor de la clase
    Sensor() {
        //mostrar el mensaje de inicialización
        cout << "Sensor inicializado" << std::endl;
    }
};

//crear una clase derivada llamada SistemaAlarma
//esta clase hereda los atributos de la clase padre Sensor
class SistemaAlarma : private Sensor {
    //atributos públicos de la clase
public:
// constructor de la clase
    SistemaAlarma(){
        //Mostrar el mensaje de inicialización
        cout << "Sistema de alarma inicializado" << std::endl;
    }
    //método público de la clase
    void verificar() {
        // Llama a detectarMovimiento();
        detectarMovimiento();
    }
};

int main() {
    // Crear un objeto de la clase SistemaAlarma
    SistemaAlarma sa;
    //LLama al método verificar
    sa.verificar();
    return 0;
}