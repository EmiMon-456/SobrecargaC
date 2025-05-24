// 
// Ejercicio10H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
// 
#include <iostream>
using namespace std;

//Crear una clase base A
class A { 
    //atributos públicos de la clase
    public: 
    //Establecer el tipo de variable
    string imp;
    //Establecer el constructor de la clase
    //lleva un apuntador dentro para evitar generar errores
    A(const string& dip = "") : imp(dip){
        imp = dip;
        //asignación de la variable
    };
    //Método público de la clase
    void imprimir(string imp) { 
    cout<<"Impresión: "<<imp<<std::endl;
    };
};
//Creación de una clase derivada B que hereda de A
class B : virtual public A {};
//Creación de una nueva clase derivada C que hereda de A
class C : virtual public A {};
//Es necesario el virtual para poder sobreescribir el método
//Además esto evita la ambigüedad
//Creación de una nueva clase derivada D que hereda de B y C
class D : public B, public C {};

int main() {
    D obj;
    obj.imprimir("A"); // Error
    return 0;
}