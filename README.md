# Juego_laberinto_C-_POO
En este miniproyecto se estudian las bases de la programación orientada a objetos en lenguaje C++, de forma divertida con un juego de laberinto en consola.

Para jugar debes usar las teclas 'a','w','d','s' para mover al jugador representado por el '*' y debes conducirlo hasta el '$' para ganar el premio.

Inicio del juego
![image](https://user-images.githubusercontent.com/44630882/125031664-8c41e180-e052-11eb-9ddc-4268d3bdd19c.png)

Fin del juego
![image](https://user-images.githubusercontent.com/44630882/125032084-112cfb00-e053-11eb-9d74-09e9390a9f1b.png)


IMPORTANTE: Debes modificar las rutas de los archivos encabezados .h para que funcione en tu cmputadora.

# Paradigmas de programación

En términos vanos son estilos o formas de pensar(lógica) para resolver problemas.

*Imperativa:  Secuencia de comandos

*Funcional(estructurada):   A partir de funciones matemáticas

*Orientada a objetos:
    Es un paradigma de programación en el cual las aplicaciones están basadas en "objetos"
    en lugar de comandos y "datos" en lugar de lógica.

    El objetivo es pensar en los objetos independientes, sus atributos y comportamientos que
    juntos hacen nuestra aplicación.

    ¿Cuales son sus beneficios?

    Al pensar en la aplicación como objetos que componen la información y comportamiento de
    estos objetos no tiene ninguna dependencia fuera de ellos.
    Esto permite agregar o quitar más objetos sin tener que cambiar todos los objetos del programa.


    Conceptos  de POO a ver:

    -Clases
        Es un tipo de dato complejo definido por el programador.
        Se podría decir que una clase es un plano(blueprint) de
        un objeto.

        Ejemplo:
          Una clase es un como un "molde" para crear galletas.

        ¿Qué es una instancia?

        Es un objeto inicializado de una clase.

        Esto son una entidad ínica basada en una clase.

    -Encapsulación
        Es el proceso de combinar datos y métodos en una
        misma clase evitando que sean modificados directamente
        por factores externos.
    -abstracción
        En los lenguajes de programación es usado para enseñarle al usuario
        al usuario sólo los datos esenciales y esconder el funcionamiento
        y datos innecesarios de él.
    -Herencia
        La herencia es un principio de la programación orientada a objetos
        que nos ayuda a crear nuevas clases que ““heredan”” (y pueden mejorar)
        los métodos y propiedades de la clase ““padre””.
        Debemos crear una nueva clase pero antes de abrir las llaves ({})
        vamos a añadir dos puntos, la palabra public y el nombre de la clase
        que estamos heredando. Por ejemplo:
            class IceMage : public Mage
              {*/Code/*};

        Como vimos en clase, herencia es la capacidad que tienen algunas clases
        (clase derivada) de heredar miembros y funciones de otras clases padre
        (clase base) y así crear jerarquías en nuestro programa.
        Una parte importante en la herencia es el tipo de acceso que se tiene a
        la información y miembros de la clase, estos son los siguientes:
            *Public: Los datos y funciones en esta área pueden ser accedidos por quien sea, al heredar de otra clase con sus datos se mantienen como públicos.
            *Private: Ahora, los datos y funciones en esta área solo pueden ser accedidos por la clase y no por otros. Usando apuntadores uno puede saltarse esta regla pero no es recomendado.
            *Protected: Funciona igual que private, la diferencia es que las clases derivadas pueden acceder a los datos miembro de la clase base que heredan cuando en private esto no es posible.

    -Polimorfismo
        Es la característica de un objeto de tomar varias formas.
        Cuando un tipo de dato hereda de otro este puede tomar la forma del cual
        heredó.



Archivos encabezados y archivos fuente
#include "nombre de nuestro archivo"
