# Arreglos Unidimensionales

Un arreglo unidimensional, también conocido como vector o array, es una estructura de datos que permite almacenar una colección de elementos del mismo tipo en una secuencia contigua de memoria. Cada elemento del arreglo puede ser accedido mediante un índice, que generalmente comienza en 0.

- Declaración y Inicialización
  
  Para declarar un arreglo unidimensional en C, debes especificar el tipo de los elementos y el tamaño del arreglo. Por ejemplo:

  ```c
  int arreglo[10]; // Declaración de un arreglo de 10 enteros
  ```

  Puedes inicializar un arreglo en el momento de su declaración:

  ```c
  int arreglo[5] = {1, 2, 3, 4, 5}; // Inicialización con valores específicos
  ```

  Si no se especifican todos los valores, los elementos restantes se inicializan a 0:

  ```c
  int arreglo[5] = {1, 2}; // Los tres últimos elementos serán 0
  ```

  Puedes acceder a los elementos de un arreglo utilizando el índice correspondiente:

  ```c
  int primerElemento = arreglo[0]; // Accede al primer elemento
  arreglo[1] = 10; // Modifica el segundo elemento
  ```

  <a id="creacionArray"></a>
  De forma general, imagina un arreglo como una caja con muchas divisiones. Para el ejemplo de nuestro arrelgo con 5 divisiones, tendriamos algo asi.

  [![18-05-2024-0001.jpg](https://i.postimg.cc/PqkG7TWT/18-05-2024-0001.jpg)](https://postimg.cc/rDgY06ZP)

  Estas divisiones se cuentan del 0 en adelante, es decir, la primer division ocupa la casilla 0, la segunda division ocupa la casilla 1, y asi consecutivamente.

  [![18-05-2024-0002.jpg](https://i.postimg.cc/SK70F3d8/18-05-2024-0002.jpg)](https://postimg.cc/7C6tSBpY)

  Si nosotros deseamos guardar algo en una determinada casilla, tal como vimos en este fragmento del codigo

  ```c
  int arreglo[5] = {1, 2};
  ```
  Estamos especificando que en las posiciones 0 y 1 guarde a los elementos 1 y 2 respectivamente, por lo que nuestro array se veria asi

  [![18-05-2024-0003.jpg](https://i.postimg.cc/C55981gH/18-05-2024-0003.jpg)](https://postimg.cc/V0y7Qz5d)

  Recuerda que al no especificar con que datos queremos llenar el resto de casillas, estas, automaticamente se rellenaran con un `0`

  Y para poder acceder a estos elementos de forma individual, tal podemos hacerlo tal y como se muestra en el siguiente fragmento de codigo:

  ```c
  int arreglo = arreglo[0];
  ```

  Y esto, nos traera unicamente el contenido correspondiente a la casilla indicada, en este caso a la casilla 0, por lo que tendriamos esto:

  [![18-05-2024-0004.jpg](https://i.postimg.cc/L5Ww3p4d/18-05-2024-0004.jpg)](https://postimg.cc/JHbpRSBK)

  Es decir, que el valor que obtendriamos es 1.

  Por ejemplo, tenemos el siguiente diagrama de flujo:

  [![18-05-2024-0005.jpg](https://i.postimg.cc/sgym78D4/18-05-2024-0005.jpg)](https://postimg.cc/jLgyrMfD)

  En este diagrama de flujo, estamos creando un array o arreglo unidimencional llamado `miArreglo` y estamos indicando que su tamaño es de 5 casillas.

  Posteriormente con un ciclo for, estamos leyendo desde consola los datos que deseamos almacenar, y los estamos almacenando en la posicion `i` de nuestro array, la cual obtenemos desde el numero de ciclo de nuestro for.

  Una vez el ciclo se ha completado 5 veces, se ejecutara un nuevo ciclo, para imrpimir los datos almacenados en nuestro array.

[Codigo --> aqui](arreglos.c)