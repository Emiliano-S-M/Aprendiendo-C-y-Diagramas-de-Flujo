# Apuntadores y Arreglos

En C, los arreglos y los apuntadores (punteros) están estrechamente relacionados, ya que un arreglo es esencialmente una colección de elementos contiguos en memoria, y el nombre de un arreglo es en realidad un puntero al primer elemento del arreglo.

Cuando declaras un arreglo en C, el nombre del arreglo actúa como un puntero constante al primer elemento del arreglo, por ejemplo:

```c
int arr[5] = {1, 2, 3, 4, 5};
```

Aqui, hemos declarado nuestro arreglo, donde `arr` es un puntero al primer elemento del arreglo `arr`. Esto significa que `arr` es equivalente a `&arr[0]`.

Ademas, podemos acceder a un elemento especifico de un arreglo, usando apuntadores tal y como se muestra a continuacion.

```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; // ptr apunta al primer elemento del arreglo

printf("%d\n", *ptr);    // Imprime el primer elemento (1)
printf("%d\n", *(ptr+1)); // Imprime el segundo elemento (2)
printf("%d\n", *(ptr+2)); // Imprime el tercer elemento (3)
```

De igual forma, podemos **iterar sobre un arreglo** usando apuntadores, ya que podemos usar un apuntador para recorrer un arreglo:

```c
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr apunta al primer elemento del arreglo

    for (int i = 0; i < 5; i++) {
        printf("Elemento en arr[%d] = %d\n", i, *(ptr + i));
    }
```

Otra caracteristica, es que podemos modificar los elementos de un arreglo usando apuntadores, tal y como se muestra a continuacion

```c
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr apunta al primer elemento del arreglo

    // Modificar elementos usando apuntadores
    *(ptr + 2) = 10; // Cambia el tercer elemento a 10

    // Imprimir los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
```


En este codigo de ejemplo, puedes notar como al llamar a el apuntador `*ptr` que contiene la direccion de memoria del array, y que ademas, conocemos vale `0` y sumarle 2, esta apuntando a la casilla numero 3 del arreglo, esto recordando lo visto en el apartado anterior sobre [como crear un arreglo](../arreglosUnidimensionales/arreglos.md#arreglos-unidimensionales), y al iterar sobre el array muestra el nuevo valor.

Un ejemplo que abarca todo lo anterior esta presente en el siguiente diagrama de Flujo.

[![18-05-2024-0006.jpg](https://i.postimg.cc/QNYVpW84/18-05-2024-0006.jpg)](https://postimg.cc/JtJ180BZ)

[Codigo --> aqui](apuntadoresArreglos.cc)
    