#include "Usuario.h"
#include "publicacion.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int Usuario::getId(){
    return this->id;
}

void Usuario::mostrar(){
    cout<<"Id del usuario:"<<getId()<<endl;
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"Nacionalidad: "<<this->nacionalidad<<endl<<endl;
}

void Usuario::mostrarAmigos(){
    for (int i = 0; i < this->amigos.size(); i++)
    {
        amigos[i]->mostrar();
    }
    
}

void Usuario::mostrarPublicaciones(){
    for (int i = 0; i <this->publicaciones.size(); i++)
    {
        publicaciones[i]->mostrarPublicacion();
    }
    
}

void Usuario::agregarAmigo(Usuario* nuevoAmigo){
    this->amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}

void Usuario::crearPublicacion(){
    string fecha;
    string contenido;
    cout<<"Ingrese la fecha del post"<<endl;
    cin>>fecha;
    cout<<"Ingresa el contenido del post"<<endl;
    cin>>contenido;
    Publicacion* post = new Publicacion(this, fecha, contenido);
    this->publicaciones.push_back(post);
}

Usuario* Usuario::getAmigo(int id){
        for (int i = 0; i < this->amigos.size(); i++)
        {
            if(this->amigos[i]->getId() == id){
                return amigos[i];
            }
        }
     cout<<"No existe ese amigo con ese id"<<endl;
     return nullptr;   
}

int Usuario::randomid()
{
    srand(time(0));
    id=rand()%25777;
    return id;
}

Usuario::Usuario(string nombre){
    this->nombre = nombre;
    this->id = this->randomid();
}

Usuario::Usuario(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
    this->id = this->randomid();
}

Usuario::Usuario(string nombre, int edad, string nacionalidad){
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
    this->id = this->randomid();
}
