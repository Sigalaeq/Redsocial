#include <iostream>
#include "redsocial.h"
#include <cstdlib> 
using namespace std;
int menuP,menu;
int idA,idU;
user* perfildeuser;

int main(){
Redsocial g1("gymsocial");

cout<<"Bienvenido al sistema de gymsocial"<<endl;

cout<<"En que le podemos ayudar? "<<endl;
cout<<"                Menu                                  "<<endl;
cout<< "1- Ver lista de usuarios"<<endl;
cout<< "2-Ver lista de publicaciones"<<endl;
cout<< "3-Entrar al perfil de un miembro de gymsocial"<<endl;
cout<< "4-Agregar un nuevo usuario de gymsocial"<<endl;
cout<< "6-Salir del sitio"<<endl;

cout<<"Ingrese la accion a ejecutar"<<endl;

cin>>menuP;
switch(menuP){
case 1:
   cout<<"Has elegido ver la lista de los usuarios de gymsocial"<<endl;
   g1.mostrarUsuarios();
   break;
case 2:
   cout<<"Has elegido ver la lista de publicaciones"<<endl;
   g1.mostrarPublicaciones();
   break;

   case 3: 
   cout<<"Has elegido entrar al perfil de un miembro de gymsocial"<<endl;
   cout<<"Dame el id del usuario"<<endl;
   cin>>idU;
   perfil


}

}