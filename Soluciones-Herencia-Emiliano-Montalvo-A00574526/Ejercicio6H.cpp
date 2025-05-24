// 
// Ejercicio6H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

//completa aquí las clases

//Se crea la clase Usuario
class Usuario {
    //Los atributos públicos de la clase
    public:
    //Se declara un constructor de la clase
    //Se generan punteros para evitar errores
    //asigna un espacio vacío
    Usuario(const string& name=""):nombre(name){
        nombre=name;
    };
    //declaración de variable del usuario
    string nombre;
    //método utilizado para mostrar que se ha iniciado sesión
    void login(){
        cout<<nombre<<" bienvenido, has iniciado sesión"<<std::endl;
    }
};

//creación de una clase hija la cual hereda de la clase padre Usuario
class Moderador : public Usuario {
    //atributos públicos de la clase derivada
    public:
    //se genera el constructor de la clase derivada
    //también es heredado de la clase padre
    Moderador(string name) : Usuario(nombre) {};
    //creación del método para mostrar cuando el usuario ha moderado
    void moderar(){
        cout<<nombre<<" has moderado"<<std::endl;
    }
    
};

//Creación de una nueva clase derivada de la clase derivada anterior
//Admin hereda los atributos de la clase Moderador
class Admin : public Moderador{
    //atributos públicos de la clase derivada Moderador
    public:
    //creación del constructor que también hereda de moderador
    Admin(string name) : Moderador(name) {};
    //creación del método banear para mostrar que un jugador ha baneado a otro
    void banear(string user){
        cout<<nombre<<" has baneado a "<<user<<std::endl;
   }
};

int main(){
    //creación del objeto de clase admin
    Admin Leader("Emiliano");
    //demostración que la clase derivada de la derivada consigue
    //los atributos de las clases padre y primer derivada
    Leader.login();
    Leader.moderar();
    Leader.banear("El loco SteVe");
    return 0;
};