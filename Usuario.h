#ifndef usuario_h
#define usuario_h
#include <iostream>
#include <vector>
#include <string>
#include "publicacion.h"
using namespace std;
    //class Buscogymbro;
class Usuario{
    private:
        int id;
    public:
        string nombre;
        int edad;
        string nacionalidad;
        vector<Usuario*> amigos;
        vector<Publicacion*> publicaciones;
        int getId();
        void mostrar():
        void mostrarAmigos();
        void mostrarPublicaciones();
        void agregarAmigo(Usuario* nuevoAmigo);
        void crearPublicacion();
        Usuario* getAmigo(int id);
        Usuario(string nombre);
        Usuario(string nombre, int edad);
        Usuario(string nombre,int edad,string nacionalidad);
        int randomid();
        //void buscogymbro();

};
#endif