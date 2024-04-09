#include "redsocial.h"
#include "redsocial.h"
using namespace std;  
Redsocial::Redsocial(string nombre){
    this->nombre=nombre;
}
Redsocial::Redsocial(string nombre, vector<Usuario*> usuarios){
    this->nombre = nombre;
    this->usuarios = usuarios;
}
Redsocial::Redsocial(string nombre, vector<Usuario*> usuarios, vector<Publicacion*> publicaciones){
    this->nombre = nombre;
    this->usuarios = usuarios;
    this->publicaciones = publicaciones;
}

void Redsocial::agregarUsuario(){
    string nombre;
    string nacionalidad;
    int edad;
    char pregNac;
    char pregEdad; 
    Usuario* usu;   
    cout<<"Ingrese su nombre"<<endl;
    cin>>nombre;
    cout<<"Desea ingresar su edad?(S/N)"<<endl;
    cin>>pregEdad;
    pregEdad = toupper(pregEdad);          

    if(pregEdad == 'S'){
        cout<<"Ingresa tu edad"<<endl;
        cin>>edad;

        cout<<"Desea ingresar la nacionalidad?(S/N)"<<endl;
        cin>>pregNac;
        pregNac = toupper(pregNac);
        if (pregNac == 'S'){
            cout<<"Ingresa tu nacionalidad"<<endl;
            cin>>nacionalidad;
            usu = new Usuario(nombre, edad, nacionalidad);
            this->usuarios.push_back(usu);            
        }else{
             usu = new Usuario(nombre, edad);
            this->usuarios.push_back(usu);                        
        }
    }else{
             usu = new Usuario(nombre);
            this->usuarios.push_back(usu);            
    }
    cout<<"Has creado tu usuario exitosamente\nid: "<<usu->getId()<<endl;
}

void Redsocial::mostrarUsuarios(){
    bool encontro = false;

    for (int i = 0; i <this->usuarios.size(); i++)
    {
        encontro = true;
        usuarios[i]->mostrar();
    }

    if (encontro == false){
        cout<<"No se encontraron usuarios a mostrar"<<endl;
    }
}

void Redsocial::mostrarPublicaciones(){
    bool encontro = false;

    for (int i = 0; i < this->publicaciones.size(); i++)
    {
        encontro = true;
        publicaciones[i]->mostrarPublicacion();
    }
    if (encontro == false){
        cout<<"No se encontraron publicaciones"<<endl;
    }
}

Usuario* Redsocial::getUsuario(int id){
    for (int i = 0; i <this->usuarios.size(); i++)
    {
        if (usuarios[i]->getId() == id){
            cout<<"Bienvenido a Gymsocial "<<usuarios[i]->nombre<<endl;
            return usuarios[i];
        }
    }
    
    cout<<"No se encontro al usuario dentro de la lista"<<endl;
    return nullptr;
}