// 
// Ejercicio8H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

//Crear una clase base Persona
class Persona {
    //atributos protegidos de la clase
protected:
    //Definir el tipo de variable
    string nombre;
    //Atributtos públicos de la clase
    public: 
    //Establecer el constructor de la clase
    //lleva un apuntador dentro para evitar generar errores
    Persona(const string& name = ""):nombre(name){}
    //Método utilizado para heredar el nombre de la clase padre
    string getNombre(){
        return nombre;
    }

};

//Crear una clase derivada llamada Cliente
//Esta clase hereda de la clase Persona
class Cliente : protected Persona {
    //atributos públicos de la clase
public:
    //establecer el constructor de la clase
    //hereda el constructor de la clase padre
    Cliente(string name):Persona(name){};
    //método para mostrar el nombre
    void mostrar() {
        //Llamar al método de la clase padre (getNombre)
        cout << "nombre: " << getNombre() << std::endl; // Error si se cambia a private
    }
};

int main() {
    Cliente c("Emiliano");
    c.mostrar();
    return 0;
}