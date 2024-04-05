#ifndef usuario_h
#define usuario_h
#include <iostream>
#include <vector>
#include <string>
using namespace std;
    class Publicacion;
class Usuario{
private:
int id;
public:
string nombre;
int edad;
string nacionalidad;
vector<Usuario*>amigos;
vector<Publicacion>publicaciones;
int getid(){
return this->id;
}
void mostrar():
void mostrarAmios();
void mostrarPublicaciones();
void agregarAmigo(Usuario* nuevoAmigo);
void crearPublicacion();
Usuario* getAmigo(int id);
Usuario(string nombre);
Usuario(string nombre, int edad);
Usuario(string nombre,int edad,string nacionalidad);

}