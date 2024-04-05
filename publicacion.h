#ifndef publicacion_h
#define publicacion_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Publicacion{
private:
int Id;
public:
string fecha;
string contenido;
Usuario* ptrusuario;
void mostrarPublicacion();
Publicacion(Usuario* usuario,string fecha, string contenido);



};
#endif