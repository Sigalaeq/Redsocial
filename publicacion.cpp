#include "publicacion.h"
#include "usuario.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void Publicacion::mostrarPublicacion(){
    cout<<"Fecha:"<<fecha<<endl;
    cout<<"Contenido:"<<contenido<<endl;
    cout<<"Usuario:"<<ptrusuario->nombre<<endl;
}

Publicacion::Publicacion(Usuario* usuario,string fecha, string contenido){
this->ptrusuario=usuario
this->fecha=fecha;
this->contenido=contenido;


}

class Buscogymbro: public Publicacion{

    public:
    void mostrarGymbropublicacion()
}
