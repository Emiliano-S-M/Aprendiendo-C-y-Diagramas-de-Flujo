# Hola mundo!

Y como no podia ser de otra forma, [nuestro primer programa](holaMundo.c) es un hola mundo.

Para este programa utilzamos la libreria estandar `<stdio.h>` (Standard Input Output Output Header) de entrada/salida.

Esta libreria incluye las instrucciones basicas de cualquier programa que vallamos a realizar, que las instrucciones `printf` y `scanf`, que son necesarias para *escribir* y *leer* respectivamente.

Por otra parte, los programas comienzan a ajecutarse a partir de un determinado punto, para este caso, ese punto es la instruccion `void main(void)`, la cual es la **funcion principal**, pero mas adelante veremos que son las funcion, aun asi, de momento quedate con ese concepto.

El primer `void` representa que nuestra funcion no devolvera datos de ningun tipo.
El segundo `void` indica que el programa no tiene parametros(veremos que son los parametros mas adelante).

> **Nota:** Todas las instrucciones deben de estar dentro de un bloque **{ }** y finalizar con el dolor de cabeza de todos los programadadores (excepto python y algunos de JS) que es el **;** (punto y coma). Este operador no se utiliza unicamente en los casos en que las instrucciones correspondan a estructuras selectivas como `if`, `if-else`, `switch`, estructuras repetitivas como `for`, `while`, `do-while`, o a nombre de funciones.

Para este programa en particular, el diagrama de flujo es el siguiente.

[![hola-Mundo.jpg](https://i.postimg.cc/0jN4fKGH/hola-Mundo.jpg)](https://postimg.cc/Hcf3WxhQ)

Unicamente indicamos que inicia el programa, que imprimira un mensaje en pantalla (Hola Mundo!) y luego finalizara. [Revisa el programa aqui](holaMundo.c).

Las lineas de codigo que empiezan por `/*` y finalizan con `*/` son comentarios multilinea, que son para tener notas o explicar que es lo que hace determinada parte del codigo, estas lineas no son leidas por nuestro compilador, debido a que como ya se digo, son unicamente comentarios, ademas de los comentarios multilinea, tenemos los comentarios de una sola linea, que se escriben con `//` al principio del comentario.