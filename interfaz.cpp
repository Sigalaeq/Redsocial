#include <iostream>
#include <cstdlib> 
#include "redsocial.h"
using namespace std;

int mainmenu;
int usermenu;
int userId;
int friendId;
user* userprofile;
user* friendprofile;

int main(){
cout<<"Bienvenido al sistema de gymsocial"<<endl;

cout<<"En que le podemos ayudar? "<<endl;
cout<<"    Menu     "<<endl;
cout<< "1-Lista de usuarios"<<endl;
cout<< "2-Lista de publicaciones"<<endl;
cout<< "3-Ingresar a Gymsocial"<<endl;
cout<< "4-Registrarse a Gymsocial"<<endl;
cout<< "6-Abandonar sitio"<<endl;

cout<<"Indique la instruccion"<<endl;

cin>>mainmenu;
Redsocial mainObject("gymsocial");

switch(mainmenu){
   case 1:
      cout<<" Lista de usuarios de gymsocial"<<endl;
      mainObject.mostrarUsuarios();
      break;
   case 2:
      cout<<"Lista de publicaciones de Gymsocial"<<endl;
      mainObject.mostrarPublicaciones();
      break;

   case 3: 
      cout<<" Ingresando como miembro de gymsocial"<<endl;
      cout<<"Dame el id del usuario"<<endl;
      cin>>userId:
      userprofile = mainObject.getusuario(userId);
      break;

   case 4:
      cout<<"Registrar usuario a Gymsocial"<<endl;
      mainObject.agregarUsuario();


   default:
      cout<<"Elige una opcion valida"<<endl;
      break;

}

}