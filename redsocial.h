#ifndef redsocial_h
 #define redsocial_h    
 #include "Usuario.h"
 #include "publicacion.h" 
#include <vector>
#include <iostream>
#include <string>
using namespace std;    

class Redsocial {
    private: 
    vector<Usuario*>usuarios;
    vector<Publicacion>publicaciones;
    public:
    string nombre;
    int numusers;
    int numpubli;
    void agregarUsuario();
    void mostrarUsuario();
    void mostrarPublicaciones();
    Usuario* getUsuario(int  id);
    Redsocial(string nombre);
    Redsocial(string nombre,vector<Usuario*>usuarios);
    Redsocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion>publicaciones);

};

#endif