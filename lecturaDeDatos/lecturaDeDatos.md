# Lectura de datos

En cualquier lenguaje de programación, debemos aprender a leer los datos que el usuario ingrese para su procesamiento, y ejecutar acciones, o dar una respuesta con base en lo que el usuario ingreso, ya sea algo tan simple como mostrar un mensaje, o hacer una simple operación matemática, hasta algo más complejo como determinar el volumen de algo, el área de una figura geométrica, o incluso crear, leer, eliminar o actualizar ficheros.

Como se hizo mención anteriormente, tanto para la lectura como para la escritura de datos variables, necesitamos usar los formatos de variables y las modificaciones al símbolo (‘%’).

Por ejemplo, el siguente diagrama de flujo.

[![Diagrama-De-Flujo-Uno.jpg](https://i.postimg.cc/VkZf8ZcZ/Diagrama-De-Flujo-Uno.jpg)](https://postimg.cc/DSskQg01)

Este diagrama de flujo nos representa la la lectura del nombre, e impresion del mismo, la lectura de la edad, e impresion de la misma, y la lectura de la estatura, y la impresion de la misma, puedes ver el codigo corresponiente de este diagrama de flujo [--> aqui](lecturaDeDatos.c).

Observa que la instrucción de lectura scanf necesita del mismo formato de variables que la instrucción printf analizada anteriormente. La única diferencia radica en que al utilizar la instrucción de lectura se debe escribir el símbolo de dirección `&` antes de cada variable