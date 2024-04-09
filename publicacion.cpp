#include "publicacion.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void Publicacion::mostrarPublicacion(){
    cout<<"Fecha:"<<fecha<<endl;
    cout<<"Contenido:"<<contenido<<endl;
    cout<<"Usuario:"<<usuario->nombre<<endl<<endl;
}

Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido){
    this->usuario = usuario;
    this->fecha = fecha;
    this->contenido = contenido;
}

/*class Buscogymbro: public Publicacion{

    public:
    void mostrarGymbropublicacion();
};
