# Redgymsocial

Este proyecto es una simulación de una red Social cuyo nombre es Gymcode

Integrantes del proyecto: 

Gabriela Michelle Aguayo Camberos 4C NL 02
Esteban Sigala Quintero 4C NL 15

Explicación general de los archivos del proyecto: {

 En general la aplicación se centra en proporcionar una experiencia de red social completa. Permite a los usuarios registrarse, conectarse con amigos y compartir publicaciones. Los usuarios pueden crear perfiles individuales con información personal, agregar amigos y publicar contenido que puede ser visto por su red. Además, la aplicación facilita la exploración del contenido compartido por otros usuarios.

Redsocial.h: se define la clase RedSocial, que actúa como el núcleo principal encargado de administrar todas las operaciones en la red social. Dentro de esta clase, se mantienen dos vectores privados que contienen apuntadores a objetos de tipo Usuario y Publicacion, respectivamente. Estos vectores representan los usuarios registrados y las publicaciones efectuadas dentro de la red. Además, la clase incluye miembros públicos como el nombre de la red social, el número total de usuarios y el número total de publicaciones. También se proporcionan métodos públicos para agregar usuarios, mostrar información de usuarios y publicaciones, así como obtener usuarios por su identificador único.

Redsocial.cpp: implementa los métodos de la clase RedSocial, incluyendo sus constructores y funciones definidas en redsocial.h. Aquí se aloja la lógica esencial para llevar a cabo operaciones fundamentales como agregar usuarios, exhibir datos relativos a usuarios y publicaciones, y manejar las interacciones básicas dentro del entorno de la red social.

publicacion.cpp: se define el método mostrarPublicacion para la clase Publicacion. Este método permite visualizar información detallada acerca de una publicación específica, incluyendo detalles como la fecha de creación, el contenido y el nombre del usuario que realizó la publicación.

Publcicacion.h : Desarrolla la clase de publicacion incluyendo las variables y define los metodos publicos de la publicacion para poder ver su fecha el contenido y poder agregar publicaciones. A su vez tiene un apuntador de la clase usuario que se llama Usuario. Finalmente tiene un constructor determindado para la clase usuario. 

usuario.h: se presenta la definición de la clase Usuario, la cual representa a los miembros registrados en la red social. Esta clase contiene miembros privados como el identificador único del usuario, su nombre, edad, nacionalidad, así como listas de amigos y publicaciones. También incluye métodos públicos para acceder a la información del usuario, mostrar la lista de amigos y publicaciones, agregar nuevos amigos, crear publicaciones, entre otros.

usuario.cpp: se lleva a cabo la implementación de los métodos de la clase Usuario. Esto incluye la construcción de los perfiles de usuario, así como la gestión de la lista de amigos, la creación y exhibición de publicaciones, entre otras funcionalidades. Además, se incluye una función para generar un identificador único para cada usuario registrado.

interfaz.cpp: se desarrolla el programa principal que regula la interacción del usuario con la red social a través de la interfaz de línea de comandos. Aquí se establecen los menús y las opciones disponibles para agregar usuarios, visualizar listas de usuarios y publicaciones, así como interactuar con amigos, entre otras funcionalidades clave.
}

¿Qué diferencía a nuestra red social de las demás redes sociales?:

La diferencia principal de esta red social respecto a otras radica en su estructura y enfoque en la experiencia del usuario. Aunque comparte características comunes con otras plataformas similares, como la posibilidad de registrar usuarios, conectar con amigos y compartir contenido, se destaca por su diseño modular y su énfasis en la facilidad de uso.


