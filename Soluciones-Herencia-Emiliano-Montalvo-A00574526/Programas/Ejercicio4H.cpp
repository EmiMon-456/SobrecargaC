// 
// Ejercicio4H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
//
#include <iostream>
using namespace std;

// Completa las clases según el diagrama

//clase definida
class ReproductorMultimedia{
    //atributos públicos de la clase
    public:
    //definición del tipo de variable
    string dispositivo;
    //constructor de la clase ReproductorMultimedia
    //Creación de un apuntador dentro del constructor
    //evita la generación de errores
    ReproductorMultimedia(const string& name = "") : dispositivo(name) {
        dispositivo = name;
        //asignación de la variable
    }
};

class ReproductorAudio: public ReproductorMultimedia{
    public:
    ReproductorAudio(const string& name=""):ReproductorMultimedia(name){
        dispositivo = name;
    }
    void reproducir(string sg){
        cout<<"Estoy reproduciendo audio de "<<sg<<" en: "<<dispositivo<<std::endl;
    }
};

class ReproductorVideo: public ReproductorMultimedia{
    public: 
    ReproductorVideo(const string& name = ""): ReproductorMultimedia(name){
        dispositivo = name;
    }
    void reproducir(string vd){
        cout<<"Estoy reproduciendo video de "<<vd<<" en: "<<dispositivo<<std::endl;
    }
};

int main(){
    //Creación del objeto en distintas clases 
    ReproductorVideo	telefono("Netflix");
    ReproductorAudio	Alexa("Alexa");
    //se les asigna el nombre que llevarán
    //se selecciona el método que realizará cada uno
    telefono.reproducir("Noche sin paz");
    Alexa.reproducir("Make you mine");
    return 0;
}