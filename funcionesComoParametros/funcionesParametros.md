# Paso de funciones como parámetros

El paso de funciones como parámetros en C es una característica que permite a una función recibir como argumento otra función. Esto es posible en C debido a que en este lenguaje las funciones son tratadas como punteros a funciones.

Cuando pasas una función como parámetro a otra función en C, estás permitiendo que la función receptora utilice la función pasada como parámetro dentro de su cuerpo. Esto es útil en situaciones en las que necesitas una función genérica que pueda realizar una tarea específica y esa tarea pueda ser definida por el usuario.

Por ejemplo, tenemos el siguiente diagrama de flujo: 

[![16-05-2024-0003.jpg](https://i.postimg.cc/hGQhxXHS/16-05-2024-0003.jpg)](https://postimg.cc/CZYFpxht)

En este, tenemos una funcion principal, la cual llama a una segunda funcion o subrutina llamada operacion, la cual recibe como parametros los datos de la variable `X` y `Y`, asi como el nombre de la funcion que se desee ejecutar. En este caso, se ejecuta dos veces, una primera con la subrutina suma, y una segunda con la subrutina resta.

Dentro de la funcion operacion, vemos que la variable resultado, es igual a el valor devuelto por "X" funcion que se mande a llamar, por ejemplo, si mandamos a llamar a la funcion suma en resultado, y vemos el diagrama de flujo, podemos observar que el valor devuelto sera igual a la suma de los datos pasados en las variables `a` y `b`, de igual forma con las demas funciones, al mandarlas llamar el resultado seria igual al valor devuelto por dicha funcion.

[Coodigo --> aqui](funcionesParametros.c)