#include <iostream>
#include <cstdlib> 
#include <cstdlib> 
#include "redsocial.h"
using namespace std;

int mainmenu;
int usermenu;
int userId;
int friendId;
bool continuar = true;
bool contUser = true;
Usuario* userProfile;
Usuario* friendProfile;

int main(){

   Redsocial redObj("gymsocial");
   while (continuar)
   {
      contUser = true;
      cout<<"Bienvenido al sistema de gymsocial"<<endl;
      cout<<"En que le podemos ayudar? "<<endl;
      cout<<"    Menu     "<<endl;
      cout<< "1-Lista de usuarios"<<endl;
      cout<< "2-Lista de publicaciones"<<endl;
      cout<< "3-Ingresar a Gymsocial"<<endl;
      cout<< "4-Registrarse a Gymsocial"<<endl;
      cout<< "5-Abandonar sitio"<<endl;
      cout<<"Indique la opcion de menu"<<endl;
      cin>>mainmenu;

      switch(mainmenu){
         case 1:
            cout<<" Lista de usuarios de gymsocial"<<endl;
            redObj.mostrarUsuarios();
            break;
         case 2:
            cout<<"Lista de publicaciones de Gymsocial"<<endl;
            redObj.mostrarPublicaciones();
            break;

         case 3: 
            cout<<" Ingresando como miembro de gymsocial"<<endl;
            cout<<"Dame el id del usuario"<<endl;
            cin>>userId;
            userProfile = redObj.getUsuario(userId);
            if (userProfile != nullptr)
            {
               while (contUser)
               {
                  cout<<"Menu de usuario"<<endl;
                  cout<<"1-Listar amigos"<<endl;
                  cout<<"2-Ver publicaciones"<<endl;
                  cout<<"3-Crear publicacion"<<endl;
                  cout<<"4-Entrar a perfil de amigo"<<endl;
                  cout<<"5-Agregar un nuevo amigo"<<endl;
                  cout<<"6-Salir del menu de usuario"<<endl;   
                  cout<<"Indique la opcion de menu"<<endl;
                  cin>>usermenu;

                  switch (usermenu)
                  {
                  case 1:
                     cout<<"Lista de tus amigos: "<<endl;
                     userProfile->mostrarAmigos();
                     break;

                  case 2:
                     cout<<"Listado de publicaciones"<<endl;
                     userProfile->mostrarPublicaciones();
                     break;

                  case 3:
                     cout<<"Crearas una publicacion"<<endl;
                     userProfile->crearPublicacion();
                     break;

                  case 4:
                     cout<<"Entraras al perfil de un amigo"<<endl;
                     cout<<"Dame el id de tu amigo"<<endl;
                     cin>>friendId;
                     friendProfile = userProfile->getAmigo(friendId);
                     if (friendProfile != nullptr)
                     {
                        userProfile = friendProfile;     
                     }
                     break;
                  
                  case 5:{
                     cout<<"Vas a agregar un nuevo amigo"<<endl;
                     redObj.mostrarUsuarios();
                     cout<<"Ingresa el Id de tu futuro amigo"<<endl;
                     cin>>friendId;
                     Usuario* amigito = redObj.getUsuario(friendId);
                     userProfile->agregarAmigo(amigito);
                     break;
                  }
                  case 6:
                     cout<<"Vas a salir del menu de usuario";
                     contUser = false;
                     break;

                  default:
                     break;
                  }
               }
            }
            break;

         case 4:
            cout<<"Registrar usuario a Gymsocial"<<endl;
            redObj.agregarUsuario();
            break;

         case 5:
            continuar = false;
            cout<<"Has elegido salir"<<endl;
            break;

         default:
            cout<<"Selecciona un numero correcto"<<endl;
            break;

      }
   }
}