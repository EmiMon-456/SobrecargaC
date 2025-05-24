// 
// Ejercicio4H.cpp
// Created by Jesús Emiliano Hernández Montalvo on 19/5/25.
// A00574526
//
#include <iostream>
using namespace std;

// Completa las clases según el diagrama

class ReproductorMultimedia{
    public:
    string dispositivo;
    ReproductorMultimedia(string name) : dispositivo(name) {}
};

class ReproductorAudio: public ReproductorMultimedia{
    public:
    ReproductorAudio(string name):ReproductorMultimedia(name){}
    void reproducir(){
        cout<<"Estoy reproduciendo audio en: "<<dispositivo<<std::endl;
    }
};

class ReproductorVideo: public ReproductorMultimedia{
    public: 
    ReproductorVideo(string name): ReproductorMultimedia(name){}
    void reproducir(){
        cout<<"Estoy reproduciendo video en: "<<dispositivo<<std::endl;
    }
};

int main(){
    ReproductorVideo	telefono("Netflix");
    ReproductorAudio	Alexa("Alexa");
    telefono.reproducir();
    Alexa.reproducir();
    return 0;
}